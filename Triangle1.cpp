#include "Triangle1.h"

void Triangle1::setTriangle(int x, int y, int b, int h) {
    set(x, y);
    base = b;
    height = h;
}

void Triangle1::show() {
    cout << "좌표 (" << x << "," << y << ")에 밑변"
         << base << ", 높이" << height << "인 삼각형" << endl;
}
