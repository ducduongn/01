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
    cout << endl;
    for ( int i = 0; i < 3; i++) {
        cin >> arrChar[i] ;
        ptr = &arrChar[i];
        cout << &ptr << " ";
    }
    return 0;
}
