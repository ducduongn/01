#include <iostream>

using namespace std;

struct Point {
    int x ;
    int y ;

    void GetPoint ( int _x, int _y) {
        x = _x;
        y = _y;
    }

    void print() {
        cout << x << " " << y << endl;
    }

};

void PrintAdress ( Point point) {
    cout << &point << " " << &point.x << " " << &point.y <<endl;
}

int main () {
    Point point;

    PrintAdress(point);     // Địa chỉ của point và trường x chính là địa chỉ sau khi nó được khai báo
                            // Địa chỉ hai trường x và y là hai ô nhớ cạnh nhau và cách nhau 4 bit
    return 0;
}
