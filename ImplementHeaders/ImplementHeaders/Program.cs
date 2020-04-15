using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Text.RegularExpressions;

namespace ImplementHeaders
{
    class Program
    {
        private static bool CountOnly = false;
        private static int FunctionCount;

        // TODO: Finish the c++ parser so that these workarounds can be replaced with something that doesn't require maintenance
        private static readonly string[] NeedsSuper = new string[] { "Serialize", "OnRegister", "OnUnregister", "PostLoad", "BeginDestroy", "PostInitProperties", "PostInitializeComponents", "CreateRenderState_Concurrent" };

        private static readonly Dictionary<string, string> CustomImplementation = new Dictionary<string, string>()
        {
            { "static UFGItemDescriptor::CanBeDiscarded",
@"	return inClass.GetDefaultObject()->mCanBeDiscarded;"
			},
            { "static UFGItemDescriptor::GetBigIcon",
@"	return inClass.GetDefaultObject()->mPersistentBigIcon;"
			},
            { "static UFGItemDescriptor::GetEnergyValue",
@"	return inClass.GetDefaultObject()->mEnergyValue;"
			},
            { "static UFGItemDescriptor::GetFluidColor",
@"	return inClass.GetDefaultObject()->mFluidColor;"
			},
            { "static UFGItemDescriptor::GetFluidColorLinear",
@"	return inClass.GetDefaultObject()->mFluidColor.ReinterpretAsLinear();"
			},
            { "static UFGItemDescriptor::GetFluidDensity",
@"	return inClass.GetDefaultObject()->mFluidDensity;"
			},
            { "static UFGItemDescriptor::GetFluidFriction",
@"	return inClass.GetDefaultObject()->mFluidFriction;"
			},
            { "static UFGItemDescriptor::GetFluidViscosity",
@"	return inClass.GetDefaultObject()->mFluidViscosity;"
			},
            { "static UFGItemDescriptor::GetForm",
@"	return inClass.GetDefaultObject()->mForm;"
			},
            { "static UFGItemDescriptor::GetItemCategory",
@"	return inClass.GetDefaultObject()->mItemCategory;"
			},
            { "static UFGItemDescriptor::GetItemDescription",
@"	return inClass.GetDefaultObject()->mDescription;"
			},
            { "static UFGItemDescriptor::GetItemIcon",
@"	return inClass.GetDefaultObject()->mInventoryIcon;"
			},
            { "static UFGItemDescriptor::GetItemMesh",
@"	return inClass.GetDefaultObject()->mConveyorMesh;"
			},
            { "static UFGItemDescriptor::GetItemName",
@"	if (inClass.GetDefaultObject()->mUseDisplayNameAndDescription == true)
	return inClass.GetDefaultObject()->mDisplayName;
else
	return FText::FromString(inClass->GetName());"
            },
            { "static UFGItemDescriptor::GetRadioactiveDecay",
@"	return inClass.GetDefaultObject()->mRadioactiveDecay;"
			},
            { "static UFGItemDescriptor::GetSmallIcon",
@"	return inClass.GetDefaultObject()->mSmallIcon;"
			},
            { "static UFGItemDescriptor::GetStackSize",
@"	return static_cast<int32>(inClass.GetDefaultObject()->mStackSize);"
			},
            { "UFGItemDescriptor::GetStackSizeConverted",
@"	switch (inClass.GetDefaultObject()->mStackSize) {
    case EStackSize::SS_ONE: return 1;
    case EStackSize::SS_SMALL: return 20;
    case EStackSize::SS_MEDIUM: return 50;
    case EStackSize::SS_BIG: return 200;
    case EStackSize::SS_HUGE: return 500;
    case EStackSize::SS_FLUID: return 5000;
    case EStackSize::SS_LAST_ENUM: return 1;
    }
    return 0;"
            },
            { "static UFGItemDescriptor::RememberPickUp",
@"	return inClass.GetDefaultObject()->mRememberPickUp;"
			},
            { "static UFGRecipe::GetIngredients",
@"	return inClass.GetDefaultObject()->mIngredients;"
			},
            { "static UFGRecipe::GetManualManufacturingDuration",
@"	return inClass.GetDefaultObject()->mManualManufacturingMultiplier;"
			},
            { "static UFGRecipe::GetManufacturingDuration",
@"	return inClass.GetDefaultObject()->mManufactoringDuration;"
			},
            { "UFGRecipe::GetProducedIn",
@"	out_producedIn = UFGRecipe::GetProducedIn(this->GetClass());"
            },
            { "static UFGRecipe::GetProducts",
@"	return inClass.GetDefaultObject()->mProduct;"
			},
            { "static UFGRecipe::GetRecipeName",
@"	return inClass.GetDefaultObject()->mDisplayName;"
			},
            { "UFGRecipe::SetIngredient",
@"	recipe.GetDefaultObject()->mIngredients = ingredient;"
            },
            { "UFGRecipe::SetManualManufacturingMultiplier",
@"	recipe.GetDefaultObject()->mManualManufacturingMultiplier = sec;"
            },
            { "UFGRecipe::SetManufactoringDuration",
@"	recipe.GetDefaultObject()->mManufactoringDuration = sec;"
            },
            { "static UFGRecipe::SetProduct",
@"	recipe.GetDefaultObject()->mProduct = product;"
            },
            { "static UFGResearchTree::GetDisplayName",
@"	return inClass.GetDefaultObject()->mDisplayName;"
			},
            { "static UFGResearchTree::GetNodes",
@"	return inClass.GetDefaultObject()->mNodes;"
			},
            { "static UFGResearchTree::GetPostUnlockDescription",
@"	return inClass.GetDefaultObject()->mPostUnlockDescription;"
			},
            { "static UFGResearchTree::GetPreUnlockDescription",
@"	return inClass.GetDefaultObject()->mPreUnlockDescription;"
			},
            { "static UFGResearchTree::GetPreUnlockDisplayName",
@"	return inClass.GetDefaultObject()->mPreUnlockDisplayName;"
			},
            { "static UFGResearchTree::GetResearchTreeIcon",
@"	return inClass.GetDefaultObject()->mResearchTreeIcon;"
			},
            { "static UFGResearchTree::GetUnlockDependencies",
@"	return inClass.GetDefaultObject()->mUnlockDependencies;"
			},
            { "static UFGResearchTree::SetNodes",
@"	inClass.GetDefaultObject()->mNodes = nodes;"
			},
            { "static UFGSchematic::GetAdditionalSchematicDependencies",
@"	return inClass.GetDefaultObject()->mAdditionalSchematicDependencies;"
			},
            { "static UFGSchematic::GetCost",
@"	return inClass.GetDefaultObject()->mCost;"
			},
            { "static UFGSchematic::GetDependentOnSchematic",
@"	return inClass.GetDefaultObject()->mDependsOnSchematic;"
			},
            { "static UFGSchematic::GetItemIcon",
@"	return inClass.GetDefaultObject()->mSchematicIcon;"
			},
            { "static UFGSchematic::GetSchematicCategory",
@"	return inClass.GetDefaultObject()->mSchematicCategory;"
			},
            { "static UFGSchematic::GetSchematicDisplayName",
@"	return inClass.GetDefaultObject()->mDisplayName;"
			},
            { "static UFGSchematic::GetSubCategories",
@"	out_subCategories = inClass.GetDefaultObject()->mSubCategories;"
			},
            { "static UFGSchematic::GetTechTier",
@"	return inClass.GetDefaultObject()->mTechTier;"
			},
            { "static UFGSchematic::GetTimeToComplete",
@"	return inClass.GetDefaultObject()->mTimeToComplete;"
			},
            { "static UFGSchematic::GetType",
@"	return inClass.GetDefaultObject()->mType;"
			},
            { "static UFGSchematic::GetUnlocks",
@"	return inClass.GetDefaultObject()->mUnlocks;"
			},
            { "static UFGSchematic::SetCost",
@"	inClass.GetDefaultObject()->mCost = Cost;"
			},
            { "static UFGSchematic::SetDisplayName",
@"	inClass.GetDefaultObject()->mDisplayName = Name;"
			},
            { "static UFGSchematic::SetTechTier",
@"	inClass.GetDefaultObject()->mTechTier = Tier;"
			},
            { "static UFGSchematic::SetTimeToComplete",
@"	inClass.GetDefaultObject()->mTimeToComplete = sec;"
			},
            { "static UFGSchematic::SetType",
@"	inClass.GetDefaultObject()->mType = Type;"
			},
            { "static UFGRecipe::GetProducedIn",
@"	TArray<TSubclassOf<UObject>>   out;
	TArray<TSoftClassPtr<UObject>> In = inClass.GetDefaultObject()->mProducedIn;
	if (In.Num() > 0)
	{
		for (int j = 0; j < In.Num(); j++)
		{
			TSubclassOf<UObject> obj = In[j].LoadSynchronous();
			out.Add(obj);
		}
		return out;
	}
	else
		return TArray<TSubclassOf<UObject>>();"
            }
        };

        private static readonly Dictionary<string, string> NestedStructs = new Dictionary<string, string>()
        {
            { "ItemHolderHistory", "FConveyorBeltItems::ItemHolderHistory" },
            { "FGenerateIconContext", "UFGItemDescriptor::FGenerateIconContext" },
            { "Type", "FSaveCustomVersion::Type" }
        };

        static void Main(string[] args)
        {
            if (args.Length == 0)
            {
                args = new string[] { "", "", "" };
                Console.Write("Headers dir: ");
                args[0] = Console.ReadLine();
                Console.Write("Cpp dir: ");
                args[1] = Console.ReadLine();
                Console.Write("Show only count? (y/N): ");
                args[2] = Console.ReadLine();
                if (args[2].ToLower() == "y" || args[2].ToLower() == "yes")
                    args[2] = "true";
                else
                    args[2] = "false";
            }
            if (args.Length >= 3)
                CountOnly = bool.Parse(args[2]);
            Directory.Delete(args[1], true); // remove the old implementations
            Stopwatch stopwatch = new Stopwatch();
            stopwatch.Start();
            Implement(args[0], args[1]);
            stopwatch.Stop();
            Console.WriteLine($"Done. Generated {FunctionCount} functions in {stopwatch.ElapsedMilliseconds} ms.");
        }

        private static void Implement(string path, string saveLocation)
        {
            if (File.Exists(path))
            {
                if (path.EndsWith(".h"))
                    ImplementFile(path, saveLocation);
            }
            else if (Directory.Exists(path))
            {
                foreach (string dir in Directory.EnumerateDirectories(path))
                {
                    string newSaveLocation = saveLocation + Path.DirectorySeparatorChar + new DirectoryInfo(dir).Name;
                    Directory.CreateDirectory(newSaveLocation);
                    Implement(dir, newSaveLocation);
                }
                foreach (string file in Directory.EnumerateFiles(path))
                    if (file.EndsWith(".h"))
                        ImplementFile(file, saveLocation);
            }
        }

        private static void ImplementFile(string filePath, string saveDir)
        {
            if (filePath.EndsWith("FactoryGame.h"))
                return;
            string fileContents;
            using (StreamReader reader = new StreamReader(filePath))
                fileContents = reader.ReadToEnd();
            List<string> implementations = new List<string>();
            foreach(Match match in Regex.Matches(fileContents, @"^([ \t]*)(class|struct) ([^ ]*? )??([^ ]*?)( ?: ?.*?)?\s*{((?:.|\n)*?)^\1};", RegexOptions.Multiline)) // Match class/struct definition
            {
                string className = match.Groups[4].Value;
                string classContents = match.Groups[6].Value;
                if (!IsValidClassName(className))
                    continue;
                implementations.AddRange(ImplementClass(className, classContents));
            }
            using (StreamWriter writer = new StreamWriter($"{saveDir}{Path.DirectorySeparatorChar}{Path.GetFileName(filePath).Replace(".h", ".cpp")}"))
            {
                writer.WriteLine($"// This file has been automatically generated by the Unreal Header Implementation tool");
                writer.WriteLine($"");
                writer.WriteLine($"#include \"{Path.GetFileName(filePath)}\"");
                writer.WriteLine($"");
                if (filePath.Contains("FGCheatBoardWidget.h"))
                    writer.WriteLine("#if WITH_CHEATS");
                foreach (string func in implementations)
                    writer.WriteLine(func);
                if (filePath.Contains("FGCheatBoardWidget.h"))
                    writer.WriteLine("#endif");
            }
        }

        private static List<string> ImplementClass(string className, string classContents)
        {
            List<string> implementations = new List<string>();
            classContents = Regex.Replace(classContents, @"\/+\*(?:.|\s)*?\*\/", ""); // fix for comments containing brackets being matched as functions
            classContents = Regex.Replace(classContents, @"\/{2,}.*", ""); // fix for comments causing some error
            classContents = Regex.Replace(classContents, @"\s*GENERATED.*?\(\)", ""); // fix for GENERATED... macros being matched
            classContents = Regex.Replace(classContents, @"\s*UPROPERTY ?\( ?(?:.|\s)*?;", ""); // fix for UPROPERTY... macros being matched
            classContents = Regex.Replace(classContents, @"\s*UE_DEPRECATED ?\( ?(?:.|\s)*?\)", ""); // fix for UE_DEPRECATED... macros being matched
            classContents = Regex.Replace(classContents, @"^\s*DEPRECATED ?\( ?(?:.|\s)*?\)", "", RegexOptions.Multiline); // fix for DEPRECATED... macros being matched
            // Implement with #if ... and delete it (fixes issues and requires less manual changes in the end)
            foreach (Match ifMacro in Regex.Matches(classContents, @"\s*#if (.*?)\n((?:.|\n)*?)\n\s*#endif(.*)"))
            {
                string ifContents = ifMacro.Groups[2].Value;
                implementations.Add($"#if {ifMacro.Groups[1].Value.Trim()}");
                foreach (Match match in Regex.Matches(ifContents, @"^([ \t]*)(class|struct) ([^ ]*? )??([^ ]*?)( ?: ?.*?)?\s*{((?:.|\n)*?)^\1};", RegexOptions.Multiline)) // Match inner class/struct definition
                {
                    string innerClassName = match.Groups[4].Value;
                    string innerClassContents = match.Groups[6].Value;
                    if (!IsValidClassName(innerClassName))
                        continue;
                    implementations.AddRange(ImplementClass(className + "::" + innerClassName, innerClassContents));
                    ifContents = ifContents.Replace(match.Value, "");
                }
                implementations.AddRange(ImplementFunctions(ifContents, className));
                implementations.AddRange(ImplementStaticVars(ifContents, className));
                implementations.Add($"#endif {ifMacro.Groups[3].Value.Trim()}");
            }
            classContents = Regex.Replace(classContents, @"\s*#if\s(.*?)\n((?:.|\n)*?)\n\s*#endif(.*)", "");
            foreach (Match match in Regex.Matches(classContents, @"^([\s\t]*)(class|struct)\s([^\s]*?\s)??([^\s]*?)(\s?:\s?.*?)?\s*{((?:.|\n)*?)^\1};", RegexOptions.Multiline)) // Match inner class/struct definition
            {
                string innerClassName = match.Groups[4].Value;
                string innerClassContents = match.Groups[6].Value;
                if (!IsValidClassName(innerClassName))
                    continue;
                implementations.AddRange(ImplementClass(className + "::" + innerClassName, innerClassContents));
                classContents = classContents.Replace(match.Value, "");
            }
            implementations.AddRange(ImplementFunctions(classContents, className));
            implementations.AddRange(ImplementStaticVars(classContents, className));
            return implementations;
        }

        private static List<string> ImplementStaticVars(string content, string className)
        {
            List<string> implementations = new List<string>();
            foreach (Match function in Regex.Matches(content, @"(const\s)?static\s(const\s)?\s*([\w\d_]*?)\s+([\w\d_]*?);", RegexOptions.Multiline))
            {
                string isConst = function.Groups[1].Value + function.Groups[2].Value;
                string type = FixReturnType(function.Groups[3].Value).Trim();
                string name = function.Groups[4].Value;
                if(type.Contains("FAutoConsoleVariableSink")) // for this classes there is no constructor with no params, but NULL works
                    implementations.Add($"{isConst}{type} {className}::{name} = NULL;");
                else // but NULL doesn't work for everything
                    implementations.Add($"{isConst}{type} {className}::{name} = {type}();");
            }
            return implementations;
        }

        private static List<string> ImplementFunctions(string content, string className)
        {
            content = Regex.Replace(content, @"\r\n\s*public:", "\r\n");
            content = Regex.Replace(content, @"\r\n\s*private:", "\r\n");
            content = Regex.Replace(content, @"\r\n\s*protected:", "\r\n");
            List<string> implementations = new List<string>();
            // Match function definition (including UFUNCTIONs), nothing to see here ... just walk away ... probably the reason for many missing implementations...
            foreach (Match function in Regex.Matches(content, @"^\s*(?:(UFUNCTION\s*\(.*?\))\s*)?(template\s*<\s*.*?>\s*)?(virtual\s?)?(static\s?)?(const\s?)?(class\s?)?(explicit\s?)?([^=()\n{}]*?\s)?\n*((?:[^=<>()\n{}]|operator.+)*?)(\([^{}]*?\))(\s*const)?(\s*override)?(.*);", RegexOptions.Multiline))
            {
                // string comment = function.Groups[1].Value; // removed because regex took too long
                string ufunction = function.Groups[1].Value;
                string template = function.Groups[2].Value;
                string isVirtual = function.Groups[3].Value;
                string isStatic = function.Groups[4].Value;
                string isReturnConst = function.Groups[5].Value;
                string isClass = function.Groups[6].Value;
                string isExplicit = function.Groups[7].Value;
                string returnType = function.Groups[8].Value;
                string functionName = function.Groups[9].Value;
                string parameters = function.Groups[10].Value;
                string isConst = function.Groups[11].Value;
                string isOverride = function.Groups[12].Value;
                string extras = function.Groups[13].Value;

                if (extras.Contains("PURE_VIRTUAL")) // ignore pure virtual macro
                    continue;

                if (!IsValidFunctionName(functionName) && !(functionName.Trim().Replace("~", "") == className && string.IsNullOrWhiteSpace(returnType)))
                    continue;

                if (!string.IsNullOrWhiteSpace(template)) // All of them end up commented
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

                if (extras.Contains('{') || extras.Contains("delete") || extras.Contains("="))
                    continue; // already implemented in header and it matched "... { return ...; }"

                parameters = Regex.Replace(parameters, @"\/\*.*?\*\/", ""); // fix for commented defaults
                template = Regex.Replace(template, @"\/\*.*?\*\/", ""); // fix for commented defaults ?

                if (!string.IsNullOrWhiteSpace(ufunction))
                {
                    if (Regex.IsMatch(ufunction, @"\WBlueprintImplementableEvent\W"))
                    {
                        if (!CountOnly)
                            Console.WriteLine($"Skipped {className}::{functionName} (BlueprintImplementableEvent)");
                        continue;
                    }
                    if (Regex.IsMatch(ufunction, @"\WBlueprintNativeEvent\W") || Regex.IsMatch(ufunction, @"\WServer\W") || Regex.IsMatch(ufunction, @"\WClient\W") || Regex.IsMatch(ufunction, @"\WNetMulticast\W"))
                    {
                        if (Regex.IsMatch(ufunction, @"\WBlueprintNativeEvent\W") && className.Contains("Interface"))
                        {
                            if (!CountOnly)
                                Console.WriteLine($"Skipped {className}::{functionName} (BlueprintNativeEvent in Interface)"); // https://answers.unrealengine.com/questions/832889/blueprintnativeevent-function-already-has-a-body.html
                            continue;
                        }
                        ImplementFunction(implementations, className, isClass, isReturnConst, returnType, functionName.Trim() + "_Implementation", parameters, isConst, template, isStatic);
                    }
                    else if (Regex.IsMatch(ufunction, @"\WBlueprintPure\W") || Regex.IsMatch(ufunction, @"\WBlueprintCallable\W") || Regex.IsMatch(ufunction.ToLower(), @"\Wexec\W") || Regex.Replace(TrimUselessSpaces(ufunction), @"( ?(?:Category ?= ?"".*?""|meta ?= ?"".*""|meta ?= ?\(.*?\))(?:,| )?)", "") == "UFUNCTION()")
                        ImplementFunction(implementations, className, isClass, isReturnConst, returnType, functionName, parameters, isConst, template, isStatic);
                    if (Regex.IsMatch(ufunction, @"\WWithValidation\W"))
                        ImplementFunction(implementations, className, isClass, isReturnConst, "bool ", functionName.Trim() + "_Validate", parameters, isConst, template, isStatic);
                }
                else
                    ImplementFunction(implementations, className, isClass, isReturnConst, returnType, functionName, parameters, isConst, template, isStatic);
            }
            return implementations;
        }

        private static void ImplementFunction(List<string> implementations, string className, string isClass, string isReturnConst, string returnType, string functionName, string parameters, string isConst, string template, string isStatic)
        {
            string withoutDestructorThingy = functionName.Trim().Replace("~", "");
            string withoutOuterClass = className.Substring(className.LastIndexOf(":") + 1);
            if (IsValidReturnType(returnType) || (withoutDestructorThingy == withoutOuterClass && string.IsNullOrWhiteSpace(returnType)))
            {
                if (!string.IsNullOrWhiteSpace(template))
                    template = FixDefaults(template.Trim().TrimEnd('>')) + '>' + Environment.NewLine;
                string result = $"{template}{isReturnConst}{FixReturnType(returnType)}{className}::{functionName}({Regex.Replace(FixDefaults(parameters.Trim().TrimEnd(')')), @"(?<!<)\b(class|struct)\b", "")}){isConst}";
                if (parameters.Contains("objectInitializer") && withoutDestructorThingy == className) // if it is constructor of derived class
                    result += " : Super(objectInitializer) ";
                else if (parameters.Contains("ObjectInitializer") && withoutDestructorThingy == className) // if it is constructor of derived class
                    result += " : Super(ObjectInitializer) ";
                if (parameters.Replace(" ", "").Contains("FArchive&inInnerArchive")) 
                     result += " : FArchiveProxy(inInnerArchive) ";
                if (parameters.Replace(" ", "").Contains("UCharacterMovementComponent"))
                    result += " : FNetworkPredictionData_Client_Character(clientMovement) ";
                if (functionName.Replace(" ", "").Contains("FObjectReader"))
                    result += " : FObjectReader(Obj, InBytes) ";
                if (functionName.Replace(" ", "").Contains("FObjectWriter"))
                    result += " : FObjectWriter(Obj, InBytes) ";
                result += $"{{ ";
                if (CustomImplementation.ContainsKey($"{(!string.IsNullOrWhiteSpace(isStatic) ? "static " : "")}{className}::{functionName}")) // aghhhh
                    result += $"\r\n{CustomImplementation[$"{(!string.IsNullOrWhiteSpace(isStatic) ? "static " : "")}{className}::{functionName}"]}\r\n}}";
                else
                {
                    if (returnType.Contains("void") || string.IsNullOrWhiteSpace(returnType))
                    {
                        if (NeedsSuper.Contains(functionName.Trim()))
                            result += $"Super::{functionName}({string.Join(",", Regex.Matches(FixDefaults(parameters.Trim().TrimEnd(')')), @"(?:.*? )??(.*?) ([^ ]*?)(?:, ?| \)|$)").Cast<Match>().Select(match => match.Groups[2].Value))}); ";
                        result += $"}}";
                    }
                    else
                    {
                        result += $"return ";
                        if (returnType.Trim().EndsWith("&"))
                            if (returnType.Trim().TrimEnd('&') == className)
                                result += $"*(this)";
                            else
                                result += $"*(new {returnType.Trim().TrimEnd('&')})"; // Brabb3l's life-hacks
                        else if (returnType.Trim().EndsWith("*"))
                            result += $"nullptr";
                        else
                            result += $"{GetCustomReturn(returnType)}";
                        result += $"; }}";
                    }
                }
                if (!implementations.Contains(result))
                    implementations.Add(result);
                if(!CountOnly)
                    Console.WriteLine($"Generated {className}::{functionName}");
                FunctionCount++;
            }
        }

        private static bool IsValidClassName(string className)
        {
            return Regex.Match(className, @"^[\w\d_]+$").Success;
        }

        private static bool IsValidFunctionName(string functionName)
        {
            return Regex.Match(functionName.Trim(), @"^([\w\d_~]+|operator.+)$").Success && !(new string[] { "return", "if", "else", "const", "struct", "for" /* fill with more as they show up */ }).Contains(functionName.Trim()) && !IsAllCaps(functionName.Trim()); // Don't match macros
        }

        private static string FixReturnType(string returnType)
        {
            returnType = returnType.Trim();
            if (returnType.EndsWith("*"))
            {
                if (NestedStructs.ContainsKey(returnType.TrimEnd('*')))
                    return NestedStructs[returnType.TrimEnd('*')] + "* ";
            }
            else if (returnType.EndsWith("&"))
            {
                if (NestedStructs.ContainsKey(returnType.TrimEnd('&')))
                    return NestedStructs[returnType.TrimEnd('&')] + "& ";
            }
            else
            {
                if (NestedStructs.ContainsKey(returnType))
                    return NestedStructs[returnType] + " ";
            }
            if(!string.IsNullOrWhiteSpace(returnType))
                return returnType.Trim() + " ";
            return "";
        }

        private static string GetCustomReturn(string returnType)
        {
            returnType = TrimUselessSpaces(returnType); // trim spaces between < and character, ( and character, etc.
            switch (returnType)
            {
                case "FReply":
                    return "FReply::Unhandled()";
                case "TSharedRef<SWidget>":
                    return "Super::RebuildWidget()";
                default:
                    return $"{returnType}()";
            }
        }

        private static string TrimUselessSpaces(string str)
        {
            return Regex.Replace(str.Trim(), @"(?:([^\w\d])\s+([\w\d])|([\w\d])\s+([^\w\d])|([^\w\d])\s+([^\w\d]))", "$1$2$3$4$5$6");
        }

        private static string FixDefaults(string parameters)
        {
            string result = "";
            int paranthesisDepth = 1;
            bool isInDefault = false;
            for(int i = 1; i < parameters.Length; i++)
            {
                if (parameters[i] == '(')
                    paranthesisDepth++;
                if (parameters[i] == ')')
                    paranthesisDepth--;

                if(parameters[i] == '=')
                    isInDefault = true;

                if (parameters[i] == ',' && paranthesisDepth == 1)
                    isInDefault = false;

                if (!isInDefault)
                    result += parameters[i];
            }
            return result.Trim();
        }

        private static bool IsAllCaps(string str)
        {
            return !Regex.Match(str, "[a-z]").Success && !string.IsNullOrWhiteSpace(str);
        }

        private static bool IsValidReturnType(string returnType)
        {
            return !(new string[] { "return", "if", "else", "const", "struct", "for" /* fill with more as they show up */ }).Contains(returnType.Trim()) && !IsAllCaps(returnType) && !string.IsNullOrWhiteSpace(returnType) && !returnType.Contains("FORCEINLINE") && !returnType.Contains("+"); // FORCEINLINE are already implemented in header (?)
        }
    }
}
