#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/IRNS2_Berkley.h"
#include "mc/deps/raknet/RNS2BindResult.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class IRNS2_Berkley; }
namespace RakNet { struct RNS2_BerkleyBindParameters; }
namespace RakNet { struct SystemAddress; }
// clang-format on

namespace RakNet {

class RNS2_Berkley : public ::RakNet::IRNS2_Berkley {

public:
    // prevent constructor by default
    RNS2_Berkley& operator=(RNS2_Berkley const&) = delete;
    RNS2_Berkley(RNS2_Berkley const&)            = delete;
    RNS2_Berkley()                               = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0() = 0;
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?SetMulticastInterface\@RNS2_Berkley\@RakNet\@\@UEAAXH\@Z
     */
    virtual void SetMulticastInterface(int32_t);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RAKNET_RNS2_BERKLEY
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~RNS2_Berkley();
#endif
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?BindShared\@RNS2_Berkley\@RakNet\@\@IEAA?AW4RNS2BindResult\@2\@PEAURNS2_BerkleyBindParameters\@2\@PEBDI\@Z
     */
    MCAPI enum class RakNet::RNS2BindResult
    BindShared(struct RakNet::RNS2_BerkleyBindParameters*, char const*, uint32_t);
    /**
     * @symbol
     * ?BindSharedIPV4And6\@RNS2_Berkley\@RakNet\@\@IEAA?AW4RNS2BindResult\@2\@PEAURNS2_BerkleyBindParameters\@2\@PEBDI\@Z
     */
    MCAPI enum class RakNet::RNS2BindResult
    BindSharedIPV4And6(struct RakNet::RNS2_BerkleyBindParameters*, char const*, uint32_t);
    /**
     * @symbol ?RecvFromLoopInt\@RNS2_Berkley\@RakNet\@\@IEAAIXZ
     */
    MCAPI uint32_t RecvFromLoopInt();
    /**
     * @symbol ?SetBroadcastSocket\@RNS2_Berkley\@RakNet\@\@IEAAXH\@Z
     */
    MCAPI void SetBroadcastSocket(int32_t);
    /**
     * @symbol ?SetSocketOptions\@RNS2_Berkley\@RakNet\@\@IEAAXXZ
     */
    MCAPI void SetSocketOptions();
    /**
     * @symbol ?GetSystemAddressIPV4And6\@RNS2_Berkley\@RakNet\@\@KAXHPEAUSystemAddress\@2\@\@Z
     */
    MCAPI static void GetSystemAddressIPV4And6(int32_t, struct RakNet::SystemAddress*);
    /**
     * @symbol ?RecvFromLoop\@RNS2_Berkley\@RakNet\@\@KAIPEAX\@Z
     */
    MCAPI static uint32_t RecvFromLoop(void*);
    // NOLINTEND
};

}; // namespace RakNet
