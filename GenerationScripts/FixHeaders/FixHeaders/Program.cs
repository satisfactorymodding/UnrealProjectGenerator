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
        private static bool HasConflict = false;

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
            {"FGuid", "Misc/Guid.h" },
            {"IFGChainsawableInterface", "FGInventoryComponent.h" }
        };

        private static List<string> SkipCtorClasses = new List<string>
        {
            "UFGConsoleCommandManager",
            "AFGBuildableGeneratorGeoThermal"
        };

        private static List<string> SkipDtorClasses = new List<string>
        {
        };

        static void ConfirmModdingEdits()
        {
            if (HasConflict)
            {
                do
                {
                    Console.WriteLine("Please confim code around modding edits is valid");
                } while (Console.ReadLine() != "CONFIRM");
            }
        }
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
            string headerUpgradeHeadersFolder = Path.Combine(headerUpgradeFolder, "Headers");
            ForceDeleteDirectory(headerUpgradeFolder);
            Directory.CreateDirectory(headerUpgradeFolder);
            Directory.CreateDirectory(headerUpgradeHeadersFolder);
            Run("git.exe", "init", headerUpgradeFolder);
            DirectoryCopy(oldPath, headerUpgradeHeadersFolder);
            Run("git.exe", "rm -r --cached *", headerUpgradeFolder);
            Run("git.exe", "add .", headerUpgradeFolder);
            Run("git.exe", "commit -m \"Old Headers\"", headerUpgradeFolder);
            Run("git.exe", "branch ModdingEdit", headerUpgradeFolder);
            Run("git.exe", "checkout ModdingEdit", headerUpgradeFolder);
            DirectoryCopy(modifiedPath, headerUpgradeHeadersFolder);
            Run("git.exe", "rm -r --cached *", headerUpgradeFolder);
            Run("git.exe", "add .", headerUpgradeFolder);
            Run("git.exe", "commit -m \"Modding Edit Headers\"", headerUpgradeFolder);
            Run("git.exe", "checkout master", headerUpgradeFolder);
            DirectoryCopy(newPath, headerUpgradeHeadersFolder);
            Run("git.exe", "rm -r --cached *", headerUpgradeFolder);
            Run("git.exe", "add .", headerUpgradeFolder);
            Run("git.exe", "commit -m \"New Headers\"", headerUpgradeFolder);
            Run("git.exe", "merge ModdingEdit", headerUpgradeFolder);
            GenerateHeaderCache(headerUpgradeFolder);
            FixFiles(headerUpgradeFolder);
            ConfirmModdingEdits();
            Run("git.exe", "rm -r --cached *", headerUpgradeFolder);
            Run("git.exe", "add .", headerUpgradeFolder);
            Run("git.exe", "commit -m \"New Modding Edit Headers\"", headerUpgradeFolder);
            DirectoryCopy(headerUpgradeHeadersFolder, savePath);
            stopwatch.Stop();
            Console.WriteLine($"Fixed {FixedCount} changes in {FixedFileCount} headers. Took {stopwatch.ElapsedMilliseconds} ms.");
            Console.Write($"Cleaning up... ");
            ForceDeleteDirectory(headerUpgradeFolder);
            Console.WriteLine($"Done.");
        }
        public static void Empty(DirectoryInfo directory)
        {
            foreach (DirectoryInfo subDirectory in directory.GetDirectories()) subDirectory.Delete(true);
            foreach (FileInfo file in directory.GetFiles()) file.Delete();
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
                else
                {
                    // Manual conflict solving required
                    HasConflict = true;
                }
            }

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
            if(new DirectoryInfo(destDirName).Exists)
                Empty(new DirectoryInfo(destDirName));

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
