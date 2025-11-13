#include "Circle1.h"
#include "Rect1.h"
#include "Triangle1.h"

int main() {
    Circle1 x;
    Rect1 y;
    Triangle1 z;

    x.setCircle(0, 0, 2);
    y.setRect(1, 1, 5, 10);
    z.setTriangle(2, 2, 3, 4);

    x.show();
    y.show();
    z.show();

    return 0;
}
