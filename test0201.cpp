#include <iostream>

using namespace std;

int main () {
    int arrInt[3];
    char arrChar[3] ;
    char *ptr;
    for ( int i = 0; i < 3; i++) {
        cin >> arrInt[i];
        cout << arrInt + i <<" " ;
    }
    /*
        3 phần từ liên tiếp của mảng arrInt là dãy 3 giá trị tăng dần cách đều nhau 4. Ta hiểu được rằng kích thướng kiểu int = 4 byte
     */
    cout << endl;
    for ( int i = 0; i < 3; i++) {
        cin >> arrChar[i] ;
        cout << (int*)&arrChar[i] << " ";
    }
    return 0;
}
/*
        3 phần từ liên tiếp của mảng arrChar là dãy 3 giá trị tăng dần cách đều nhau 1. Ta hiểu được rằng kích thướng kiểu int = 1 byte
 */
