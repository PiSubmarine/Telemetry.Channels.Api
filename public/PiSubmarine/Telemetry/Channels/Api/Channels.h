#pragma once

#include "PiSubmarine/Telemetry/Api/ChannelId.h"

namespace PiSubmarine::Telemetry::Channels::Api
{
    inline constexpr ::PiSubmarine::Telemetry::Api::ChannelId BallastMain{.Value = "ballast.main"};
    inline constexpr ::PiSubmarine::Telemetry::Api::ChannelId BatteryMain{.Value = "battery.main"};
    inline constexpr ::PiSubmarine::Telemetry::Api::ChannelId DepthMain{.Value = "depth.main"};
    inline constexpr ::PiSubmarine::Telemetry::Api::ChannelId LampMain{.Value = "lamp.main"};
    inline constexpr ::PiSubmarine::Telemetry::Api::ChannelId MotorFrontLeft{.Value = "motor.front-left"};
    inline constexpr ::PiSubmarine::Telemetry::Api::ChannelId MotorFrontRight{.Value = "motor.front-right"};
    inline constexpr ::PiSubmarine::Telemetry::Api::ChannelId MotorRearLeft{.Value = "motor.rear-left"};
    inline constexpr ::PiSubmarine::Telemetry::Api::ChannelId MotorRearRight{.Value = "motor.rear-right"};
    inline constexpr ::PiSubmarine::Telemetry::Api::ChannelId ProximityMain{.Value = "proximity.main"};
    inline constexpr ::PiSubmarine::Telemetry::Api::ChannelId VideoMain{.Value = "video.main"};
}
