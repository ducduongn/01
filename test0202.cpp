#include <iostream>

 using namespace std;

 long Fraction(int n) {
    if ( n > 1) return ( n* Fraction(n-1) );
    else return 1;
 }
 int main() {
    int n;
    cin >> n;
    long value = Fraction(n);
    cout << value << " at: " << &value;
    return 0;
 }
