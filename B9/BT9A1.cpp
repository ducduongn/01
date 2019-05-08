#include <iostream>
#include <cstring>

using namespace std;

char* concat(const char* a, const char* b) {
    int n = strlen(a) + strlen(b);
    char* ch = new char[n];
    strcpy(ch, a);
    strcat(ch, b);
    return ch;
}

int main () {
    const char* a = "Hello ";
    const char* b= "World";
    char* ch = concat(a,b);
    cout << ch;
    return 0;
}
