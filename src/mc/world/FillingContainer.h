#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Container.h"
#include "mc/world/containers/ContainerType.h"

class FillingContainer : public ::Container {

public:
    // prevent constructor by default
    FillingContainer(FillingContainer const&) = delete;
    FillingContainer()                        = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol ?serverInitItemStackIds\@FillingContainer\@\@UEAAXHHV?$function\@$$A6AXHAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    virtual void serverInitItemStackIds(int32_t, int32_t, std::function<void(int32_t, class ItemStack const&)>);
    /**
     * @vftbl 5
     * @symbol ?getItem\@FillingContainer\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    virtual class ItemStack const& getItem(int32_t) const;
    /**
     * @vftbl 10
     * @symbol ?setItem\@FillingContainer\@\@UEAAXHAEBVItemStack\@\@\@Z
     */
    virtual void setItem(int32_t, class ItemStack const&);
    /**
     * @vftbl 11
     * @symbol ?setItemWithForceBalance\@FillingContainer\@\@UEAAXHAEBVItemStack\@\@_N\@Z
     */
    virtual void setItemWithForceBalance(int32_t, class ItemStack const&, bool);
    /**
     * @vftbl 12
     * @symbol ?removeItem\@FillingContainer\@\@UEAAXHH\@Z
     */
    virtual void removeItem(int32_t, int32_t);
    /**
     * @vftbl 16
     * @symbol ?getContainerSize\@FillingContainer\@\@UEBAHXZ
     */
    virtual int32_t getContainerSize() const;
    /**
     * @vftbl 17
     * @symbol ?getMaxStackSize\@FillingContainer\@\@UEBAHXZ
     */
    virtual int32_t getMaxStackSize() const;
    /**
     * @vftbl 18
     * @symbol ?startOpen\@FillingContainer\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    virtual void startOpen(class Player&);
    /**
     * @vftbl 19
     * @symbol ?stopOpen\@FillingContainer\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    virtual void stopOpen(class Player&);
    /**
     * @vftbl 25
     * @symbol __unk_vfn_25
     */
    virtual void __unk_vfn_25();
    /**
     * @vftbl 26
     * @symbol __unk_vfn_26
     */
    virtual void __unk_vfn_26();
    /**
     * @vftbl 36
     * @symbol ?add\@FillingContainer\@\@UEAA_NAEAVItemStack\@\@\@Z
     */
    virtual bool add(class ItemStack&);
    /**
     * @vftbl 37
     * @symbol ?canAdd\@FillingContainer\@\@UEBA_NAEBVItemStack\@\@\@Z
     */
    virtual bool canAdd(class ItemStack const&) const;
    /**
     * @vftbl 38
     * @symbol ?clearSlot\@FillingContainer\@\@UEAAXH\@Z
     */
    virtual void clearSlot(int32_t);
    /**
     * @vftbl 39
     * @symbol ?clearInventory\@FillingContainer\@\@UEAAHH\@Z
     */
    virtual int32_t clearInventory(int32_t);
    /**
     * @vftbl 40
     * @symbol ?load\@FillingContainer\@\@UEAAXAEBVListTag\@\@AEBVSemVersion\@\@AEAVLevel\@\@\@Z
     */
    virtual void load(class ListTag const&, class SemVersion const&, class Level&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FILLINGCONTAINER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~FillingContainer();
#endif
    /**
     * @symbol ??0FillingContainer\@\@QEAA\@PEAVPlayer\@\@HW4ContainerType\@\@\@Z
     */
    MCAPI FillingContainer(class Player*, int32_t, enum class ContainerType);
    /**
     * @symbol ?getHotbarSize\@FillingContainer\@\@QEBAHXZ
     */
    MCAPI int32_t getHotbarSize() const;
    /**
     * @symbol ?getSlotWithItem\@FillingContainer\@\@QEBAHAEBVItemStack\@\@_N1\@Z
     */
    MCAPI int32_t getSlotWithItem(class ItemStack const&, bool, bool) const;
    /**
     * @symbol ?hasResource\@FillingContainer\@\@QEAA_NH\@Z
     */
    MCAPI bool hasResource(int32_t);
    /**
     * @symbol ??4FillingContainer\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class FillingContainer& operator=(class FillingContainer const&);
    /**
     * @symbol ?removeResource\@FillingContainer\@\@QEAAHAEBVItemStack\@\@_N1H\@Z
     */
    MCAPI int32_t removeResource(class ItemStack const&, bool, bool, int32_t);
    /**
     * @symbol ?removeResource\@FillingContainer\@\@QEAA_NH\@Z
     */
    MCAPI bool removeResource(int32_t);
    /**
     * @symbol
     * ?save\@FillingContainer\@\@QEBA?AV?$unique_ptr\@VListTag\@\@U?$default_delete\@VListTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class ListTag> save() const;
    /**
     * @symbol ?swapSlots\@FillingContainer\@\@QEAAXHH\@Z
     */
    MCAPI void swapSlots(int32_t, int32_t);
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol ?_addResource\@FillingContainer\@\@IEAAHAEBVItemStack\@\@\@Z
     */
    MCAPI int32_t _addResource(class ItemStack const&);
    /**
     * @symbol ?_doDrop\@FillingContainer\@\@IEAAXAEAVItemStack\@\@_N\@Z
     */
    MCAPI void _doDrop(class ItemStack&, bool);
    /**
     * @symbol ?_fixBackwardCompabilityItem\@FillingContainer\@\@IEAAXAEAVItemStack\@\@\@Z
     */
    MCAPI void _fixBackwardCompabilityItem(class ItemStack&);
    /**
     * @symbol ?_getFreeSlot\@FillingContainer\@\@IEBAHXZ
     */
    MCAPI int32_t _getFreeSlot() const;
    /**
     * @symbol ?_getSlot\@FillingContainer\@\@IEBAHH\@Z
     */
    MCAPI int32_t _getSlot(int32_t) const;
    /**
     * @symbol ?_getSlotWithRemainingSpace\@FillingContainer\@\@IEBAHAEBVItemStack\@\@\@Z
     */
    MCAPI int32_t _getSlotWithRemainingSpace(class ItemStack const&) const;
    /**
     * @symbol ?_isCreative\@FillingContainer\@\@IEBA_NXZ
     */
    MCAPI bool _isCreative() const;
    /**
     * @symbol ?_release\@FillingContainer\@\@IEAAXH\@Z
     */
    MCAPI void _release(int32_t);
    // NOLINTEND
};
