

#include "overloadingh.h"

Point::Point(int x, int y){
    this->x = x;
    this->y = y;
}

bool Point::operator==(const Point &other) const {
    return ((x == other.x) && (y == other.y));
}


