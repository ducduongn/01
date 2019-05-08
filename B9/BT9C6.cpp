#include <iostream>
#include <cstring>

using namespace std;

bool is_palindrome ( const char* ch) {
    int i = 0;
    int l = strlen(ch)-1;
    while (l > i)
    {
        if (ch[i++] != ch[l--])
        {
            return false;
        }
    }
    return true;
}

void print (const char* ch) {
    if (is_palindrome(ch) == true)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}


int main() {
    const char* ch = "Hello";
    const char* ch2 = "LOL";
    print(ch);
    print(ch2);
    return 0;
}


