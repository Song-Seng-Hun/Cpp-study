#include <iostream>
using namespace std;

int main() {
    int tbarf = 0;
    int tax = 0;
    cout << "소득을 입력하세요 :";
    while(cin >> tbarf, tbarf >= 0) {
        if(tbarf >= 35000) {
            tax += (2 * (tbarf - 35000)) / 10;
            tbarf = 35000;
            cout<<tax;
        }
        if(tbarf >= 15000) {
            tax += (15 * (tbarf - 15000)) / 100;
            tbarf = 15000;
            cout<<tax;
        }
        if(tbarf >= 5000) {
            tax += (tbarf - 5000) / 10;
            tbarf = 5000;
            cout<<tax;
        }
        if(tbarf < 0) {
            break;
        }
        cout << "내야할 세금은 " << tax << "트바프 입니다."<<endl;
        tax = tbarf = 0;
        cout << "소득을 입력하세요 :";
    }

    return 0;
}