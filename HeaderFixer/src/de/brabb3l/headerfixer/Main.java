package de.brabb3l.headerfixer;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.ArrayList;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class Main {

	static int fileCount = 0;
	static int fileSuccessCount = 0;
	static int commitChanges = 0;
	static int fixedIncludes = 0;
	
	static int commitCount = 0;
	
	static String tmp = "";
	
	public static ArrayList<String> loadCommitFile(String name) throws IOException {
		ArrayList<String> replacements = new ArrayList<String>();
		
		BufferedReader dreader = new BufferedReader(new FileReader(name));
		
		String queue = "";
		String dline;
		while ((dline = dreader.readLine()) != null) {
			if (dline.equals("-----------------------------------")) {
				replacements.add(queue.substring(0, queue.lastIndexOf('\n')));
				queue = "";
			} else
				queue += dline + "\n";
		}
		
		dreader.close();
		
		return replacements;
	}
	
	public static void main(String[] args) throws IOException {
		long start = System.currentTimeMillis();
		
		System.out.println("fixing headers...");
		
		fix(new File("headers"), args[0]);
		
		System.out.println("fixing implementations...");
		
		fix(new File("generated"), args[1]);
		
		System.out.println("Successfully fixed " + fileSuccessCount + " / " + fileCount + " files");
		System.out.println("Committed " + commitChanges + " / " + commitCount + " changes");
		System.out.println("Fixed " + fixedIncludes + " includes");
		System.out.println("Operation took " + (System.currentTimeMillis() - start) + "ms");
	}
		
	public static void fix(File folder, String outputFolder) throws IOException {
		ArrayList<String> commits = loadCommitFile("commits.txt");
		ArrayList<String> duplicates = loadCommitFile("duplicates.txt");
		
		final Pattern pattern = Pattern.compile("\\:\\:Serialize\\(.*\\).*");
		final Pattern includePattern = Pattern.compile("\\#include \".*\"\n");

		commitCount = commits.size();
		
		new File(outputFolder).mkdirs();
		
		traverseFolder(folder, (file) -> {
			fileCount ++;
			
			try {
				// make directories
				new File(outputFolder + "/" + file.getCanonicalPath().substring(folder.getCanonicalPath().length() + 1)).getParentFile().mkdirs();
				
				// Output File
				File fileout = new File(outputFolder + "/" + file.getCanonicalPath().substring(folder.getCanonicalPath().length() + 1));
				
				// Read all content
				BufferedReader reader = new BufferedReader(new FileReader(file));
				String content = "";
				
				String line;
				while ((line = reader.readLine()) != null)
					content += line + "\n";
				
				reader.close();
				
				// Setup writing
				BufferedWriter writer = new BufferedWriter(new FileWriter(fileout));
				
				// Commit changes
				for (String rep : commits) {
					if (rep.startsWith(file.getName())) {
						// split to 'to find' and 'to replace'
						String r = rep.substring(file.getName().length() + 1);
						String[] pattern_rep = r.split("\n\\@\\@\\@\\@\\@\\@\\@\\@\\@\\@\\@\\@\\@\\@\\@\\@\\@\\@\\@\\@\\@\n");
						
						// apply commit
						String old = content;
						
						if (pattern_rep[0].startsWith("$")) {
							content = content.replaceAll(pattern_rep[0].substring(1), pattern_rep[1]);
							if (!old.equals(content))
								commitChanges++;
							else
								System.out.println("Failed to regex commit:\n " + pattern_rep[0]);
						} else {
							content = content.replace(pattern_rep[0], pattern_rep[1]);
							if (!old.equals(content))
								commitChanges++;
							else
								System.out.println("Failed to commit:\n " + pattern_rep[0]);
						}
					}
				}
				
				// Fix header includes
				if (fileout.getName().endsWith(".h")) {
					Matcher matcher = includePattern.matcher(content); // match every #include occurrence
					int offset = 0;
					
					while (matcher.find()) {
						String headerFile = matcher.group().substring("#include ".length()).replace("\"", "").replace("\n", "");
						
						// check if header file starts with FG and doesn't contain a '/'
						if (!headerFile.contains("/") && headerFile.startsWith("FG")) {
							traverseFolder(folder, (f) -> { // traverse folder to find the correct file
								if (f.getName().equals(headerFile)) {
									try {
										String relPath = f.getCanonicalPath().substring(folder.getCanonicalPath().length() + 1);
										tmp = relPath;
									} catch (IOException e) {
										e.printStackTrace();
									}
								}
							});
							
							// check and apply it
							if (!tmp.isEmpty()) {
								if (tmp.length() != headerFile.length()) {
									String newInclude = "#include \"" + tmp.replace('\\', '/') + "\" // MODDING EDIT\n";
									fixedIncludes++;
									content = content.substring(0, matcher.start() + offset) + newInclude + content.substring(matcher.end() + offset);
									offset += newInclude.length() - matcher.group().length();
								}
							}
							
							tmp = "";
						}
					}
				}
				
				// replace and remove other stuff
				if (fileout.getName().endsWith(".h")) {
					content = content.replaceAll(".*virtual.*OnRegister\\(.*\\).*override.*;.*\n", "");
					content = content.replaceAll(".*virtual.*OnUnregister\\(.*\\).*override.*;.*\n", "");
				} else if (fileout.getName().endsWith(".cpp")) {
					content = content.replaceAll(".*\\:\\:OnRegister\\(.*\\).*\n", "");
					content = content.replaceAll(".*\\:\\:OnUnregister\\(.*\\).*\n", "");
					content = content.replaceAll("\\:\\:BeginDestroy\\(.*\\).*", "::BeginDestroy(){ Super::BeginDestroy(); }");
					content = content.replaceAll("\\:\\:PostLoad\\(.*\\).*", "::PostLoad(){ Super::PostLoad(); }");
					
					Matcher matcher = pattern.matcher(content);
					
					while (matcher.find()) {
						int s = matcher.start();
						
						while (!content.substring(s).startsWith("void ")) {
							if (content.charAt(s) == '\n')
								break;
							else
								s--;
						}
						
						if (content.substring(s).startsWith("void ")) {
							content = content.substring(0, matcher.start()) + "::Serialize(FArchive& ar){ Super::Serialize(ar); }" + content.substring(matcher.end());
						}
					}
					
					content = content.replaceAll("\\:\\:PreSave\\(.*\\).*", "::PreSave( const ITargetPlatform* targetPlatform ){ Super::PreSave(targetPlatform); }");
					
					// remove duplicates
					for (String rep : duplicates) {
						content = content.replace(rep, "");
					}
				}
				
				writer.write(content);
				writer.close();
				
				fileSuccessCount++;
			} catch (Exception e) {
				e.printStackTrace();
			}
		});
	}
	
	interface FileVisitor {
		void visit(File file);
	}
	
	public static void traverseFolder(File folder, FileVisitor visitor) throws IOException {
		for (File file : folder.listFiles()) {
			if (file.isDirectory()) {
				traverseFolder(file, visitor);
			} else {
				visitor.visit(file);
			}
		}
	}
	
}
