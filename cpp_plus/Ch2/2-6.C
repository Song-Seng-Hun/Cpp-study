#include <iostream>
using namespace std;

int main(){
    double lightspeed = 0;
    cout << "광년 수를 입력하고 Enter 키를 누르십시오: ";
    cin >> lightspeed;
    cout << lightspeed << " 광년은 " << 63240*lightspeed << " 천문 단위입니다." << endl;
    return 0;
}