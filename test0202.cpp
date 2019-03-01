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
/* 
Dãy giá trị giảm dần cách đều nhau mootj khoảng là 48. Ta tính được kích thước 1 stack frame cho hàm là 48 bytes
*/
