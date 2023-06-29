#include <iostream>
using namespace std;

int main(){
    float degree;
    float minutes;
    float seconds;
    cout << "위도를 도, 분, 초 단위로 입력하시오 : " << endl;
    cout << "먼저, 도각을 입력하시오 : ";
    cin >> degree;
    cout << "다음에, 분각을 입력하시오 : ";
    cin >> minutes;
    cout << "끝으로, 초각을 입력하시오 : ";
    cin >> seconds;
    float degrees = degree + minutes/60 + seconds/3600;
    cout << degree << "도, " << minutes << "분, " << seconds << "초 = " << degrees << "도" << endl;

}