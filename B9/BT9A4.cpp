#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int* p = new int;
    cout << p << endl;
    {
        int i = 26;
        p = &i;
        cout << p << endl;
    }
    delete p;
    cout << p << endl;
    return 0;
}
/* Kết quả cho in ra:
        0x3d450d0
        0x72e61c5606dc
    Dòng đầu tiên là địa chỉ của con trỏ p khi được khơi tạo trên leap
    Dòng thứ hai cho in ra địa chỉ của p khi trỏ vào vùng nhớ biến địa phương i, nhưng do
    vùng nhớ của biến địa phương bị giải phóng nên con trỏ p trỏ vào vùng nhớ không xác định
    Dòng cout thứ 3 không cho in ra bởi con trỏ p đã bị giải phóng sau lệnh deletes
*/
