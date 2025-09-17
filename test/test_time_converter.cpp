#include <gtest/gtest.h>
#include "../include/time_converter.h"

TEST(TimeConverterTest, BasicAMConversion) {
    EXPECT_EQ(convertTo24Hour(8, 30, "am"), "0830");
    EXPECT_EQ(convertTo24Hour(9, 15, "am"), "0915");
    EXPECT_EQ(convertTo24Hour(11, 45, "am"), "1145");
}

TEST(TimeConverterTest, BasicPMConversion) {
    EXPECT_EQ(convertTo24Hour(8, 30, "pm"), "2030");
    EXPECT_EQ(convertTo24Hour(3, 0, "pm"), "1500");
    EXPECT_EQ(convertTo24Hour(11, 59, "pm"), "2359");
}

TEST(TimeConverterTest, NoonAndMidnight) {
    EXPECT_EQ(convertTo24Hour(12, 0, "am"), "0000");
    EXPECT_EQ(convertTo24Hour(12, 0, "pm"), "1200");
}

TEST(TimeConverterTest, EdgeCases) {
    EXPECT_EQ(convertTo24Hour(12, 15, "am"), "0015");
    EXPECT_EQ(convertTo24Hour(12, 30, "pm"), "1230");
    EXPECT_EQ(convertTo24Hour(1, 0, "am"), "0100");
    EXPECT_EQ(convertTo24Hour(1, 0, "pm"), "1300");
}

TEST(TimeConverterTest, BoundaryMinutes) {
    EXPECT_EQ(convertTo24Hour(5, 0, "am"), "0500");
    EXPECT_EQ(convertTo24Hour(5, 59, "am"), "0559");
    EXPECT_EQ(convertTo24Hour(5, 0, "pm"), "1700");
    EXPECT_EQ(convertTo24Hour(5, 59, "pm"), "1759");
}
