#include <iostream>
using namespace std;

int main() {
    float km;
    float l;
    cout << "당신이 주행한 거리는 몇 km입니까? : ";
    cin >> km;
    cout << "당신이 소비한 휘발유는 몇 L입니까? : ";
    cin >> l;
    cout << "당신이 소비한 휘발유는 100km당 " << l/km*100 << "입니다." << endl;
    return 0;
}