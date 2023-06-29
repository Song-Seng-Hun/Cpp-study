#include <iostream>
using namespace std;

int main(){
    double celsius  = 0;
    cout << "섭씨 온도를 입력하고 Enter 키를 누르십시오: ";
    cin >> celsius;
    cout << "섭씨" << celsius << "도는 화씨로 " << 1.8*celsius+32.0 << "도입니다." << endl;
    return 0;
}