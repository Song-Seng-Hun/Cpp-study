#include <iostream>
using namespace std;

int main(){
    double mile = 0;
    cout << "마일 수를 입력하시오 : ";
    cin >> mile;
    cout << mile << "마일은 " << 1.60934*mile << "킬로미터이다." << endl;
    return 0;
}