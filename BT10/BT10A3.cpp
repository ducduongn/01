#include <iostream>

using namespace std;

struct Point {
    int x;
    int y;

    void GetPoint ( int _x, int _y) {
        x = _x;
        y = _y;
    }
    void print() {
        cout << x << " " << y << endl;
    }
};

Point GetMidpoint ( const Point point1, const Point point2) {
    Point midpoint;
    midpoint.x = ( point1.x + point2.x) /2;
    midpoint.y = (point1.y + point2.y) /2;
    return midpoint;
}

int main () {
    Point point1, point2;
    point1.GetPoint(1,2) ;
    point2.GetPoint(3,4) ;

    Point midpoint = GetMidpoint(point1, point2);
    midpoint.print();

    return 0;
}
