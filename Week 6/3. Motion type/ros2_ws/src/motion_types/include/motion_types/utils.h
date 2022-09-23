#ifndef UTILS_H
#define UTILS_H

#include <cmath>

double degree2radian(double angle_deg){
    double angle_rad = angle_deg * M_PI / 180;
    return angle_rad;
}

#endif