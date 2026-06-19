#include <gtest/gtest.h>

#include "PiSubmarine/Telemetry/Channels/Api/Channels.h"

namespace PiSubmarine::Telemetry::Channels::Api
{
    TEST(ChannelsTest, ExposesStableSharedChannelIds)
    {
        EXPECT_EQ(BallastMain, "ballast.main");
        EXPECT_EQ(BatteryMain, "battery.main");
        EXPECT_EQ(DepthMain, "depth.main");
        EXPECT_EQ(LampMain, "lamp.main");
        EXPECT_EQ(MotorFrontLeft, "motor.front-left");
        EXPECT_EQ(MotorFrontRight, "motor.front-right");
        EXPECT_EQ(MotorRearLeft, "motor.rear-left");
        EXPECT_EQ(MotorRearRight, "motor.rear-right");
        EXPECT_EQ(ProximityMain, "proximity.main");
        EXPECT_EQ(VideoMain, "video.main");
    }

    TEST(ChannelsTest, ValuesAreSharedInstances)
    {
        EXPECT_EQ(&BallastMain, &BallastMain);
        EXPECT_EQ(&BatteryMain, &BatteryMain);
        EXPECT_EQ(&DepthMain, &DepthMain);
        EXPECT_EQ(&LampMain, &LampMain);
        EXPECT_EQ(&MotorFrontLeft, &MotorFrontLeft);
        EXPECT_EQ(&MotorFrontRight, &MotorFrontRight);
        EXPECT_EQ(&MotorRearLeft, &MotorRearLeft);
        EXPECT_EQ(&MotorRearRight, &MotorRearRight);
        EXPECT_EQ(&ProximityMain, &ProximityMain);
        EXPECT_EQ(&VideoMain, &VideoMain);
    }
}
