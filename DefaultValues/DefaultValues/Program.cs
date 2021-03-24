using Microsoft.CSharp.RuntimeBinder;
using Newtonsoft.Json.Linq;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Text.RegularExpressions;

namespace DefaultValues
{
    class Program
    {
        private static bool CountOnly = false;

        private static List<Tuple<string, string>> AllClasses = new List<Tuple<string, string>>()
        {
            new Tuple<string, string>("UAIPerceptionComponent", ""),
            new Tuple<string, string>("UAkComponent", "AkAudio/Classes/AkComponent.h"),
            new Tuple<string, string>("UBillboardComponent", ""),
            new Tuple<string, string>("UBoxComponent", ""),
            new Tuple<string, string>("UBrushComponent", "Components/BrushComponent.h"),
            new Tuple<string, string>("UCameraComponent", ""),
            new Tuple<string, string>("UCapsuleComponent", "Components/CapsuleComponent.h"),
            new Tuple<string, string>("UCharacterMovementComponent", ""),
            new Tuple<string, string>("UDecalComponent", ""),
            new Tuple<string, string>("UDestructibleComponent", ""),
            new Tuple<string, string>("UHierarchicalInstancedStaticMeshComponent", "Components/HierarchicalInstancedStaticMeshComponent.h"),
            new Tuple<string, string>("UInputComponent", ""),
            new Tuple<string, string>("UInstancedStaticMeshComponent", ""),
            new Tuple<string, string>("UMaterialBillboardComponent", ""),
            new Tuple<string, string>("UMeshComponent", ""),
            new Tuple<string, string>("UParticleSystemComponent", ""),
            new Tuple<string, string>("UPathFollowingComponent", ""),
            new Tuple<string, string>("UPawnActionsComponent", ""),
            new Tuple<string, string>("UProjectileMovementComponent", "GameFramework/ProjectileMovementComponent.h"),
            new Tuple<string, string>("UProxyHierarchicalInstancedStaticMeshComponent", "Components/ProxyHierarchicalInstancedStaticMeshComponent.h"),
            new Tuple<string, string>("UProxyInstancedStaticMeshComponent", "Components/ProxyInstancedStaticMeshComponent.h"),
            new Tuple<string, string>("URotatingMovementComponent", "GameFramework/RotatingMovementComponent.h"),
            new Tuple<string, string>("USceneCaptureComponent", "Components/SceneCaptureComponent.h"),
            new Tuple<string, string>("USceneCaptureComponent2D", "Components/SceneCaptureComponent2D.h"),
            new Tuple<string, string>("USceneComponent", "Components/SceneComponent.h"),
            new Tuple<string, string>("UShapeComponent", "Components/ShapeComponent.h"),
            new Tuple<string, string>("USkeletalMeshComponent", "Components/SkeletalMeshComponent.h"),
            new Tuple<string, string>("USphereComponent", "Components/SphereComponent.h"),
            new Tuple<string, string>("USplineComponent", "Components/SplineComponent.h"),
            new Tuple<string, string>("USplineMeshComponent", "Components/SplineMeshComponent.h"),
            new Tuple<string, string>("USpringArmComponent", "GameFramework/SpringArmComponent.h"),
            new Tuple<string, string>("UStaticMeshComponent", "Components/StaticMeshComponent.h"),
            new Tuple<string, string>("UTextRenderComponent", "Components/TextRenderComponent.h"),
            new Tuple<string, string>("UWheeledVehicleMovementComponent", "WheeledVehicleMovementComponent.h"),
            new Tuple<string, string>("UWidgetComponent", "Components/WidgetComponent.h"),
            new Tuple<string, string>("UFGInstancedSplineMeshComponent", "FGInstancedSplineMeshComponent.h"),
            new Tuple<string, string>("UEnvQueryContext_Querier", "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"),
            new Tuple<string, string>("UFloatingPawnMovement", "GameFramework/FloatingPawnMovement.h"),
            new Tuple<string, string>("UNavArea_Obstacle", "NavAreas/NavArea_Obstacle.h"),
            new Tuple<string, string>("USpotLightComponent", "Components/SpotLightComponent.h"),
            new Tuple<string, string>("UMaterial", "Materials/Material.h"),
            new Tuple<string, string>("AAIController", "AIController.h"),
            new Tuple<string, string>("ADebugCameraController", "Engine/DebugCameraController.h"),
            new Tuple<string, string>("UEnvQueryItemType_Point", "EnvironmentQuery/Items/EnvQueryItemType_Point.h"),
            new Tuple<string, string>("AParticleEventManager", "Particles/ParticleEventManager.h"),
            new Tuple<string, string>("UEngineMessage", "GameFramework/EngineMessage.h"),
            new Tuple<string, string>("ASpectatorPawn", "GameFramework/SpectatorPawn.h"),
            new Tuple<string, string>("AServerStatReplicator", "Engine/ServerStatReplicator.h"),
            new Tuple<string, string>("UTexture2D", "Engine/Texture2D.h"),
            new Tuple<string, string>("UNetReplicationGraphConnection", "ReplicationGraph.h"),
            new Tuple<string, string>("UStaticMesh", "Engine/StaticMesh.h")
        };
        private static Dictionary<string, string> ParentClass = new Dictionary<string, string>();
        private static Dictionary<string, List<string>> ClassHierarchy = new Dictionary<string, List<string>>();
        private static Dictionary<string, string> ClassCtor = new Dictionary<string, string>();
        private static Dictionary<string, HashSet<string>> ClassIncludes = new Dictionary<string, HashSet<string>>();

        private static Dictionary<string, List<string>> ClassProperties = new Dictionary<string, List<string>>()
        {
        };

        private static List<string> SkipComponentTypes = new List<string>()
        {
            "UFGInstancedSplineMeshComponent"
        };

        private static List<string> IgnoreProperties = new List<string>()
        {
            "mFogOfWarRawData",
            "mFogOfWarTexture",
            "PropertyType",
            "RemoteRole",
            "TransformComponent",
            "BrushComponent",
            "SceneComponent",
            "CaptureComponent2D",
            "DestructibleComponent",
            "mFogInscatteringColor",
            "mDirectionalInscatteringColor",
            "OnComponentBeginOverlap",
            "mBuildableSubsystemClass",
            "mFailedItemSinkMessages",
            "ActiveGameNameRedirects",
            "NetDriverDefinitions",
            "mCullDistances",
            "mOutlineProxy",
            "DefaultPhysicsVolumeClass",
            "GameNetworkManagerClass",
            "DefaultBookmarkClass",
            "LastBookmarkClass",
        };

        private static Dictionary<string, Dictionary<string, string>> CustomImplementations = new Dictionary<string, Dictionary<string, string>>()
        {
            { "mAllowedInputWhenDead",
                new Dictionary<string, string>() {
                    { "PrimaryFire", "TEXT(\"PrimaryFire\")" },
                    { "SecondaryFire", "TEXT(\"SecondaryFire\")" },
                    { "PauseGame", "TEXT(\"PauseGame\")" },
                    { "Chat", "TEXT(\"Chat\")" }
                }
            },
            { "SweepType",
                new Dictionary<string, string>() {
                    { "SimpleAndComplex", "SimpleAndComplex" },
                    { "Simple", "Simple" },
                    { "Complex", "Complex" }
                }
            }
        };

        private static Dictionary<string, string> Getters = new Dictionary<string, string>()
        {
            { "BrushComponent", "GetBrushComponent" },
            { "mCollisionComp", "GetCollisionSphere" }
        };
        private static Dictionary<string, string> ASetters = new Dictionary<string, string>()
        {
            { "bHidden", "SetHidden" },
            { "bReplicates", "SetReplicates" },
            { "bReplicateMovement", "SetReplicatingMovement" }
        };
        private static Dictionary<string, string> USetters = new Dictionary<string, string>()
        {
            { "bHidden", "SetHidden" },
            { "bReplicates", "SetIsReplicatedByDefault" },
            { "bReplicateMovement", "SetReplicatingMovement" }
        };
        private static Dictionary<string, string> ContainsInclude = new Dictionary<string, string>()
        {
            { "BrushComponent", "Components/BrushComponent.h" }
        };

        static void Main(string[] args)
        {
            if (args.Length == 0)
            {
                args = new string[] { "", "", "", "" };
                Console.Write("Headers dir: ");
                args[0] = Console.ReadLine();
                Console.Write("Cpp dir: ");
                args[1] = Console.ReadLine();
                Console.Write("Dump.json: ");
                args[2] = Console.ReadLine();
                Console.Write("Show only count? (y/N): ");
                args[3] = Console.ReadLine();
                if (args[3].ToLower() == "y" || args[3].ToLower() == "yes")
                    args[3] = "true";
                else
                    args[3] = "false";
            }
            if (args.Length >= 4)
                CountOnly = bool.Parse(args[3]);
            Stopwatch stopwatch = new Stopwatch();
            stopwatch.Start();

            FindAllClasses(args[0], args[0]);
            ConstructClassHierarchy();

            ReadDump(args[2]);

            AddDefaultValues(args[1], args[1]);
            stopwatch.Stop();
            Console.WriteLine($"Done. Added defaults for {ClassCtor.Count} classes in {stopwatch.ElapsedMilliseconds} ms.");
        }

        private static void FindAllClasses(string root, string path)
        {
            if (File.Exists(path))
            {
                if (path.EndsWith(".h"))
                    FindAllClassesInFile(root, path);
            }
            else if (Directory.Exists(path))
            {
                foreach (string dir in Directory.EnumerateDirectories(path))
                    FindAllClasses(root, dir);
                foreach (string file in Directory.EnumerateFiles(path))
                    if (file.EndsWith(".h"))
                        FindAllClassesInFile(root, file);
            }
        }

        private static void AddProperty(string className, string propertyName, bool isPrivate)
        {
            if (!ClassProperties.ContainsKey(propertyName))
            {
                ClassProperties.Add(propertyName, new List<string>());
            }
            ClassProperties[propertyName].Add(isPrivate ? className : "#" + className);
        }

        private static void FindAllClassesInFile(string root, string filePath)
        {
            string fileContent = File.ReadAllText(filePath);
            foreach(Match match in Regex.Matches(fileContent, @"^([ \t]*)(class|struct) ([^ ]*? )??([^ ]*?)( ?: ?.*?)?\s*{((?:.|\n)*?)^\1};", RegexOptions.Multiline))
            {
                string className = match.Groups[4].Value;
                string classContents = match.Groups[6].Value;
                string classParents = match.Groups[5].Value;
                string parentClass = Regex.Match(classParents, @"(:|,)\s+(public|protected|private)\s+(.+?)(?=,|\s|$)").Groups[3].Value;
                ParentClass.Add(className, parentClass);
                AllClasses.Add(new Tuple<string, string>(className, filePath.Substring(root.Length).TrimStart(new char[]{ '\\', '/' }).Replace('\\', '/')));
                classContents = Regex.Replace(classContents, @" ^ ([\s\t] *)(class|struct)\s([^\s]*?\s)??([^\s]*?)(\s?:\s?.*?)?\s*{((?:.|\n)*?)^\1};", "", RegexOptions.Multiline);
                classContents = Regex.Replace(classContents, @"U(?:PROPERTY|FUNCTION)\s*\(.*?\)\s*($|\/)", "", RegexOptions.Multiline | RegexOptions.Singleline);
                classContents = Regex.Replace(classContents, @"(public|private|protected):", ";$1:", RegexOptions.Multiline | RegexOptions.Singleline);
                classContents = Regex.Replace(classContents, @"^[\t ]*[^;:/]*?\([^;:]*?\)[^;:]*?;(?:\r?\n)?", "", RegexOptions.Multiline | RegexOptions.Singleline);
                foreach (Match section in Regex.Matches(classContents + "\npublic:", @"(?<=^|;)(protected|private|public):[/\w\s->]*?(?:\r?\n)(?!protected|private|public)(.*?;)\s*(?=protected|private|public)", RegexOptions.Multiline | RegexOptions.Singleline))
                {
                    string sectionType = section.Groups[1].Value;
                    bool isPrivateSection = sectionType.Split(':')[0].Contains("private");
                    foreach (Match variable in Regex.Matches(section.Groups[2].Value, @"\s*([\w\d_*]*?)\s+([\w\d_]*?)(\s*=\s*nullptr)?;", RegexOptions.Multiline))
                    {
                        string varName = variable.Groups[2].Value;
                        AddProperty(className, varName, isPrivateSection);
                    }
                }

                if(parentClass.Trim() == "AActor")
                {
                    AddProperty(className, "RootComponent", true);
                }
            }
        }

        private static void ConstructClassHierarchy()
        {
            foreach (var cls in ParentClass)
            {
                if (!ClassHierarchy.ContainsKey(cls.Value))
                {
                    ClassHierarchy.Add(cls.Value, new List<string>());
                }
                ClassHierarchy[cls.Value].Add(cls.Key);
            }
        }

        private static List<string> ChildClasses(string cls)
        {
            List<string> classes = new List<string>();
            classes.Add(cls);
            if (ClassHierarchy.ContainsKey(cls))
            {
                foreach (var child in ClassHierarchy[cls])
                {
                    classes.AddRange(ChildClasses(child));
                }
            }
            return classes;
        }

        private static Tuple<string, string> GetClass(string classPath)
        {
            classPath = classPath.Substring(classPath.LastIndexOf('.') + 1);
            return AllClasses.Find((clas) => clas.Item1.EndsWith(classPath));
        }

        private static bool IsClass(string classPath)
        {
            return classPath.StartsWith("/Script/") && !string.IsNullOrWhiteSpace(GetClass(classPath).Item1);
        }

        private static bool IsBPClass(string classPath)
        {
            return classPath.StartsWith("/Game/");
        }

        private static bool IsEnum(string value)
        {
            return Regex.IsMatch(value, @"[A-Z]+_\w+");
        }

        private static string GetObjectPropertyByName(JToken cls, string objectName)
        {

            foreach (JToken field in (JArray)cls["Fields"])
            {
                string name = (string)field["Name"];
                JToken value = field["Value"];
                if (value == null) continue;

                if (value.Type == JTokenType.Object && value["$ObjectName"] != null)
                {
                    if ((string)value["$ObjectName"] == objectName)
                        return name;
                }
            }
            throw new Exception($"Object {objectName} not found on class {(string)cls["Name"]}");
        }

        private static string Token2String(JToken token)
        {
            switch(token.Type)
            {
                case JTokenType.String:
                    return $"\"{(string)token}\"";
                case JTokenType.Boolean:
                    return (bool)((JValue)token).Value ? "true" : "false";
                case JTokenType.Integer:
                    if((long)token == int.MinValue)
                        return $"{int.MinValue + 1} - 1";
                    return ((long)token).ToString();
            }
            return (string)token;
        }

        private static bool IsComponent(JToken value)
        {
            return value.Type == JTokenType.Object && value["$ObjectName"] != null;
        }

        private static bool IsMapEntry(JToken value)
        {
            return value.Type == JTokenType.Object && value["Key"] != null && value["Value"] != null && value.Children().Count() == 2;
        }

        private static KeyValuePair<string, Tuple<HashSet<string>, HashSet<string>>> CreateImplementationFor(JToken value, JToken cls, string fieldPath, string className)
        {
            string implementation = "";
            HashSet<string> dependencies = new HashSet<string>();
            HashSet<string> includes = new HashSet<string>();
            if (value.Type == JTokenType.Object)
            {
                if (value["$ObjectName"] != null)
                {
                    // Check if value is object
                    string objectName = (string)value["$ObjectName"];
                    Tuple<string, string> objectClass = GetClass((string)value["$ObjectClass"]);
                    string firstObjectProperty = GetObjectPropertyByName(cls, objectName);
                    if (SkipComponentTypes.Contains(objectClass.Item1))
                    {
                        implementation = $"/* Skipping {objectClass.Item1} {fieldPath} */";
                    }
                    else
                    {
                        if (firstObjectProperty == fieldPath.Substring(6))
                        {
                            implementation = $"{fieldPath} = CreateDefaultSubobject<{objectClass.Item1}>(TEXT(\"{objectName}\"));";
                            includes.Add(objectClass.Item2);
                            if (value["AttachParent"] != null)
                            {
                                JToken attachParent = value["AttachParent"];
                                string attachParentName = (string)attachParent["$ObjectName"];
                                if (attachParentName == null)
                                {
                                    // ?????
                                    Console.WriteLine($"{className}::{objectName} is not attached to anything.");
                                }
                                else
                                {
                                    string attachmentPropName = $"this->{GetObjectPropertyByName(cls, attachParentName)}";
                                    if (Getters.ContainsKey(attachmentPropName.Substring(6)))
                                        attachmentPropName = $"this->{Getters[attachmentPropName.Substring(6)]}()";
                                    implementation += $" {fieldPath}->SetupAttachment({attachmentPropName});";
                                    dependencies.Add(attachmentPropName);
                                }
                            }
                        }
                        else
                        {
                            implementation = $"{fieldPath} = this->{firstObjectProperty};";
                            dependencies.Add($"this->{firstObjectProperty}");
                        }
                    }
                }
                else if (value["AssetPathName"] != null)
                {
                    // FSoftClassPath
                    implementation += $"{fieldPath} = FSoftClassPath(\"{value["AssetPathName"]}\"); ";
                }
                else
                {
                    foreach (JToken prop in value.Children())
                    {
                        string propName = ((JProperty)prop).Name;
                        JToken propValue = ((JProperty)prop).Value;
                        if (propName[0] == '$' || IgnoreProperties.Contains(propName)) continue;
                        if (CustomImplementations.ContainsKey(propName) && CustomImplementations[propName].ContainsKey((string)propValue))
                        {
                            implementation += $"{fieldPath}.{propName} = {CustomImplementations[propName][(string)propValue]}; ";
                        }
                        else
                        {
                            var impl = CreateImplementationFor(propValue, cls, $"{fieldPath}.{propName}", className);
                            implementation += impl.Key;
                            foreach (string dep in impl.Value.Item1)
                                dependencies.Add(dep);
                            foreach (string inc in impl.Value.Item2)
                                includes.Add(inc);
                        }
                    }
                }
            }
            else if (value.Type == JTokenType.Array)
            {
                JArray asArray = (JArray)value;
                if (asArray.Count > 0)
                {
                    if (asArray[0].Type == JTokenType.String)
                    {
                        if (IsClass((string)asArray[0]))
                        {
                            foreach (JToken clsVal in asArray)
                            {
                                Tuple<string, string> objectClass = GetClass((string)clsVal);
                                implementation += $"{fieldPath}.Add({objectClass.Item1}::StaticClass()); ";
                                includes.Add(objectClass.Item2);
                            }
                        }
                        else
                        {
                            foreach (JToken str in asArray)
                            {
                                implementation += $"{fieldPath}.Add({(string)str}); ";
                            }
                        }
                    }
                    else if (asArray[0].Type == JTokenType.Object)
                    {
                        if (asArray[0]["$ObjectName"] != null)
                        {
                            // Object
                            foreach (JToken objVal in asArray)
                            {
                                string objectName = (string)objVal["$ObjectName"];
                                implementation += $"{fieldPath}.Add({GetObjectPropertyByName(cls, objectName)}); ";
                                if (objVal["AttachParent"] != null)
                                {
                                    JToken attachParent = objVal["AttachParent"];
                                    string attachParentName = (string)attachParent["$ObjectName"];
                                    if (attachParentName != null)
                                    {
                                        string attachmentPropName = $"this->{GetObjectPropertyByName(cls, attachParentName)}";
                                        dependencies.Add(attachmentPropName);
                                    }
                                }
                            }
                        }
                        else if (IsMapEntry(asArray[0]))
                        {
                            // Map
                            for (int i = 0; i < asArray.Count; i++)
                            {
                                implementation += $"{fieldPath}.Add({(string)asArray[0]["Key"]}, {(string)asArray[0]["Value"]}); ";
                            }
                        }
                        else
                        {
                            implementation += $"{fieldPath}.SetNum({asArray.Count}); ";
                            for (int i = 0; i < asArray.Count; i++)
                            {
                                var impl = CreateImplementationFor(asArray[i], cls, $"{fieldPath}[{i}]", className);
                                implementation += impl.Key;
                                foreach (string dep in impl.Value.Item1)
                                    dependencies.Add(dep);
                                foreach (string inc in impl.Value.Item2)
                                    includes.Add(inc);
                            }
                        }
                    }
                    else
                    {
                        foreach (JToken strVal in asArray)
                        {
                            implementation += $"{fieldPath}.Add({Token2String(strVal)}); ";
                        }
                    }
                }
            }
            else if(value.Type == JTokenType.String)
            {
                if (IsClass((string)value))
                {
                    Tuple<string, string> objectClass = GetClass((string)value);
                    implementation = $"{fieldPath} = {objectClass.Item1}::StaticClass(); ";
                    includes.Add(objectClass.Item2);
                }
                else if (IsBPClass((string)value))
                {
                    implementation = $"{fieldPath} = FSoftClassPath(\"{(string)value}\").TryLoadClass<UObject>(); ";
                }
                else if (IsEnum((string)value))
                {
                    implementation = $"{fieldPath} = {(string)value}; ";
                }
                else if (((string)value).StartsWith("E") || ((string)value).StartsWith("NSLOCTEXT") || ((string)value).StartsWith("INVTEXT"))
                    implementation = $"{fieldPath} = {(string)value}; ";
                else
                    implementation = $"{fieldPath} = \"{(string)value}\"; ";
            }
            else
                implementation = $"{fieldPath} = {Token2String(value)}; ";
            return new KeyValuePair<string, Tuple<HashSet<string>, HashSet<string>>>(implementation, new Tuple<HashSet<string>, HashSet<string>>(dependencies, includes));
        }

        private static void ReadDump(string path) {
            dynamic dump = JObject.Parse(File.ReadAllText(path));
            foreach (JToken cls in (JArray)dump.Classes)
            {
                if(cls["Fields"] != null)
                {
                    string className = GetClass((string)cls["Class"]).Item1;
                    JArray fields = (JArray)cls["Fields"];
                    Dictionary<string, Tuple<HashSet<string>, HashSet<string>>> implementations = new Dictionary<string, Tuple<HashSet<string>, HashSet<string>>>();
                    foreach (JToken field in fields)
                    {
                        string name = (string)field["Name"];
                        JToken value = field["Value"];
                        if (className.Contains("AFGItemPickup") && name == "mRespawnTimeIndays")
                            name = "mRespawnTimeInDays"; // UHHH... HOW???

                        if (value == null || IgnoreProperties.Contains(name)) continue;
                        if (ClassProperties.ContainsKey(name))
                        {
                            List<string> allClasses = new List<string>();
                            if (IsComponent(value))
                            {
                                foreach (var c in ClassProperties[name])
                                {
                                    if (c[0] == '#')
                                        allClasses.Add(c.Substring(1));
                                    else
                                        allClasses.Add(c);
                                }
                            }
                            else
                            {
                                foreach(var c in ClassProperties[name])
                                {
                                    if (c[0] == '#')
                                        allClasses.AddRange(ChildClasses(c.Substring(1)));
                                    else
                                        allClasses.Add(c);
                                }
                            }
                            if (!allClasses.Contains(className)) continue;
                        }


                        if (CustomImplementations.ContainsKey(name))
                        {
                            if (value.Type == JTokenType.String && CustomImplementations[name].ContainsKey((string)value))
                                implementations.Add($"this->{name} = {CustomImplementations[name][(string)value]}; ", new Tuple<HashSet<string>, HashSet<string>>(new HashSet<string>(), new HashSet<string>()));
                            else if (value.Type == JTokenType.Array)
                            {
                                string implementation = $"";
                                foreach(JToken arrEl in (JArray)value)
                                {
                                    if (arrEl.Type == JTokenType.Object)
                                    {
                                        // It is a map
                                        implementation += $"this->{name}.Add({CustomImplementations[name][(string)arrEl["Key"]]}); ";
                                    }
                                    else
                                    {
                                        implementation += $"this->{name}.Add({CustomImplementations[name][(string)arrEl]}); ";
                                    }
                                }
                                implementations.Add(implementation, new Tuple<HashSet<string>, HashSet<string>>(new HashSet<string>(), new HashSet<string>()));
                            }
                        }
                        else if ((bool)field["NativeArray"])
                        {
                            string implementation = "";
                            JArray asArray = (JArray)value;
                            for (int i = 0; i < asArray.Count; i++)
                            {
                                var impl = CreateImplementationFor(asArray[i], cls, $"this->{name}[{i}]", className);
                                implementation += impl.Key;
                            }
                            implementations.Add(implementation, new Tuple<HashSet<string>, HashSet<string>>(new HashSet<string>(), new HashSet<string>()));
                        }
                        else
                        {
                            var impl = CreateImplementationFor(value, cls, $"this->{name}", className);
                            if (impl.Key != "")
                            {
                                if (className.StartsWith("A") && ASetters.ContainsKey(name))
                                {
                                    implementations.Add(Regex.Replace(impl.Key, $@"this->{name} = (.*?);", $"this->{ASetters[name]}($1);"), impl.Value);
                                }
                                else if(className.StartsWith("U") && USetters.ContainsKey(name))
                                {
                                    implementations.Add(Regex.Replace(impl.Key, $@"this->{name} = (.*?);", $"this->{USetters[name]}($1);"), impl.Value);
                                }
                                else
                                {
                                    implementations.Add(impl.Key, impl.Value);
                                }
                            }
                            else
                            {
                                Console.WriteLine($"Empty implementation for {className}::{name}");
                            }
                        }
                    }
                    HashSet<string> includes = new HashSet<string>();
                    HashSet<string> topoSortKeys = new HashSet<string>();
                    HashSet<Tuple<string, string>> topoSortEdges = new HashSet<Tuple<string, string>>();
                    foreach(var impl in implementations)
                    {
                        foreach (string dep in impl.Value.Item1)
                        {
                            try
                            {
                                topoSortEdges.Add(new Tuple<string, string>(implementations.First((depImpl) => depImpl.Key.Contains($"{dep} = ")).Key, impl.Key));
                            } catch(InvalidOperationException)
                            {
                                // Dependency is in parent class.
                            }
                        }
                        foreach (string inc in impl.Value.Item2)
                        {
                            if (!string.IsNullOrWhiteSpace(inc))
                            {
                                includes.Add($"#include \"{inc}\"");
                            }
                        }
                        foreach (var contIncl in ContainsInclude)
                        {
                            if (impl.Key.Contains(contIncl.Key))
                                includes.Add($"#include \"{contIncl.Value}\"");
                        }
                        topoSortKeys.Add(impl.Key);
                    }
                    List<string> sorted = TopologicalSort(topoSortKeys, topoSortEdges);
                    ClassCtor.Add(className, Environment.NewLine + '\t' + string.Join(Environment.NewLine + '\t', sorted.Select((impl) => impl.Trim())) + Environment.NewLine);
                    ClassIncludes.Add(className, includes);
                }
            }
        }

        private static void AddDefaultValues(string root, string path)
        {
            if (File.Exists(path))
            {
                if (path.EndsWith(".cpp"))
                    DefaultValuesFile(root, path);
            }
            else if (Directory.Exists(path))
            {
                foreach (string dir in Directory.EnumerateDirectories(path))
                    AddDefaultValues(root, dir);
                foreach (string file in Directory.EnumerateFiles(path))
                    if (file.EndsWith(".cpp"))
                        DefaultValuesFile(root, file);
            }
        }

        private static void DefaultValuesFile(string root, string filePath)
        {
            string fileContent = File.ReadAllText(filePath);
            foreach (var cls in ClassCtor)
            {
                if (Regex.IsMatch(fileContent, $@"{cls.Key}::{cls.Key}\(\)(?: : Super\(\))?\s?{{.*?}}", RegexOptions.Singleline))
                {
                    string header = filePath.Substring(root.Length).TrimStart(new char[] { '\\', '/' }).Replace(".cpp", ".h").Replace('\\', '/');
                    string includeHeader = $"#include \"{header}\"";

                    foreach (string incl in ClassIncludes[cls.Key])
                    {
                        if (!fileContent.Contains(incl))
                        {
                            fileContent = fileContent.Replace(includeHeader, $"{includeHeader}{Environment.NewLine}{incl}");
                        }
                    }
                    fileContent = Regex.Replace(fileContent, $@"{cls.Key}::{cls.Key}\(\)(?: : Super\(\))?\s?{{.*?}}", $"{cls.Key}::{cls.Key}() : Super() {{{cls.Value}}}", RegexOptions.Singleline);
                }
            }
            File.WriteAllText(filePath, fileContent);
        }

        // https://gist.github.com/Sup3rc4l1fr4g1l1571c3xp14l1d0c10u5/3341dba6a53d7171fe3397d13d00ee3f
        static List<T> TopologicalSort<T>(HashSet<T> nodes, HashSet<Tuple<T, T>> edges) where T : IEquatable<T>
        {
            // Empty list that will contain the sorted elements
            var L = new List<T>();

            // Set of all nodes with no incoming edges
            var S = new HashSet<T>(nodes.Where(n => edges.All(e => e.Item2.Equals(n) == false)));

            // while S is non-empty do
            while (S.Any())
            {

                //  remove a node n from S
                var n = S.First();
                S.Remove(n);

                // add n to tail of L
                L.Add(n);

                // for each node m with an edge e from n to m do
                foreach (var e in edges.Where(e => e.Item1.Equals(n)).ToList())
                {
                    var m = e.Item2;

                    // remove edge e from the graph
                    edges.Remove(e);

                    // if m has no other incoming edges then
                    if (edges.All(me => me.Item2.Equals(m) == false))
                    {
                        // insert m into S
                        S.Add(m);
                    }
                }
            }

            // if graph has edges then
            if (edges.Any())
            {
                // return error (graph has at least one cycle)
                return null;
            }
            else
            {
                // return L (a topologically sorted order)
                return L;
            }
        }
    }
}
