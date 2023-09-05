#include <iostream>
using namespace std;

int main() {
    string month[12] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };
    int selling[3][12];
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 12; j++) {
            cout << i+1 << "년도 " << month[j] << "의 판매량을 입력하세요 : ";
            cin >> selling[i][j];
        }
    }

    int total_selling[3] = {0, 0, 0};
    for(int i = 0; i < 3; i++) {
        for(int book:selling[i])
            total_selling[i] += book;
        cout << i+1 << "년도 총 판매량은" << total_selling[i] << "입니다." << endl;
    }

    cout << "2년째 누적 판매량은 " << total_selling[0]+total_selling[1] << "입니다." << endl;
    cout << "3년째 누적 판매량은 " << total_selling[0]+total_selling[1]+total_selling[2] << "입니다." << endl;
    return 0;
}