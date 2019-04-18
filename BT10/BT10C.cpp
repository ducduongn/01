#include <iostream>
#include <cstring>

using namespace std;

struct String {
    int n;
    char* ch = new char[n] ;

    String( const char* s) {
        n = strlen(s);
        for ( int i = 0; i < strlen(s) ; i++)
            *(ch + i) = s[i];
    }
    void destruct () {
        delete [] ch;
    }
    void print() {
        cout << ch << endl;
    }

    void append ( const char* s) {
        int l = strlen(s);
        char* ch_temp = ch;

        ch = new char [ n + l] ;

        for ( int i = 0; i < n; i++)
            *(ch + i) = * ( ch_temp + i);
        delete [] ch_temp;
        for ( int i = n; i < n + l; i++) {
            *(ch + i) = * (s + i - n  );
        }
    }

};

int main () {
    String greeting("Hi");
    greeting.append(" there!");
    greeting.print();

    greeting.destruct() ;
    return 0;
}
