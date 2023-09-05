#include <iostream>
using namespace std;

const float CM2M = 0.01;

int main(){
    int height = 0;
    cout << "당신의 키는 몇 cm 입니까 : ___\b\b\b";
    cin >> height;
    cout << "당신의 키는 " << height << "cm, " << CM2M*height << "m 입니다." << endl;
    return 0;
}