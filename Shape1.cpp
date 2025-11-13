#include "Shape1.h"

void Shape1::set(int x, int y) {
    this->x = x;
    this->y = y;
}

void Shape1::showPosition() {
    cout << "좌표 (" << x << "," << y << ")";
}
