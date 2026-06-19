#include <gtest/gtest.h>

#include "PiSubmarine/Telemetry/Channels/Api/Channels.h"

namespace PiSubmarine::Telemetry::Channels::Api
{
    TEST(ChannelsTest, ExposesStableSharedChannelIds)
    {
        EXPECT_EQ(BatteryMain().Value, "battery.main");
        EXPECT_EQ(MotorFrontLeft().Value, "motor.front-left");
        EXPECT_EQ(MotorFrontRight().Value, "motor.front-right");
        EXPECT_EQ(MotorRearLeft().Value, "motor.rear-left");
        EXPECT_EQ(MotorRearRight().Value, "motor.rear-right");
    }

    TEST(ChannelsTest, AccessorsReturnSharedInstances)
    {
        EXPECT_EQ(&BatteryMain(), &BatteryMain());
        EXPECT_EQ(&MotorFrontLeft(), &MotorFrontLeft());
        EXPECT_EQ(&MotorFrontRight(), &MotorFrontRight());
        EXPECT_EQ(&MotorRearLeft(), &MotorRearLeft());
        EXPECT_EQ(&MotorRearRight(), &MotorRearRight());
    }
}
