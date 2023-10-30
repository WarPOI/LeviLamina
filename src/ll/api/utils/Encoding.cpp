#include "Encoding.h"
#include "StringUtils.h"
#include <compact_enc_det/compact_enc_det.h>

namespace encoding {

const std::unordered_map<Encoding, UINT> CODE_PAGE_MAP = {
    {Encoding::ISO_8859_1,           28591  },
    {Encoding::ISO_8859_2,           28592  },
    {Encoding::ISO_8859_3,           28593  },
    {Encoding::ISO_8859_4,           28594  },
    {Encoding::ISO_8859_5,           28595  },
    {Encoding::ISO_8859_6,           28596  },
    {Encoding::ISO_8859_7,           28597  },
    {Encoding::ISO_8859_8,           28598  },
    {Encoding::ISO_8859_9,           28599  },
 //{Encoding::ISO_8859_10,},             //?
    {Encoding::JAPANESE_EUC_JP,      51932  },
    {Encoding::JAPANESE_SHIFT_JIS,   932    },
    {Encoding::JAPANESE_JIS,         932    },
    {Encoding::CHINESE_BIG5,         950    },
    {Encoding::CHINESE_GB,           936    },
    {Encoding::CHINESE_EUC_CN,       51936  },
    {Encoding::KOREAN_EUC_KR,        51949  },
 //{Encoding::UNICODE, },
    {Encoding::CHINESE_EUC_DEC,      51936  },
    {Encoding::CHINESE_CNS,          20000  },
    {Encoding::CHINESE_BIG5_CP950,   950    },
    {Encoding::JAPANESE_CP932,       932    },
    {Encoding::UTF8,                 CP_UTF8},
    {Encoding::UNKNOWN_ENCODING,     CP_ACP },
    {Encoding::ASCII_7BIT,           28591  },
    {Encoding::RUSSIAN_KOI8_R,       20866  },
    {Encoding::RUSSIAN_CP1251,       1251   },
    {Encoding::MSFT_CP1252,          1252   },
    {Encoding::RUSSIAN_KOI8_RU,      20866  },
    {Encoding::MSFT_CP1250,          1250   },
    {Encoding::ISO_8859_15,          28605  },
    {Encoding::MSFT_CP1254,          1254   },
    {Encoding::MSFT_CP1257,          1257   },
    {Encoding::ISO_8859_11,          10021  }, //?
    {Encoding::MSFT_CP874,           874    },
    {Encoding::MSFT_CP1256,          1256   },
    {Encoding::MSFT_CP1255,          1255   },
    {Encoding::ISO_8859_8_I,         38598  },
    {Encoding::HEBREW_VISUAL,        28598  },
    {Encoding::CZECH_CP852,          852    },
 //{Encoding::CZECH_CSN_369103, },       //?
    {Encoding::MSFT_CP1253,          1253   },
    {Encoding::RUSSIAN_CP866,        866    },
    {Encoding::ISO_8859_13,          28603  },
    {Encoding::ISO_2022_KR,          50225  },
    {Encoding::GBK,                  936    },
    {Encoding::GB18030,              54936  },
    {Encoding::BIG5_HKSCS,           950    },
    {Encoding::ISO_2022_CN,          50227  },
    {Encoding::TSCII,                57004  }, //?
    {Encoding::TAMIL_MONO,           57004  }, //?
    {Encoding::TAMIL_BI,             57004  }, //?
  //{Encoding::JAGRAN, },                 //?
    {Encoding::MACINTOSH_ROMAN,      10000  },
    {Encoding::UTF7,                 CP_UTF7},
    {Encoding::UTF16BE,              1201   },
    {Encoding::UTF16LE,              1200   },
    {Encoding::UTF32BE,              12001  },
    {Encoding::UTF32LE,              12000  },
 //{Encoding::BINARYENC, },
    {Encoding::HZ_GB_2312,           52936  },
 //{Encoding::TAM_ELANGO, },             //?
  //{Encoding::TAM_LTTMBARANI, },         //?
  //{Encoding::TAM_SHREE, },              //?
  //{Encoding::TAM_TBOOMIS, },            //?
  //{Encoding::TAM_TMNEWS, },             //?
  //{Encoding::TAM_WEBTAMIL, },           //?
    {Encoding::KDDI_SHIFT_JIS,       932    },
    {Encoding::DOCOMO_SHIFT_JIS,     932    },
    {Encoding::SOFTBANK_SHIFT_JIS,   932    },
    {Encoding::KDDI_ISO_2022_JP,     50220  },
    {Encoding::SOFTBANK_ISO_2022_JP, 50220  },
};
///////////////////////////// Encoding-CodePage Map /////////////////////////////

Encoding getLocalEncoding() {
    UINT page = GetACP();
    for (auto& [k, v] : CODE_PAGE_MAP) {
        if (v == page) return k;
    }
    return default_encoding();
}

Encoding detectEncoding(std::string const& text, bool* isReliable) {
    bool temp;
    int  bytes_consumed;

    return CompactEncDet::DetectEncoding(
        text.c_str(),
        (int)text.size(),
        nullptr,
        nullptr,
        nullptr,
        UNKNOWN_ENCODING,
        UNKNOWN_LANGUAGE,
        CompactEncDet::WEB_CORPUS,
        false,
        &bytes_consumed,
        isReliable ? isReliable : &temp
    );
}

std::string fromUnicode(std::wstring const& text, Encoding encoding) {
    try {
        return ll::StringUtils::wstr2str(text, CODE_PAGE_MAP.at(encoding));
    } catch (...) { return ""; }
}

std::wstring toUnicode(std::string const& text, Encoding encoding) {
    try {
        return ll::StringUtils::str2wstr(text, CODE_PAGE_MAP.at(encoding));
    } catch (...) { return L""; }
}

std::string toUTF8(std::string const& text) { return convert(text, detectEncoding(text), Encoding::UTF8); }

std::string toUTF8(std::string const& text, Encoding from) { return convert(text, from, Encoding::UTF8); }

std::string convert(std::string const& text, Encoding from, Encoding to) {
    if (text.empty() || from == to) return text;

    std::wstring uni = toUnicode(text, from);
    if (uni.empty()) return "";

    return fromUnicode(uni, to);
}

} // namespace encoding
