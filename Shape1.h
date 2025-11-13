#ifndef SHAPE1_H
#define SHAPE1_H

#include <iostream>
using namespace std;

class Shape1 {
protected:
    int x, y;
public:
    void set(int x, int y);
    void showPosition();
};

#endif
