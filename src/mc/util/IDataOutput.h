#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IDataOutput {

public:

    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual ~IDataOutput() = default;
    /**
     * @vftbl 1
     * @symbol ?writeString\@BytesDataOutput\@\@UEAAXV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    virtual void writeString(std::string_view) = 0;
    /**
     * @vftbl 2
     * @symbol ?writeLongString\@BytesDataOutput\@\@UEAAXV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    virtual void writeLongString(std::string_view) = 0;
    /**
     * @vftbl 3
     * @symbol ?writeFloat\@BigEndianStringByteOutput\@\@UEAAXM\@Z
     */
    virtual void writeFloat(float) = 0;
    /**
     * @vftbl 4
     * @symbol ?writeDouble\@BigEndianStringByteOutput\@\@UEAAXN\@Z
     */
    virtual void writeDouble(double) = 0;
    /**
     * @vftbl 5
     * @symbol ?writeByte\@BytesDataOutput\@\@UEAAXD\@Z
     */
    virtual void writeByte(char) = 0;
    /**
     * @vftbl 6
     * @symbol ?writeShort\@BigEndianStringByteOutput\@\@UEAAXF\@Z
     */
    virtual void writeShort(int16_t) = 0;
    /**
     * @vftbl 7
     * @symbol ?writeInt\@BigEndianStringByteOutput\@\@UEAAXH\@Z
     */
    virtual void writeInt(int32_t) = 0;
    /**
     * @vftbl 8
     * @symbol ?writeLongLong\@BigEndianStringByteOutput\@\@UEAAX_J\@Z
     */
    virtual void writeLongLong(int64_t) = 0;
    /**
     * @vftbl 9
     * @symbol ?writeBytes\@StringByteOutput\@\@UEAAXPEBX_K\@Z
     */
    virtual void writeBytes(void const*, uint64_t) = 0;
    // NOLINTEND
};
