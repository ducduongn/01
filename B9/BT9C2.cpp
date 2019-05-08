#include <iostream>
#include <cstring>

using namespace std;

char* delete_char(const char* ch, char c) {
    int l = strlen(ch);
    int cnt = 0;
    int str_size = 0;
    for ( int i = 0; i< l; i++)
        if ( ch[i] == c)
            str_size++;
    char* str = new char[str_size];
    for ( int i = 0; i < l; i++) {
        if (ch[i] != c)
            str[i-cnt] = ch[i];
        else
            cnt++;
    }
    return str;
}

int main() {
    const char* ch = "Welcome";
    char c = 'e';
    cout << delete_char(ch,c);
    return 0;
}
