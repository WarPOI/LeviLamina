#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/string/HashedString.h"

class BlockState {
public:
    // BlockState inner types declare
    // clang-format off
    struct StateListNode;
    // clang-format on

    // BlockState inner types define
    struct StateListNode {

    public:
        BlockState::StateListNode* mNext;
        BlockState::StateListNode* mPrev;
        BlockState*                mState;

        // prevent constructor by default
        StateListNode& operator=(StateListNode const&) = delete;
        StateListNode(StateListNode const&)            = delete;
        StateListNode()                                = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol ??0StateListNode\@BlockState\@\@QEAA\@PEAV1\@\@Z
         */
        MCAPI StateListNode(class BlockState*);
        /**
         * @symbol ??1StateListNode\@BlockState\@\@QEAA\@XZ
         */
        MCAPI ~StateListNode();
        /**
         * @symbol ?mHead\@StateListNode\@BlockState\@\@2PEAU12\@EA
         */
        MCAPI static struct BlockState::StateListNode* mHead;
        // NOLINTEND
    };

public:
    size_t const             mID;
    size_t const             mVariationCount;
    class HashedString const mName;
    StateListNode            mNode;

    // prevent constructor by default
    BlockState& operator=(BlockState const&) = delete;
    BlockState(BlockState const&)            = delete;
    BlockState()                             = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_destructor_-1
     */
    virtual ~BlockState();
    /**
     * @vftbl 1
     * @symbol ?toNBT\@?$BlockStateVariant\@_N\@\@UEBAXAEAVCompoundTag\@\@H\@Z
     */
    virtual void toNBT(class CompoundTag&, int32_t) const = 0;
    /**
     * @vftbl 2
     * @symbol ?fromNBT\@?$BlockStateVariant\@_N\@\@UEBA_NAEBVCompoundTag\@\@AEAH\@Z
     */
    virtual bool fromNBT(class CompoundTag const&, int32_t&) const = 0;
    /**
     * @symbol ?forEachState\@BlockState\@\@SAXV?$function\@$$A6A_NAEBVBlockState\@\@\@Z\@std\@\@\@Z
     */
    MCAPI static void forEachState(std::function<bool(class BlockState const&)>);
    /**
     * @symbol ?getState\@BlockState\@\@SAPEBV1\@AEBVHashedString\@\@\@Z
     */
    MCAPI static class BlockState const* getState(class HashedString const&);
    // NOLINTEND
};
