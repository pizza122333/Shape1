#include "Rect1.h"

void Rect1::setRect(int x, int y, int w, int h) {
    set(x, y);
    width = w;
    height = h;
}

void Rect1::show() {
    cout << "좌표 (" << x << "," << y << ")에 폭"
         << width << ", 높이" << height << "인 직사각형" << endl;
}
