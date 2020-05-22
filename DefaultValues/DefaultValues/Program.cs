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
            new Tuple<string, string>("UFloatingPawnMovement", "GameFramework/FloatingPawnMovement.h")
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
            "mFailedItemSinkMessages"
        };

        private static Dictionary<string, Dictionary<string, string>> CustomImplementations = new Dictionary<string, Dictionary<string, string>>()
        {
            { "TickGroup",
                new Dictionary<string, string>() {
                    { "0", "TG_PrePhysics" },
                    { "1", "TG_StartPhysics" },
                    { "2", "TG_DuringPhysics" },
                    { "3", "TG_EndPhysics" },
                    { "4", "TG_PostPhysics" },
                    { "5", "TG_PostUpdateWork" },
                    { "6", "TG_LastDemotable" },
                    { "7", "TG_NewlySpawned" },
                    { "8", "TG_MAX" }
                }
            },
            { "EndTickGroup",
                new Dictionary<string, string>() {
                    { "0", "TG_PrePhysics" },
                    { "1", "TG_StartPhysics" },
                    { "2", "TG_DuringPhysics" },
                    { "3", "TG_EndPhysics" },
                    { "4", "TG_PostPhysics" },
                    { "5", "TG_PostUpdateWork" },
                    { "6", "TG_LastDemotable" },
                    { "7", "TG_NewlySpawned" },
                    { "8", "TG_MAX" }
                }
            },
            { "SweepType",
                new Dictionary<string, string>() {
                    { "0", "SimpleAndComplex" },
                    { "1", "Simple" },
                    { "2", "Complex" }
                }
            },
            { "InitialOffset",
                new Dictionary<string, string>() {
                    { "0", "EOO_OffsetRandom" },
                    { "1", "EOO_OffsetZero" },
                    { "2", "EOO_MAX" }
                }
            },
            { "PreInfinityExtrap",
                new Dictionary<string, string>() {
                    { "0", "RCCE_Cycle" },
                    { "1", "RCCE_CycleWithOffset" },
                    { "2", "RCCE_Oscillate" },
                    { "3", "RCCE_Linear" },
                    { "4", "RCCE_Constant" },
                    { "5", "RCCE_None" }
                }
            },
            { "PostInfinityExtrap",
                new Dictionary<string, string>() {
                    { "0", "RCCE_Cycle" },
                    { "1", "RCCE_CycleWithOffset" },
                    { "2", "RCCE_Oscillate" },
                    { "3", "RCCE_Linear" },
                    { "4", "RCCE_Constant" },
                    { "5", "RCCE_None" }
                }
            },
            { "mPreLandCollisionChannels",
                new Dictionary<string, string>() {
                    { "0", "ECC_WorldStatic" },
                    { "1", "ECC_WorldDynamic" },
                    { "2", "ECC_Pawn" },
                    { "3", "ECC_Visibility" },
                    { "4", "ECC_Camera" },
                    { "5", "ECC_PhysicsBody" },
                    { "6", "ECC_Vehicle" },
                    { "7", "ECC_Destructible" },
                    { "8", "ECC_EngineTraceChannel1" },
                    { "9", "ECC_EngineTraceChannel2" },
                    { "10", "ECC_EngineTraceChannel3" },
                    { "11", "ECC_EngineTraceChannel4" },
                    { "12", "ECC_EngineTraceChannel5" },
                    { "13", "ECC_EngineTraceChannel6" },
                    { "14", "ECC_GameTraceChannel1" },
                    { "15", "ECC_GameTraceChannel2" },
                    { "16", "ECC_GameTraceChannel3" },
                    { "17", "ECC_GameTraceChannel4" },
                    { "18", "ECC_GameTraceChannel5" },
                    { "19", "ECC_GameTraceChannel6" },
                    { "20", "ECC_GameTraceChannel7" },
                    { "21", "ECC_GameTraceChannel8" },
                    { "22", "ECC_GameTraceChannel9" },
                    { "23", "ECC_GameTraceChannel10" },
                    { "24", "ECC_GameTraceChannel11" },
                    { "25", "ECC_GameTraceChannel12" },
                    { "26", "ECC_GameTraceChannel13" },
                    { "27", "ECC_GameTraceChannel14" },
                    { "28", "ECC_GameTraceChannel15" },
                    { "29", "ECC_GameTraceChannel16" },
                    { "30", "ECC_GameTraceChannel17" },
                    { "31", "ECC_GameTraceChannel18" },
                    { "32", "ECC_OverlapAll_Deprecated" },
                    { "33", "ECC_MAX" }
                }
            },
            { "mPurity",
                new Dictionary<string, string>() {
                    { "0", "RP_Inpure" },
                    { "1", "RP_Normal" },
                    { "2", "RP_Pure" },
                    { "3", "RP_MAX" }
                }
            },
            { "mAmount",
                new Dictionary<string, string>() {
                    { "0", "RA_Poor" },
                    { "1", "RA_Normal" },
                    { "2", "RA_Rich" },
                    { "3", "RA_Infinite" },
                    { "4", "RA_MAX" }
                }
            },
            { "mRotationAxis",
                new Dictionary<string, string>() {
                    { "0", "EAxis::Type::None" },
                    { "1", "EAxis::Type::X" },
                    { "2", "EAxis::Type::Y" },
                    { "3", "EAxis::Type::Z" }
                }
            },
            { "mDynamicPixelFormat",
                new Dictionary<string, string>() {
                    { "0", "PF_Unknown" },
                    { "1", "PF_A32B32G32R32F" },
                    { "2", "PF_B8G8R8A8" },
                    { "3", "PF_G8" },
                    { "4", "PF_G16" },
                    { "5", "PF_DXT1" },
                    { "6", "PF_DXT3" },
                    { "7", "PF_DXT5" },
                    { "8", "PF_UYVY" },
                    { "9", "PF_FloatRGB" },
                    { "10", "PF_FloatRGBA" },
                    { "11", "PF_DepthStencil" },
                    { "12", "PF_ShadowDepth" },
                    { "13", "PF_R32_FLOAT" },
                    { "14", "PF_G16R16" },
                    { "15", "PF_G16R16F" },
                    { "16", "PF_G16R16F_FILTER" },
                    { "17", "PF_G32R32F" },
                    { "18", "PF_A2B10G10R10" },
                    { "19", "PF_A16B16G16R16" },
                    { "20", "PF_D24" },
                    { "21", "PF_R16F" },
                    { "22", "PF_R16F_FILTER" },
                    { "23", "PF_BC5" },
                    { "24", "PF_V8U8" },
                    { "25", "PF_A1" },
                    { "26", "PF_FloatR11G11B10" },
                    { "27", "PF_A8" },
                    { "28", "PF_R32_UINT" },
                    { "29", "PF_R32_SINT" },
                    { "30", "PF_PVRTC2" },
                    { "31", "PF_PVRTC4" },
                    { "32", "PF_R16_UINT" },
                    { "33", "PF_R16_SINT" },
                    { "34", "PF_R16G16B16A16_UINT" },
                    { "35", "PF_R16G16B16A16_SINT" },
                    { "36", "PF_R5G6B5_UNORM" },
                    { "37", "PF_R8G8B8A8" },
                    { "38", "PF_A8R8G8B8" },
                    { "39", "PF_BC4" },
                    { "40", "PF_R8G8" },
                    { "41", "PF_ATC_RGB" },
                    { "42", "PF_ATC_RGBA_E" },
                    { "43", "PF_ATC_RGBA_I" },
                    { "44", "PF_X24_G8" },
                    { "45", "PF_ETC1" },
                    { "46", "PF_ETC2_RGB" },
                    { "47", "PF_ETC2_RGBA" },
                    { "48", "PF_R32G32B32A32_UINT" },
                    { "49", "PF_R16G16_UINT" },
                    { "50", "PF_ASTC_4x4" },
                    { "51", "PF_ASTC_6x6" },
                    { "52", "PF_ASTC_8x8" },
                    { "53", "PF_ASTC_10x10" },
                    { "54", "PF_ASTC_12x12" },
                    { "55", "PF_BC6H" },
                    { "56", "PF_BC7" },
                    { "57", "PF_R8_UINT" },
                    { "58", "PF_L8" },
                    { "59", "PF_XGXR8" },
                    { "60", "PF_R8G8B8A8_UINT" },
                    { "61", "PF_R8G8B8A8_SNORM" },
                    { "62", "PF_R16G16B16A16_UNORM" },
                    { "63", "PF_R16G16B16A16_SNORM" },
                    { "64", "PF_PLATFORM_HDR_0" },
                    { "65", "PF_PLATFORM_HDR_1" },
                    { "66", "PF_PLATFORM_HDR_2" },
                    { "67", "PF_NV12" },
                    { "68", "PF_MAX" }
                }
            },
            { "mAllowedInputWhenDead",
                new Dictionary<string, string>() {
                    { "PrimaryFire", "TEXT(\"PrimaryFire\")" },
                    { "PauseGame", "TEXT(\"PauseGame\")" },
                    { "Chat", "TEXT(\"Chat\")" }
                }
            }
        };

        private static Dictionary<string, string> Getters = new Dictionary<string, string>()
        {
            { "BrushComponent", "GetBrushComponent" },
            { "mCollisionComp", "GetCollisionSphere" }
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

            FindAllClasses(args[0]);
            ConstructClassHierarchy();

            ReadDump(args[2]);

            AddDefaultValues(args[1]);
            stopwatch.Stop();
            Console.WriteLine($"Done. Added defaults for {ClassCtor.Count} classes in {stopwatch.ElapsedMilliseconds} ms.");
        }

        private static void FindAllClasses(string path)
        {
            if (File.Exists(path))
            {
                if (path.EndsWith(".h"))
                    FindAllClassesInFile(path);
            }
            else if (Directory.Exists(path))
            {
                foreach (string dir in Directory.EnumerateDirectories(path))
                    FindAllClasses(dir);
                foreach (string file in Directory.EnumerateFiles(path))
                    if (file.EndsWith(".h"))
                        FindAllClassesInFile(file);
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

        private static void FindAllClassesInFile(string filePath)
        {
            string fileContent = File.ReadAllText(filePath);
            foreach(Match match in Regex.Matches(fileContent, @"^([ \t]*)(class|struct) ([^ ]*? )??([^ ]*?)( ?: ?.*?)?\s*{((?:.|\n)*?)^\1};", RegexOptions.Multiline))
            {
                string className = match.Groups[4].Value;
                string classContents = match.Groups[6].Value;
                string classParents = match.Groups[5].Value;
                string parentClass = Regex.Match(classParents, @"(:|,)\s+(public|protected|private)\s+(.+?)(?=,|\s|$)").Groups[3].Value;
                ParentClass.Add(className, parentClass);
                AllClasses.Add(new Tuple<string, string>(className, Path.GetFileName(filePath)));
                classContents = Regex.Replace(classContents, @" ^ ([\s\t] *)(class|struct)\s([^\s]*?\s)??([^\s]*?)(\s?:\s?.*?)?\s*{((?:.|\n)*?)^\1};", "", RegexOptions.Multiline);
                classContents = Regex.Replace(classContents, @"U(?:PROPERTY|FUNCTION)\s*\(.*?\)\s*($|\/)", "", RegexOptions.Multiline | RegexOptions.Singleline);
                classContents = Regex.Replace(classContents, @"(public|private|protected):", ";$1:", RegexOptions.Multiline | RegexOptions.Singleline);
                classContents = Regex.Replace(classContents, @"^[\t ]*[^;:]*?\([^;:]*?\)[^;:]*?;(?:\r?\n)?", "", RegexOptions.Multiline | RegexOptions.Singleline);
                foreach (Match section in Regex.Matches(classContents + "\npublic:", @"(?<=^|;)(protected|private|public):(?:\r?\n)(?!protected|private|public)(.*?;)\s*(?=protected|private|public)", RegexOptions.Multiline | RegexOptions.Singleline))
                {
                    string sectionType = section.Groups[1].Value;
                    bool isPrivateSection = sectionType.Contains("private");
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
                        if (propName == "ColorCurves")
                            propName = "ColorCurves[0]"; // SML asset dumper doesn't dump arrays (not TArrays). This is `FRichCurve ColorCurves[4];`
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
                        if (name == "mColorSlotsPrimary")
                            name = "mColorSlotsPrimary[0]"; // SML asset dumper doesn't dump arrays (not TArrays). This is `FColor mColorSlotsPrimary[ BUILDABLE_COLORS_MAX_SLOTS ];`
                        if (name == "mColorSlotsSecondary")
                            name = "mColorSlotsSecondary[0]"; // SML asset dumper doesn't dump arrays (not TArrays). This is `FColor mColorSlotsSecondary[ BUILDABLE_COLORS_MAX_SLOTS ];`

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
                        else
                        {
                            var impl = CreateImplementationFor(value, cls, $"this->{name}", className);
                            if (impl.Key != "")
                            {
                                implementations.Add(impl.Key, impl.Value);
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

        private static void AddDefaultValues(string path)
        {
            if (File.Exists(path))
            {
                if (path.EndsWith(".cpp"))
                    DefaultValuesFile(path);
            }
            else if (Directory.Exists(path))
            {
                foreach (string dir in Directory.EnumerateDirectories(path))
                    AddDefaultValues(dir);
                foreach (string file in Directory.EnumerateFiles(path))
                    if (file.EndsWith(".cpp"))
                        DefaultValuesFile(file);
            }
        }

        private static void DefaultValuesFile(string filePath)
        {
            string fileContent = File.ReadAllText(filePath);
            foreach (var cls in ClassCtor)
            {
                if (Regex.IsMatch(fileContent, $@"{cls.Key}::{cls.Key}\(\)(?: : Super\(\))?\s?{{.*?}}", RegexOptions.Singleline))
                {
                    string header = Path.GetFileName(filePath).Replace(".cpp", ".h");
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
