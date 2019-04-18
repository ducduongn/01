#include <iostream>

using namespace std;

struct Point {
    int x;
    int y;

    void GetPoint ( int _x , int _y) {
        x = _y;
        y = _y;
    }
};


int main () {
    Point point, otherpoint;
    Point point_array [3];

    cout << &point << " " << &point.x << " " << &point.y << endl;

    otherpoint = point;
    cout << &otherpoint << " " << &otherpoint.x << " " << &otherpoint.y << endl;

    point = point_array[0];
    cout << &point_array[0] << " " << &point_array[0].x << " " << &point_array[0].y << endl;

    return 0;
}

/*
   trong cả hai trường hợp với biến struct được sao chép có trường dữ liệu là mảng
   và là một struct khác, địa chỉ của biến struct được sao chép khác với struct đầu.

*/
