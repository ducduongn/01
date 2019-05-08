#include <iostream>
#include <cstring>

char* reverse( const char* &str) {
    int l = strlen(str) ;
    char* ch = new char[l];
    for ( int i = 0; i < l; i++)
        ch[i] = str[l-i-1];
    return ch;

}

using namespace std;



int main () {
    const char* str = "Hello";
    cout << reverse(str);
    return 0;
}
