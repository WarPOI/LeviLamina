#pragma once

#include "ll/api/base/Macro.h"

#include "mc/common/wrapper/optional_ref.h"

#include "ll/api/service/TargetedBedrock.h"

namespace RakNet {
class RakPeer;
}
class Minecraft;
class ServerLevel;
class Level;
class ServerNetworkHandler;
class NetworkSystem;
class CommandRegistry;

namespace ll::service::inline bedrock {

LLNDAPI optional_ref<Minecraft> getMinecraft();

LLNDAPI optional_ref<Level> getLevel();

LLNDAPI optional_ref<ServerNetworkHandler> getServerNetworkHandler();

LLNDAPI optional_ref<RakNet::RakPeer> getRakPeer();

LLNDAPI optional_ref<NetworkSystem> getNetworkSystem();

LLNDAPI optional_ref<CommandRegistry> getCommandRegistry();

} // namespace ll::service::inline bedrock
