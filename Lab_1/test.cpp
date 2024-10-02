#include <gtest/gtest.h>
#include "box_capacity.h"  


TEST(BoxCapacityTest, TestAsInExample) {
    int length_ft = 32;
    int width_ft = 64;
    int height_ft = 16;
    int expected_boxes = 13824;  

    int actual_boxes = box_capacity(length_ft, width_ft, height_ft);

    ASSERT_TRUE(actual_boxes == expected_boxes);
}


TEST(BoxCapacityTest, BasicTest) {
    int length_ft = 12;
    int width_ft = 12;
    int height_ft = 12;
    int expected_boxes = 729;  

    int actual_boxes = box_capacity(length_ft, width_ft, height_ft);

    ASSERT_TRUE(actual_boxes == expected_boxes);
}

TEST(BoxCapacityTest, NonDivisibleDimensions) {
    int length_ft = 10;
    int width_ft = 10;
    int height_ft = 10;
    int expected_boxes = 343;

    int actual_boxes = box_capacity(length_ft, width_ft, height_ft);

    ASSERT_TRUE(actual_boxes == expected_boxes);
}


TEST(BoxCapacityTest, LargeDimensions) {
    int length_ft = 32;
    int width_ft = 32;
    int height_ft = 32;
    int expected_boxes = 13824;  

    int actual_boxes = box_capacity(length_ft, width_ft, height_ft);

    ASSERT_TRUE(actual_boxes == expected_boxes);
}


TEST(BoxCapacityTest, EqualDimensions) {
    int length_ft = 16;
    int width_ft = 16;
    int height_ft = 16;
    int expected_boxes = 1728;

    int actual_boxes = box_capacity(length_ft, width_ft, height_ft);

    ASSERT_TRUE(actual_boxes == expected_boxes);
}


TEST(BoxCapacityTest, SmallDimensions) {
    int length_ft = 1;
    int width_ft = 1;
    int height_ft = 1;
    int expected_boxes = 0;

    int actual_boxes = box_capacity(length_ft, width_ft, height_ft);

    ASSERT_TRUE(actual_boxes == expected_boxes);
}


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}