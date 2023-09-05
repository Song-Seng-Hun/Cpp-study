#include <iostream>
using namespace std;

int main() {
    string month[12] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };
    int selling[12];

    for (int i = 0; i < 12; i++) {
        cout << month[i] << "의 판매량을 입력하세요 : ";
        cin >> selling[i];
    }

    int total_selling = 0;
    for (int book:selling)
        total_selling += book;

    cout << "연간 총 판매량은" << total_selling << "입니다." << endl;
    return 0;
}