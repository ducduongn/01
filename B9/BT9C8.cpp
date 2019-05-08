#include <iostream>
#include <cstring>

using namespace std;

char*  trim_right ( const char* ch) {
    int l = strlen(ch);
    int n = 0;
    for ( int i = 0; i< l; i++) {
        if (ch[i] == '_')
            n++;
    }
    char* str = new char[n];
    for ( int i = 0; i < l-n; i++) {
        str[i] = ch[i];
    }
    return str;
}

int main() {
    const char* ch = "Hello___";
    cout << trim_right(ch) << endl;
    delete trim_right(ch);
    return 0;
}

