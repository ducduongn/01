#include <iostream>
#include <cstring>

using namespace std;

char*  pad_right ( const char* ch, int n) {
    int l = strlen(ch);
    char* str = new char[n];
    for ( int i = 0; i < n-l; i++)
        str[i]= '_';
    for ( int i = n-l; i < n; i++) {
        str[i] = ch[i - (n - l)];
    }
    return str;
}

int main() {
    const char* ch = "Hello";
    int n = 8;
    cout << pad_right(ch,n) << endl;
    delete[] pad_right(ch,n);
    return 0;
}

