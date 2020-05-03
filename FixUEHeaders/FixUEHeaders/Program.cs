using Newtonsoft.Json;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using Doxygen;
using System.Text.RegularExpressions;
using System.Linq;

namespace FixUEHeaders
{
    public class Program
    {
        // I hate Doxygen

        static List<string> SkipFilesRegex = new List<string> { @".*MinimalWindowsApi\.h", @".*Platform.*", @".*Interval\.h" };
        const string FORCEINLINE_STRING = "MODDING_SHIPPING_FORCEINLINE";
        const string CLASS_REGEX = @"^(([ \t]*)(class|struct) ([^ ]*? )??([^ ]*?)( final)?( ?: ?.*?)?\s*{((?:.|\n)*?))(^\2};)";
        const string CLASS_REGEX_WITH_S = @"^(([\s\t]*)(class|struct)\s([^\s]*?\s)??([^\s]*?)( final)?(\s?:\s?.*?)?\s*{((?:.|\n)*?))(^\2};)";
        static string[] SML_DEPENDENCIES = new string[]{ "AnimGraphRuntime", "UtilityShaders", "InputCore", "TimeManagement", "ApplicationCore", "AIModule", /*"SlateCore", */"BlueprintGraph", "Engine", "AnimationCore", "MovieScene", "APEX", "MeshDescription", "ClothingSystemRuntimeInterface", "PhysX", "NavigationSystem", "PakFile", "UnrealEd", "PhysXVehicles", "SignificanceManager", "AssetRegistry", "Messaging", "EngineMessages", "OnlineSubsystem", "RenderCore", "Json", "Sockets", /*"Slate", */"GameplayTags", "DirectXMath", "EngineSettings", "GameplayTasks", "UMG", "PropertyPath", "PacketHandler", "CoreUObject", "AkAudio", "Core", "AudioPlatformConfiguration", "Kismet", "OnlineSubsystemUtils", "ImageWrapper", "ApexDestruction", "OnlineSubsystemNULL", "MessagingCommon", "MovieSceneTracks", "RSA", "RHI", "HTML5JS", "HTTP", "SynthBenchmark", "ReplicationGraph" };
        static string[] SML_DEPENDENCIES_IGNORE = new string[] { }; // Just in case
        static int FixedFileCount = 0;
        static void Main(string[] args)
        {
            string UERootPath;
            if (args.Length == 0)
            {
                Console.Write("UE root path: ");
                UERootPath = Console.ReadLine();
            }
            else
                UERootPath = args[0];
            Stopwatch stopwatch = new Stopwatch();
            stopwatch.Start();
            Implement(UERootPath);
            stopwatch.Stop();
            Console.WriteLine($"Done. Fixed {FixedFileCount} files in {stopwatch.ElapsedMilliseconds} ms.");
        }

        private static void Implement(string path)
        {
            if (File.Exists(path))
            {
                if (path.EndsWith(".h"))
                    FixFile(path);
            }
            else if (Directory.Exists(path))
            {
                foreach (string dir in Directory.EnumerateDirectories(path))
                    Implement(dir);
                foreach (string file in Directory.EnumerateFiles(path))
                    if (file.EndsWith(".h") && !SkipFilesRegex.Exists((reg) => Regex.IsMatch(file, reg)) && SML_DEPENDENCIES.Any((dep) => file.Contains("Runtime\\" + dep + "\\")) && !SML_DEPENDENCIES_IGNORE.Any((dep) => file.Contains("Runtime\\" + dep + "\\")))
                        FixFile(file);
            }
        }

        private static void FixFile(string filePath)
        {
            string fileContents = File.ReadAllText(filePath);
            Dictionary<string, string> changes = new Dictionary<string, string>();
            Dictionary<string, string> priorityChanges = new Dictionary<string, string>();
            string modifiedContents = fileContents;
            modifiedContents = Regex.Replace(modifiedContents, @"^(class|struct)\s*(.*);(?:\r?\n|$)", "", RegexOptions.Multiline);
            foreach (Match match in Regex.Matches(modifiedContents, CLASS_REGEX, RegexOptions.Multiline)) // Match class/struct definition
            {
                string className = match.Groups[5].Value;
                string classContents = match.Groups[8].Value;
                if (!IsValidClassName(className))
                    continue;
                var classFixes = FixClass(className, classContents, match);
                foreach (var change in classFixes.Item1)
                    if (!changes.ContainsKey(change.Key)) // Would get the same value anyway
                        changes.Add(change.Key, change.Value);
                foreach (var change in classFixes.Item2)
                    if (!priorityChanges.ContainsKey(change.Key)) // Would get the same value anyway ^TM
                        priorityChanges.Add(change.Key, change.Value);
            }
            foreach (var change in priorityChanges)
                fileContents = fileContents.Replace(change.Key, change.Value);
            foreach (var change in changes)
                fileContents = fileContents.Replace(change.Key, change.Value);
            File.WriteAllText(filePath, fileContents);
            Console.WriteLine($"Fixed file {filePath}");
            FixedFileCount++;
        }

        private static Tuple<Dictionary<string, string>, Dictionary<string, string>> FixClass(string className, string classContents, Match matchedAs)
        {
            if(className.StartsWith("S"))
            {
                // Slate, it's macros break regex
                return Tuple.Create(new Dictionary<string, string>(), new Dictionary<string, string>());
            }
            Dictionary<string, string> changes = new Dictionary<string, string>();
            Dictionary<string, string> priorityChanges = new Dictionary<string, string>();
            classContents = Regex.Replace(classContents, @"\/+\*(?:.|\s)*?\*\/", ""); // fix for comments containing brackets being matched as functions
            classContents = Regex.Replace(classContents, @"\/{2,}.*", ""); // fix for comments causing some error
            classContents = Regex.Replace(classContents, @"\s*GENERATED.*?\(\)", ""); // fix for GENERATED... macros being matched
            classContents = Regex.Replace(classContents, @"\s*UPROPERTY ?\( ?(?:.|\s)*?;", ""); // fix for UPROPERTY... macros being matched
            classContents = Regex.Replace(classContents, @"\s*UE_DEPRECATED ?\( ?(?:.|\s)*?\)", ""); // fix for UE_DEPRECATED... macros being matched
            classContents = Regex.Replace(classContents, @"\s*DEPRECATED ?\( ?(?:.|\s)*?\)", ""); // fix for DEPRECATED... macros being matched
            bool foundDestructor = true;
            // remove #ifs
            foreach (Match ifMacro in Regex.Matches(classContents, @"\s*#if (.*?)\n((?:.|\n)*?)\n\s*#endif(.*)"))
            {
                string ifContents = ifMacro.Groups[2].Value;
                classContents = classContents.Replace(ifMacro.Value, ifContents);
            }
            foreach (Match match in Regex.Matches(classContents, CLASS_REGEX_WITH_S, RegexOptions.Multiline)) // Match inner class/struct definition
            {
                string innerClassName = match.Groups[5].Value;
                string innerClassContents = match.Groups[8].Value;
                if (!IsValidClassName(innerClassName))
                    continue;
                var classFixes = FixClass(className + "::" + innerClassName, innerClassContents, match);
                foreach (var change in classFixes.Item1)
                    if (!changes.ContainsKey(change.Key)) // Would get the same value anyway
                        changes.Add(change.Key, change.Value);
                foreach (var change in classFixes.Item2)
                    if (!priorityChanges.ContainsKey(change.Key)) // Would get the same value anyway ^TM
                        priorityChanges.Add(change.Key, change.Value);
                classContents = classContents.Replace(match.Value, "");
            }
            foreach (var change in FixFunctions(classContents, className, ref foundDestructor))
                if (!changes.ContainsKey(change.Key)) // Would get the same value anyway
                    changes.Add(change.Key, change.Value);
            if(!foundDestructor)
                priorityChanges.Add(matchedAs.Value, $"{matchedAs.Groups[1].Value}\r\npublic:{(foundDestructor ? "" : $"\r\n\t{FORCEINLINE_STRING} ~{className.Substring(className.LastIndexOf(":") + 1)}() = default;")}\r\n{matchedAs.Groups[9].Value}");
            return Tuple.Create(changes, priorityChanges);
        }

        private static Dictionary<string, string> FixFunctions(string content, string className, ref bool foundDestructor)
        {
            className = className.Substring(className.LastIndexOf(":") + 1);
            content = Regex.Replace(content, @"\r\n\s*public:", "\r\n");
            content = Regex.Replace(content, @"\r\n\s*private:", "\r\n");
            content = Regex.Replace(content, @"\r\n\s*protected:", "\r\n");
            Dictionary<string, string> changes = new Dictionary<string, string>();
            // Match function definition (including UFUNCTIONs)
            foreach (Match function in Regex.Matches(content, @"^([ \t]*(?:(UFUNCTION\s*\(.*?\))\s*)?(template\s*<\s*.*?>\s*)?)((virtual[ \t]?)?(static[ \t]?)?(const[ \t]?)?(class[ \t]?)?(explicit[ \t]?)?([^=()\n{}]*?[ \t])?((?:[^=<>()\n{}]|operator.+)*?)(\((?:(?:[^{}\n]*?\n)*?|[^{}\n]*?)\))([ \t]*const)?([ \t]*override)?([^{}]*?)[ \t]*=[ \t]*default;)", RegexOptions.Multiline))
            {
                string prefix = function.Groups[1].Value;
                string ufunction = function.Groups[2].Value;
                string template = function.Groups[3].Value;
                string suffix = function.Groups[4].Value;
                string isVirtual = function.Groups[5].Value;
                string isStatic = function.Groups[6].Value;
                string isReturnConst = function.Groups[7].Value;
                string isClass = function.Groups[8].Value;
                string isExplicit = function.Groups[9].Value;
                string returnType = function.Groups[10].Value;
                string functionName = function.Groups[11].Value;
                string parameters = function.Groups[12].Value;
                string isConst = function.Groups[13].Value;
                string isOverride = function.Groups[14].Value;
                string extras = function.Groups[15].Value;

                if (!IsValidFunctionName(functionName) && !(functionName.Trim().Replace("~", "") == className && string.IsNullOrWhiteSpace(returnType)))
                    continue;
                if (!IsValidReturnType(returnType))
                    continue;

                // regex takes too long and it is the only other way to fix UPARAM's closing bracket being matched as parameter closing bracket...
                // also happens on non primitive default parameters 
                int bracketCount = parameters.Count(ch => ch == '(') - parameters.Count(ch => ch == ')');
                if (bracketCount > 0)
                {
                    parameters += isConst + isOverride;
                    isConst = "";
                    isOverride = "";
                    while (bracketCount > 0)
                    {
                        parameters += extras[0];
                        if (extras[0] == '(')
                            bracketCount++;
                        if (extras[0] == ')')
                            bracketCount--;
                        extras = extras.Substring(1);
                    }
                    if (extras.Contains("const"))
                        isConst = " const";
                    if (extras.Contains("override"))
                        isConst = " override";
                }

                parameters = Regex.Replace(parameters, @"UPARAM\s*\(.*?\)", "");

                parameters = Regex.Replace(parameters, @"\/\*.*?\*\/", ""); // fix for commented defaults
                template = Regex.Replace(template, @"\/\*.*?\*\/", ""); // fix for commented defaults ?

                if (functionName.Trim() == "~" + className)
                    foundDestructor = true;

                if (!returnType.Contains("FORCEINLINE") && string.IsNullOrWhiteSpace(isVirtual))
                    changes.Add(function.Groups[0].Value, $"{prefix}{FORCEINLINE_STRING} {suffix}");
            }

            // Check for non-inline constructors
            foreach (Match function in Regex.Matches(content, @"^([ \t]*(?:(UFUNCTION\s*\(.*?\))\s*)?(template\s*<\s*.*?>\s*)?)((virtual[ \t]?)?(static[ \t]?)?(const[ \t]?)?(class[ \t]?)?(explicit[ \t]?)?([^=()\n{}]*?[ \t])?((?:[^=<>()\n{}]|operator.+)*?)(\((?:[^{}\n]*?(?:\n[^{}\n]*?)*|[^{}\n]*?)\))([ \t]*const)?([ \t]*override)?([^{}()]*?);)", RegexOptions.Multiline))
            {
                string prefix = function.Groups[1].Value;
                string ufunction = function.Groups[2].Value;
                string template = function.Groups[3].Value;
                string suffix = function.Groups[4].Value;
                string isVirtual = function.Groups[5].Value;
                string isStatic = function.Groups[6].Value;
                string isReturnConst = function.Groups[7].Value;
                string isClass = function.Groups[8].Value;
                string isExplicit = function.Groups[9].Value;
                string returnType = function.Groups[10].Value;
                string functionName = function.Groups[11].Value;
                string parameters = function.Groups[12].Value;
                string isConst = function.Groups[13].Value;
                string isOverride = function.Groups[14].Value;
                string extras = function.Groups[15].Value;

                if (!IsValidFunctionName(functionName))
                    continue;

                if (functionName.Trim() == "~" + className)
                    foundDestructor = true;
                content = content.Replace(function.Value, "");
            }

            // Match function definition (including UFUNCTIONs), nothing to see here ... just walk away ... probably the reason for many missing implementations...
            foreach (Match function in Regex.Matches(content, @"^([ \t]*(?:(UFUNCTION\s*\(.*?\))\s*)?(template\s*<\s*.*?>\s*)?)((virtual[ \t]?)?(static[ \t]?)?(const[ \t]?)?(class[ \t]?)?(explicit[ \t]?)?([^=()\n{}]*?[ \t])?((?:[^=<>()\n{}]|operator.+)*?)(\((?:[^{};\n]*?(?:\n[^{};\n]*?)*|[^{};\n]*?)\))([ \t]*const)?([ \t]*override)?((?:[^;]|\n)*?)\s*{(?:.|\s)*?})", RegexOptions.Multiline))
            {
                string prefix = function.Groups[1].Value;
                string ufunction = function.Groups[2].Value;
                string template = function.Groups[3].Value;
                string suffix = function.Groups[4].Value;
                string isVirtual = function.Groups[5].Value;
                string isStatic = function.Groups[6].Value;
                string isReturnConst = function.Groups[7].Value;
                string isClass = function.Groups[8].Value;
                string isExplicit = function.Groups[9].Value;
                string returnType = function.Groups[10].Value;
                string functionName = function.Groups[11].Value;
                string parameters = function.Groups[12].Value;
                string isConst = function.Groups[13].Value;
                string isOverride = function.Groups[14].Value;
                string extras = function.Groups[15].Value;

                if (!IsValidFunctionName(functionName) && !(functionName.Trim().Replace("~", "") == className && string.IsNullOrWhiteSpace(returnType)))
                    continue;
                if (!IsValidReturnType(returnType))
                    continue;

                // regex takes too long and it is the only other way to fix UPARAM's closing bracket being matched as parameter closing bracket...
                // also happens on non primitive default parameters 
                int bracketCount = parameters.Count(ch => ch == '(') - parameters.Count(ch => ch == ')');
                if (bracketCount > 0)
                {
                    parameters += isConst + isOverride;
                    isConst = "";
                    isOverride = "";
                    while (bracketCount > 0)
                    {
                        if(extras.Length == 0) break;

                        parameters += extras[0];
                        if (extras[0] == '(')
                            bracketCount++;
                        if (extras[0] == ')')
                            bracketCount--;
                        extras = extras.Substring(1);
                    }
                    if (extras.Contains("const"))
                        isConst = " const";
                    if (extras.Contains("override"))
                        isConst = " override";
                }
                if (bracketCount > 0) continue;

                parameters = Regex.Replace(parameters, @"UPARAM\s*\(.*?\)", "");

                parameters = Regex.Replace(parameters, @"\/\*.*?\*\/", ""); // fix for commented defaults
                template = Regex.Replace(template, @"\/\*.*?\*\/", ""); // fix for commented defaults ?

                if (functionName.Trim() == "~" + className)
                    foundDestructor = true;
                if (!string.IsNullOrWhiteSpace(ufunction))
                    changes.Add(function.Groups[0].Value, $"\t{FORCEINLINE_STRING + Environment.NewLine}{prefix}{suffix}");
                else if (!returnType.Contains("FORCEINLINE") && string.IsNullOrWhiteSpace(isVirtual))
                    changes.Add(function.Groups[0].Value, $"{prefix}{FORCEINLINE_STRING} {suffix}");
            }
            return changes;
        }

        private static bool IsValidClassName(string className)
        {
            return Regex.Match(className, @"^[\w\d_]+$").Success;
        }

        private static bool IsValidFunctionName(string functionName)
        {
            return Regex.Match(functionName.Trim(), @"^([\w\d_~]+|operator.+)$").Success && !(new string[] { "return", "if", "else", "while", "const", "struct", "for", "check", "checkSlow", "checkf", "PhysicsParallelFor", "case" /* fill with more as they show up */ }).Contains(functionName.Trim()) && !IsAllCaps(functionName.Trim()); // Don't match macros
        }

        private static bool IsValidReturnType(string returnType)
        {
            return !(new string[] { ">::Type", "case" /* fill with more as they show up */ }).Contains(returnType.Trim());
        }

        private static bool IsAllCaps(string str)
        {
            return !Regex.Match(str, "[a-z]").Success && !string.IsNullOrWhiteSpace(str);
        }
    }
}
