#include "box_capacity.h"

int box_capacity(int length_ft, int width_ft, int height_ft) {
    const int INCHES_PER_FOOT = 12;
    int length_in = length_ft * INCHES_PER_FOOT;
    int width_in = width_ft * INCHES_PER_FOOT;
    int height_in = height_ft * INCHES_PER_FOOT;

    const int BOX_SIZE_INCHES = 16;

    int boxes_length = length_in / BOX_SIZE_INCHES;
    int boxes_width = width_in / BOX_SIZE_INCHES;
    int boxes_height = height_in / BOX_SIZE_INCHES;

    int total_boxes = boxes_length * boxes_width * boxes_height;

    return total_boxes;
}