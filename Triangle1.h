#ifndef TRIANGLE1_H
#define TRIANGLE1_H

#include "Shape1.h"

class Triangle1 : public Shape1 {
    int base, height;
public:
    void setTriangle(int x, int y, int b, int h);
    void show();
};

#endif
