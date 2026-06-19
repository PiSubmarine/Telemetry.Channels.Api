#pragma once

#include "PiSubmarine/Telemetry/Api/ChannelId.h"

namespace PiSubmarine::Telemetry::Channels::Api
{
    [[nodiscard]] inline const ::PiSubmarine::Telemetry::Api::ChannelId& BatteryMain() noexcept
    {
        static const ::PiSubmarine::Telemetry::Api::ChannelId channelId{.Value = "battery.main"};
        return channelId;
    }

    [[nodiscard]] inline const ::PiSubmarine::Telemetry::Api::ChannelId& MotorFrontLeft() noexcept
    {
        static const ::PiSubmarine::Telemetry::Api::ChannelId channelId{.Value = "motor.front-left"};
        return channelId;
    }

    [[nodiscard]] inline const ::PiSubmarine::Telemetry::Api::ChannelId& MotorFrontRight() noexcept
    {
        static const ::PiSubmarine::Telemetry::Api::ChannelId channelId{.Value = "motor.front-right"};
        return channelId;
    }

    [[nodiscard]] inline const ::PiSubmarine::Telemetry::Api::ChannelId& MotorRearLeft() noexcept
    {
        static const ::PiSubmarine::Telemetry::Api::ChannelId channelId{.Value = "motor.rear-left"};
        return channelId;
    }

    [[nodiscard]] inline const ::PiSubmarine::Telemetry::Api::ChannelId& MotorRearRight() noexcept
    {
        static const ::PiSubmarine::Telemetry::Api::ChannelId channelId{.Value = "motor.rear-right"};
        return channelId;
    }
}
