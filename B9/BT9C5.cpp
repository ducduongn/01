#include <iostream>
#include <cstring>

using namespace std;

char*   truncate ( const char* ch, int n) {
    int l = strlen(ch);
    char* str = new char[n];
    for ( int i = 0; i < n; i++)
        str[i]= ch[i];
    return str;
}

int main() {
    const char* ch = "Hello";
    int n = 3;
    cout <<  truncate(ch,n) << endl;
    delete[]  truncate(ch,n);
    return 0;
}

