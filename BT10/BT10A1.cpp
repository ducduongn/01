#include <iostream>

using namespace std;

struct Point {
    int x;
    int y;

    void GetPoint ( int _x, int _y) {
        x = _x;
        y = _y;
    }
};

void print ( Point point) {
        cout << point.x << " " << point.y << endl;
    }

int main () {
    Point point;
    point.GetPoint(5,6);
    print(point);
    return 0;
}
