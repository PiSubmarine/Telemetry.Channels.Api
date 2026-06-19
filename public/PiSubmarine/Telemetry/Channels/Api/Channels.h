#pragma once

#include <string_view>

namespace PiSubmarine::Telemetry::Channels::Api
{
    inline constexpr std::string_view BallastMain = "ballast.main";
    inline constexpr std::string_view BatteryMain = "battery.main";
    inline constexpr std::string_view DepthMain = "depth.main";
    inline constexpr std::string_view LampMain = "lamp.main";
    inline constexpr std::string_view MotorFrontLeft = "motor.front-left";
    inline constexpr std::string_view MotorFrontRight = "motor.front-right";
    inline constexpr std::string_view MotorRearLeft = "motor.rear-left";
    inline constexpr std::string_view MotorRearRight = "motor.rear-right";
    inline constexpr std::string_view ProximityMain = "proximity.main";
    inline constexpr std::string_view VideoMain = "video.main";
}
