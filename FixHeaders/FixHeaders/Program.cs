using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;
using System.Threading.Tasks;

namespace FixHeaders
{
    class Program
    {
        private static int FixedCount;
        private static int FixedFileCount;

        private static List<string> HeaderCache = new List<string>();

        private static Dictionary<string, string> NeededIncludes = new Dictionary<string, string>()
        {
            {"UENUM", "UObject/Class.h" },
            {"UCLASS", "UObject/Class.h" },
            {"TSubclassOf", "SubclassOf.h" },
            {"UInterface", "UObject/Interface.h" },
            {"UBlueprintFunctionLibrary", "Kismet/BlueprintFunctionLibrary.h" },
            {"USplineMeshComponent", "Components/SplineMeshComponent.h" },
            {"UFGInstancedSplineMeshComponent", "FGInstancedSplineMeshComponent.h" },
            {"SLATE", "UMG.h" },
            {"AActor", "GameFramework/Actor.h" },
            {"FString", "UnrealString.h" },
            {"TArray", "Array.h" },
            {"FPostProcessSettings", "Engine/Scene.h" },
            {"UWorld", "Engine/World.h" },
            {"IRepChangedPropertyTracker", "UObject/CoreNet.h" },
            {"ULevel", "Engine/Level.h" },
            {"UStaticMesh", "Engine/StaticMesh.h" },
            {"FUpdateTextureRegion2D", "RHI.h" },
            {"FRuntimeFloatCurve", "Curves/CurveFloat.h" },
            {"UDeveloperSettings", "Engine/DeveloperSettings.h" },
            {"FBufferArchive", "Serialization/BufferArchive.h" },
            {"UAkAudioEvent", "../../Plugins/Wwise/Source/AkAudio/Classes/AkAudioEvent.h" },
            {"FGuid", "Misc/Guid.h" }
        };

        static void Main(string[] args)
        {
            string oldPath, modifiedPath, newPath, savePath;
            if (args.Length >= 1)
                oldPath = args[0];
            else
            {
                Console.WriteLine("Old CommunityResources Headers: ");
                oldPath = Console.ReadLine();
            }
            if (args.Length >= 2)
                modifiedPath = args[1];
            else
            {
                Console.WriteLine("Modified Headers: ");
                modifiedPath = Console.ReadLine();
            }
            if (args.Length >= 3)
                newPath = args[2];
            else
            {
                Console.WriteLine("New CommunityResources Headers: ");
                newPath = Console.ReadLine();
            }
            if (args.Length >= 4)
                savePath = args[3];
            else
            {
                Console.WriteLine("New Headers Save Path: ");
                savePath = Console.ReadLine();
            }
            Stopwatch stopwatch = new Stopwatch();
            stopwatch.Start();

            // Intended to implement merging here, but not going to rewrite git merge
            string headerUpgradeFolder = Path.Combine(Environment.CurrentDirectory, "HeaderUpgrade");
            ForceDeleteDirectory(headerUpgradeFolder);
            Directory.CreateDirectory(headerUpgradeFolder);
            Run("git.exe", "init", headerUpgradeFolder);
            DirectoryCopy(oldPath, headerUpgradeFolder);
            Run("git.exe", "add .", headerUpgradeFolder);
            Run("git.exe", "commit -m \"Old Headers\"", headerUpgradeFolder);
            Run("git.exe", "branch ModdingEdit", headerUpgradeFolder);
            Run("git.exe", "checkout ModdingEdit", headerUpgradeFolder);
            DirectoryCopy(modifiedPath, headerUpgradeFolder);
            Run("git.exe", "add .", headerUpgradeFolder);
            Run("git.exe", "commit -m \"Modding Edit Headers\"", headerUpgradeFolder);
            Run("git.exe", "checkout master", headerUpgradeFolder);
            DirectoryCopy(newPath, headerUpgradeFolder);
            Run("git.exe", "add .", headerUpgradeFolder);
            Run("git.exe", "commit -m \"New Headers\"", headerUpgradeFolder);
            Run("git.exe", "merge ModdingEdit", headerUpgradeFolder);
            GenerateHeaderCache(headerUpgradeFolder);
            FixFiles(headerUpgradeFolder);
            Run("git.exe", "add .", headerUpgradeFolder);
            Run("git.exe", "commit -m \"New Modding Edit Headers\"", headerUpgradeFolder);
            DirectoryCopy(headerUpgradeFolder, savePath);
            stopwatch.Stop();
            Console.WriteLine($"Fixed {FixedCount} changes in {FixedFileCount} headers. Took {stopwatch.ElapsedMilliseconds} ms.");
            Console.Write($"Cleaning up... ");
            ForceDeleteDirectory(headerUpgradeFolder);
            Console.WriteLine($"Done.");
        }

        private static void GenerateHeaderCache(string path)
        {
            if(Directory.Exists(path))
            {
                foreach (string dir in Directory.EnumerateDirectories(path))
                    GenerateHeaderCache(Path.Combine(path, dir));
                foreach (string file in Directory.EnumerateFiles(path))
                    HeaderCache.Add(Path.Combine(path, file));
            }
            else if(File.Exists(path))
                HeaderCache.Add(path);
        }

        private static void ForceDeleteDirectory(string directory)
        {
            DirectoryInfo dir = new DirectoryInfo(directory);
            if (!dir.Exists)
                return;

            DirectoryInfo[] dirs = dir.GetDirectories();
            FileInfo[] files = dir.GetFiles();
            foreach (FileInfo file in files)
            {
                File.SetAttributes(file.FullName, RemoveAttribute(File.GetAttributes(file.FullName), FileAttributes.ReadOnly));
                file.Delete();
            }
            foreach (DirectoryInfo subdir in dirs)
            {
                File.SetAttributes(subdir.FullName, RemoveAttribute(File.GetAttributes(subdir.FullName), FileAttributes.ReadOnly));
                ForceDeleteDirectory(subdir.FullName);
            }
            dir.Delete();
        }

        private static void Run(string command, string args, string workingDir)
        {

            Console.WriteLine(Process.Start(new ProcessStartInfo(command, args)
            {
                WorkingDirectory = workingDir,
                RedirectStandardOutput = true,
                UseShellExecute = false
            }).StandardOutput.ReadToEnd());
        }

        private static void FixFiles(string upgradeRepoPath, string path = "")
        {
            if (File.Exists(Path.Combine(upgradeRepoPath, path)))
                ApplyFileFix(upgradeRepoPath, path);
            else if (Directory.Exists(Path.Combine(upgradeRepoPath, path)))
            {
                foreach (string dir in Directory.EnumerateDirectories(Path.Combine(upgradeRepoPath, path)))
                    FixFiles(upgradeRepoPath, Path.Combine(path, new DirectoryInfo(dir).Name));
                foreach (string file in Directory.EnumerateFiles(Path.Combine(upgradeRepoPath, path)))
                    if (file.EndsWith(".h"))
                        ApplyFileFix(upgradeRepoPath, Path.Combine(path, Path.GetFileName(file)));
            }
        }

        private static void ApplyFileFix(string upgradeRepoPath, string filePath)
        {
            if (filePath.EndsWith("FactoryGame.h"))
                return;
            string file = File.ReadAllText(Path.Combine(upgradeRepoPath, filePath));
            bool hasChanges = false;

            // apply previous edits
            foreach (Match m in Regex.Matches(file, @"<<<<<<< HEAD\r?\n((?:.|\s)*?)=======\r?\n((?:.|\s)*?)>>>>>>> ModdingEdit(?:\r?\n)?", RegexOptions.Multiline))
            {
                if (m.Groups[1].Value.StartsWith("#include") || m.Groups[2].Value.StartsWith("#include"))
                {
                    // Keep both
                    file = file.Replace(m.Value, m.Groups[1].Value + m.Groups[2].Value);
                    FixedCount++;
                    hasChanges = true;
                }
                else if (m.Groups[2].Value.Contains("MODDING EDIT"))
                {
                    // Keep edit
                    file = file.Replace(m.Value, m.Groups[2].Value);
                    FixedCount++;
                    hasChanges = true;
                }
                else
                {
                    // Keep CSS changed stuff
                    file = file.Replace(m.Value, m.Groups[1].Value);
                    FixedCount++;
                    hasChanges = true;
                }
            }

            // fix include paths
            foreach (Match m in Regex.Matches(file, @"#include ""(.*?)""", RegexOptions.Multiline))
            {
                try
                {
                    file = file.Replace(m.Value, $"#include \"{GetFileRelative(upgradeRepoPath, m.Groups[1].Value, filePath)}\"");
                    FixedCount++;
                    hasChanges = true;
                }
                catch (ArgumentNullException)
                {
                    // File was not found because it is UE file or .generated.h
                }
            }

            // fix missing includes
            foreach (KeyValuePair<string, string> doesInclude in NeededIncludes)
            {
                if (file.Contains(doesInclude.Key) && !file.Contains($"#include \"{doesInclude.Value}\""))
                {
                    file = file.Insert(file.Substring(file.IndexOf("#pragma once")).IndexOf("\r\n") + file.IndexOf("#pragma once") + "\r\n".Length, $"#include \"{doesInclude.Value}\"\r\n");
                    FixedCount++;
                    hasChanges = true;
                }
            }

            // fix UInterface missing constructor
            file = Regex.Replace(file, @"(class (.*?) : public UInterface\s*{\s*)GENERATED_UINTERFACE_BODY\(\)[\w\s_&\(\):{}]*(};)", "$1\r\n\tGENERATED_BODY()\r\n\t$2(const class FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {} \r\n$3");

            // fix CustomEventUsing
            int customEventCount = Regex.Matches(file, @", ?CustomEventUsing ?= ?[^\s,\)]*").Count;
            if (customEventCount > 0)
                hasChanges = true;
            FixedCount += customEventCount;
            file = Regex.Replace(file, @", ?CustomEventUsing ?= ?[^\s,\)]*", "");

            // fix CheatBoard
            int cheatBoardCount = Regex.Matches(file, @",\s*CheatBoard").Count;
            if (cheatBoardCount > 0)
                hasChanges = true;
            FixedCount += cheatBoardCount;
            file = Regex.Replace(file, @",\s*CheatBoard", "");

            // add FACTORYGAME_API
            int factoryGameApi = 0;
            file = Regex.Replace(file, @"^((?:UCLASS|UINTERFACE|USTRUCT|UENUM)\s*\(.*\)\r\n)?([ \t]*)(class|struct)\s(FACTORYGAME_API\s)?([\w<>\s]*?)(\s?:\s?.*?)?\s*{((?:.|\n)*?)^\2};", new MatchEvaluator((match) =>
            {
                if (match.Groups[1].Value.ToLower().Contains("minimalapi"))
                    return match.Value;
                factoryGameApi++;
                return $"{match.Groups[1]}{match.Groups[2]}{match.Groups[3]} FACTORYGAME_API {match.Groups[5]}{match.Groups[6]}\r\n{{{match.Groups[7]}{match.Groups[2]}}};";
            }), RegexOptions.Multiline);
            if (factoryGameApi > 0)
                hasChanges = true;

            // add FORCEINLINE default constrctor and destructor
            int defaultCtorDtor = 0;
            file = Regex.Replace(file, @"^((?:UCLASS|UINTERFACE|USTRUCT|UENUM)\s*\(.*\)\r\n)?([ \t]*)(class|struct)\s(FACTORYGAME_API\s)?([\w<>\s]*?)(\s?:\s?.*?)?\s*{((?:.|\n)*?)^\2};", new MatchEvaluator((match) =>
            {
                bool needsCtor = true;
                bool needsDtor = true;
                if (match.Groups[7].Value.Contains($"~{match.Groups[5].Value.Trim()}()"))
                {
                    // Destructor already exists.
                    // TODO: Check if it is FORCEINLINE
                    needsDtor = false;
                }
                else if (match.Groups[5].Value.Trim()[0] == 'I')
                {
                    // GENERATED_IINTERFACE_BODY already defines the destructor
                    needsDtor = false;
                }
                else
                {
                    defaultCtorDtor++;
                }
                if (match.Groups[7].Value.Contains($"{match.Groups[5].Value.Trim()}("))
                {
                    // Constructor already exists.
                    // TODO: Check if it is FORCEINLINE?
                    needsCtor = false;
                }
                else
                {
                    defaultCtorDtor++;
                }
                if (!needsDtor && !needsCtor)
                    return match.Value;

                string toAdd = $"\r\npublic:{(needsDtor ? $"\r\n\tFORCEINLINE ~{match.Groups[5]}() = default;" : "")}{(needsCtor ? $"\r\n\tFORCEINLINE {match.Groups[5]}() = default;" : "")}\r\n";

                return $"{match.Groups[1]}{match.Groups[2]}{match.Groups[3]} {match.Groups[4]}{match.Groups[5]}{match.Groups[6]}\r\n{{{match.Groups[7].Value}{toAdd}{match.Groups[2]}}};";
            }), RegexOptions.Multiline);
            if (defaultCtorDtor > 0)
                hasChanges = true;

            if (hasChanges)
                FixedFileCount++;

            File.WriteAllText(Path.Combine(upgradeRepoPath, filePath), file);
        }

        private static object GetFileRelative(string root, string file, string relativeTo)
        {
            // https://stackoverflow.com/a/9045399
            Uri filePath = new Uri(HeaderCache.Find(path => path.EndsWith("\\" + file)), UriKind.Absolute);
            Uri relTo = new Uri(Path.Combine(root, relativeTo), UriKind.Absolute);

            return relTo.MakeRelativeUri(filePath).ToString();
        }

        // https://stackoverflow.com/a/7064944
        private static void DirectoryCopy(string sourceDirName, string destDirName,
                                      bool copySubDirs = true)
        {
            // Get the subdirectories for the specified directory.
            DirectoryInfo dir = new DirectoryInfo(sourceDirName);

            if (!dir.Exists)
            {
                throw new DirectoryNotFoundException(
                    "Source directory does not exist or could not be found: "
                    + sourceDirName);
            }

            DirectoryInfo[] dirs = dir.GetDirectories();
            // If the destination directory doesn't exist, create it.
            if (!Directory.Exists(destDirName))
            {
                Directory.CreateDirectory(destDirName);
            }

            // Get the files in the directory and copy them to the new location.
            FileInfo[] files = dir.GetFiles();
            foreach (FileInfo file in files)
            {
                string temppath = Path.Combine(destDirName, file.Name);
                file.CopyTo(temppath, true);
                File.SetAttributes(temppath, RemoveAttribute(File.GetAttributes(temppath), FileAttributes.ReadOnly));
            }

            // If copying subdirectories, copy them and their contents to new location.
            if (copySubDirs)
            {
                foreach (DirectoryInfo subdir in dirs)
                {
                    if (!subdir.Name.StartsWith("."))
                    {
                        string temppath = Path.Combine(destDirName, subdir.Name);
                        DirectoryCopy(subdir.FullName, temppath, copySubDirs);
                    }
                }
            }
        }

        // part of https://stackoverflow.com/a/7399663
        private static FileAttributes RemoveAttribute(FileAttributes attributes, FileAttributes attributesToRemove)
        {
            if((attributes & attributesToRemove) == attributesToRemove)
                return attributes & ~attributesToRemove;
            return attributes;
        }
    }
}
