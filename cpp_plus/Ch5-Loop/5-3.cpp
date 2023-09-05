#include <iostream>
using namespace std;

int main() {
    int num;
    int sum = 0;
    cout << "수를 입력하세요 : ";
    while(cin >> num) {
        if(num == 0)
            break;
        sum += num;
        cout << "수를 입력하세요 : ";
    }
    cout << "총 합은 " << sum << "입니다";
    return 0;
}