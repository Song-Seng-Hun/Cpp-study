#include <iostream>
using namespace std;
const int F2I = 12;
const float I2M = 0.0254;
const float K2P = 2.2;

int main(){
    float feet;
    float inch;
    float pound;
    
    cout << "당신의 키는 몇 피트 몇 인치입니까? : ";
    cin >> feet;
    cin >> inch;
    inch = F2I*feet + inch;
    float m = I2M * inch;
    cout << "당신의 체중은 몇 파운드 입니까? : ";
    cin >> pound;
    float kg = pound/K2P;
    float bmi = kg/m/m;
    cout << "당신의 BMI는 " << bmi << "입니다" << endl;

    return 0;
}