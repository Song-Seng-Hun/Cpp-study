#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    
    cout << "두 수 중 작은 수를 입력하세요 : ";
    cin >> num1;
    cout << "두 수 중 큰 수를 입력하세요 : ";
    cin >> num2;

    int result = 0;
    for (int i = num1; i < num2+1; i++) {
        result += i;
    }

    cout << "입력한 수를 포함한 사이에 있는 수들의 합은 " << result << "입니다.";

    return 0;
}