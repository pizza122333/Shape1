#ifndef RECT1_H
#define RECT1_H

#include "Shape1.h"

class Rect1 : public Shape1 {
    int width, height;
public:
    void setRect(int x, int y, int w, int h);
    void show();
};

#endif
