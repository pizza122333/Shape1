#ifndef CIRCLE1_H
#define CIRCLE1_H

#include "Shape1.h"

class Circle1 : public Shape1 {
    int radius;
public:
    void setCircle(int x, int y, int r);
    void show();
};

#endif
