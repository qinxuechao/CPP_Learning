//
// Created by HANTAK on 4/7/2022.
//

#ifndef CPP_LEARNING_CORRDIN_H
#define CPP_LEARNING_CORRDIN_H

struct polar {
    double distance;    // distance from origin
    double angle;       // direction from origin
};

struct rect {
    double x;           // horizontal distance from origin
    double y;           // vertical distance from origin
};

// prototypes
polar rect_to_polar(rect xypos);

void show_polar(polar dapos);

#endif //CPP_LEARNING_CORRDIN_H
