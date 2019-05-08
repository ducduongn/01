#include <iostream>
#include <cstring>

using namespace std;

char*  trim_left ( const char* ch) {
    int l = strlen(ch);
    int n = 0;
    for ( int i = 0; i< l; i++) {
        if (ch[i] == '_')
            n++;
    }
    char* str = new char[n];
    for ( int i = n; i < l; i++) {
        str[i-n] = ch[i];
    }
    return str;
}

int main() {
    const char* ch = "___Hello";
    cout << trim_left(ch) << endl;
    delete trim_left(ch);
    return 0;
}
