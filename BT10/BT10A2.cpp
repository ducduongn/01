#include <iostream>

using namespace std;

struct Point {
    int x;
    int y;

    void GetPoint (int _x, int _y) {
        x = _x;
        y = _y;
    }

};
void printPass_by_reference (Point &point) {
    cout << &point << endl;
}

void printPass_by_value ( Point point) {
    cout << &point << endl;
}

int main () {
    Point point;

    cout << &point << endl;

    printPass_by_value(point);

    printPass_by_reference(point);
    return 0;
}
