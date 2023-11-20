//
// Created by nirou on 11/20/2023.
//

#ifndef OPERATOROVERLOADING_OVERLOADINGH_H
#define OPERATOROVERLOADING_OVERLOADINGH_H


class Point{
private:
    int x;
    int y;
public:
    Point(int x,int y);
    bool operator==(const Point& other)const;
};


#endif //OPERATOROVERLOADING_OVERLOADINGH_H
