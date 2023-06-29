#include <iostream>
using namespace std;

void showTime(int hour, int minuate);

int main(){
    int hour = 0;
    int minuate = 0;
    cout << "시간 값을 입력하시오: ";
    cin >> hour;
    cout << "분 값을 입력하시오: ";
    cin >> minuate;
    showTime(hour, minuate);
    return 0;
}

void showTime(int hour, int minuate){
    cout << "시각: " << hour << ":" << minuate << endl;
    return;
}