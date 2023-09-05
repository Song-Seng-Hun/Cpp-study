#include <iostream>
using namespace std;

int main() {
    struct Car {
        string company;
        int year;
    };

    int cnt;
    cout << "몇 대의 차를 목록으로 관리하시겠습니까? ";
    cin >> cnt;
    Car* carlist = new Car[cnt];

    for(int i=0; i<cnt; i++) {
        cout << "자동차 #" << i+1 << endl;
        cout << "제작업체: ";
        cin.ignore();
        getline(cin, carlist[i].company);
        cout << "제작년도: ";
        cin >> carlist[i].year;
    }

    cout << "현재 귀하가 보유하고 있는 자동차 목록은 다음과 같습니다."<< endl;
    for(int i=0; i<cnt; i++)
        cout << carlist[i].year << "년형 " << carlist[i].company << endl;

    return 0;
}