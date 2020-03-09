using System;
using System.Globalization;
using Newtonsoft.Json;
using Newtonsoft.Json.Converters;

namespace Doxygen
{
    public partial class DoxygenJson
    {
        [JsonProperty("doxygen")]
        public Doxygen Doxygen { get; set; }
    }

    public partial class Doxygen
    {
        [JsonProperty("compounddef")]
        public Compounddef Compounddef { get; set; }
    }

    public partial class Compounddef
    {

        [JsonProperty("compoundname")]
        public string Compoundname { get; set; }

        [JsonProperty("sectiondef")]
        public SectiondefUnion Sectiondef { get; set; }

        [JsonProperty("location")]
        public Location Location { get; set; }
    }

    public partial class Location
    {
        [JsonProperty("@file")]
        public string File { get; set; }

        [JsonProperty("@line")]
        [JsonConverter(typeof(ParseStringConverter))]
        public long Line { get; set; }

        [JsonProperty("@column")]
        [JsonConverter(typeof(ParseStringConverter))]
        public long Column { get; set; }

        [JsonProperty("@bodyfile", NullValueHandling = NullValueHandling.Ignore)]
        public string Bodyfile { get; set; }

        [JsonProperty("@bodystart", NullValueHandling = NullValueHandling.Ignore)]
        [JsonConverter(typeof(ParseStringConverter))]
        public long? Bodystart { get; set; }

        [JsonProperty("@bodyend", NullValueHandling = NullValueHandling.Ignore)]
        [JsonConverter(typeof(ParseStringConverter))]
        public long? Bodyend { get; set; }
    }

    public partial class SectiondefElement
    {
        [JsonProperty("@kind")]
        public string Kind { get; set; }

        [JsonProperty("memberdef")]
        public MemberUnion Memberdef { get; set; }
    }

    public partial class MemberdefElement
    {
        [JsonProperty("@kind")]
        public string Kind { get; set; }

        [JsonProperty("@id")]
        public string Id { get; set; }

        [JsonProperty("@prot")]
        public string Prot { get; set; }

        [JsonProperty("@static")]
        public string Static { get; set; }

        [JsonProperty("@mutable", NullValueHandling = NullValueHandling.Ignore)]
        public string Mutable { get; set; }

        [JsonProperty("definition")]
        public string Definition { get; set; }

        [JsonProperty("argsstring")]
        public string Argsstring { get; set; }

        [JsonProperty("name")]
        public string Name { get; set; }

        [JsonProperty("location")]
        public Location Location { get; set; }

        [JsonProperty("@const", NullValueHandling = NullValueHandling.Ignore)]
        public string Const { get; set; }

        [JsonProperty("@explicit", NullValueHandling = NullValueHandling.Ignore)]
        public string Explicit { get; set; }

        [JsonProperty("@inline", NullValueHandling = NullValueHandling.Ignore)]
        public string Inline { get; set; }

        [JsonProperty("@virt", NullValueHandling = NullValueHandling.Ignore)]
        public string Virt { get; set; }

        [JsonProperty("bitfield", NullValueHandling = NullValueHandling.Ignore)]
        public string Bitfield { get; set; }

        [JsonProperty("@final", NullValueHandling = NullValueHandling.Ignore)]
        public string Final { get; set; }
    }

    public partial struct MemberUnion
    {
        public MemberdefElement[] MemberdefElementArray;

        public static implicit operator MemberUnion(MemberdefElement MemberElement) => new MemberUnion { MemberdefElementArray = new MemberdefElement[] { MemberElement } };
        public static implicit operator MemberUnion(MemberdefElement[] MemberElementArray) => new MemberUnion { MemberdefElementArray = MemberElementArray };
    }

    public partial struct SectiondefUnion
    {
        public SectiondefElement[] SectiondefElementArray;

        public static implicit operator SectiondefUnion(SectiondefElement SectiondefElement) => new SectiondefUnion { SectiondefElementArray = new SectiondefElement[] { SectiondefElement } };
        public static implicit operator SectiondefUnion(SectiondefElement[] SectiondefElementArray) => new SectiondefUnion { SectiondefElementArray = SectiondefElementArray };
    }

    internal static class Converter
    {
        public static readonly JsonSerializerSettings Settings = new JsonSerializerSettings
        {
            MetadataPropertyHandling = MetadataPropertyHandling.Ignore,
            DateParseHandling = DateParseHandling.None,
            Converters =
            {
                MemberUnionConverter.Singleton,
                SectiondefUnionConverter.Singleton,
                new IsoDateTimeConverter { DateTimeStyles = DateTimeStyles.AssumeUniversal }
            },
        };
    }

    internal class ParseStringConverter : JsonConverter
    {
        public override bool CanConvert(Type t) => t == typeof(long) || t == typeof(long?);

        public override object ReadJson(JsonReader reader, Type t, object existingValue, JsonSerializer serializer)
        {
            if (reader.TokenType == JsonToken.Null) return null;
            var value = serializer.Deserialize<string>(reader);
            long l;
            if (Int64.TryParse(value, out l))
            {
                return l;
            }
            throw new Exception("Cannot unmarshal type long");
        }

        public override void WriteJson(JsonWriter writer, object untypedValue, JsonSerializer serializer)
        {
            if (untypedValue == null)
            {
                serializer.Serialize(writer, null);
                return;
            }
            var value = (long)untypedValue;
            serializer.Serialize(writer, value.ToString());
            return;
        }

        public static readonly ParseStringConverter Singleton = new ParseStringConverter();
    }

    internal class MemberUnionConverter : JsonConverter
    {
        public override bool CanConvert(Type t) => t == typeof(MemberUnion) || t == typeof(MemberUnion?);

        public override object ReadJson(JsonReader reader, Type t, object existingValue, JsonSerializer serializer)
        {
            switch (reader.TokenType)
            {
                case JsonToken.StartObject:
                    var objectValue = serializer.Deserialize<MemberdefElement>(reader);
                    return new MemberUnion { MemberdefElementArray = new MemberdefElement[] { objectValue } };
                case JsonToken.StartArray:
                    var arrayValue = serializer.Deserialize<MemberdefElement[]>(reader);
                    return new MemberUnion { MemberdefElementArray = arrayValue };
            }
            throw new Exception("Cannot unmarshal type MemberUnion");
        }

        public override void WriteJson(JsonWriter writer, object untypedValue, JsonSerializer serializer)
        {
            var value = (MemberUnion)untypedValue;
            if (value.MemberdefElementArray != null)
            {
                serializer.Serialize(writer, value.MemberdefElementArray);
                return;
            }
            throw new Exception("Cannot marshal type MemberUnion");
        }

        public static readonly MemberUnionConverter Singleton = new MemberUnionConverter();
    }

    internal class SectiondefUnionConverter : JsonConverter
    {
        public override bool CanConvert(Type t) => t == typeof(SectiondefUnion) || t == typeof(SectiondefUnion?);

        public override object ReadJson(JsonReader reader, Type t, object existingValue, JsonSerializer serializer)
        {
            switch (reader.TokenType)
            {
                case JsonToken.StartObject:
                    var objectValue = serializer.Deserialize<SectiondefElement>(reader);
                    return new SectiondefUnion { SectiondefElementArray = new SectiondefElement[] { objectValue } };
                case JsonToken.StartArray:
                    var arrayValue = serializer.Deserialize<SectiondefElement[]>(reader);
                    return new SectiondefUnion { SectiondefElementArray = arrayValue };
            }
            throw new Exception("Cannot unmarshal type SectiondefUnion");
        }

        public override void WriteJson(JsonWriter writer, object untypedValue, JsonSerializer serializer)
        {
            var value = (SectiondefUnion)untypedValue;
            if (value.SectiondefElementArray != null)
            {
                serializer.Serialize(writer, value.SectiondefElementArray);
                return;
            }
            throw new Exception("Cannot marshal type SectiondefUnion");
        }

        public static readonly SectiondefUnionConverter Singleton = new SectiondefUnionConverter();
    }
}
