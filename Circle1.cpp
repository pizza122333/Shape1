#include "Circle1.h"

void Circle1::setCircle(int x, int y, int r) {
    set(x, y);
    radius = r;
}

void Circle1::show() {
    cout << "좌표 (" << x << "," << y << ")에 반지름 "
         << radius << "인 원" << endl;
}
