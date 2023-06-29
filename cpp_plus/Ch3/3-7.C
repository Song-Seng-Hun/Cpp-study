#include <iostream>
using namespace std;

const float K2M = 62.14;
const float G2L = 3.875;

int main()
{
    float lpk;
    cout << "당신의 휘발유 소비량은 100km당 몇L입니까? : ";
    cin >> lpk;
    cout << "당신의 휘발유 소비량은 1갤런당 " << K2M*G2L/lpk << "마일 입니다." << endl;
    return 0;
}