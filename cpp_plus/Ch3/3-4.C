#include <iostream>
using namespace std;
const int D2H = 24;
const int H2M = 60;
const int M2S = 60;

int main() {
    long secs = 31600000;
    cout << "초 수를 입력하시오 : ";
    cin >> secs;
    int sec = secs%M2S;
    long mins = secs/M2S;
    int min = mins%H2M;
    long hours = mins/H2M;
    int hour = hours%D2H;
    int day = hours/D2H;
    cout << secs << "초 = " << day << "일, " << hour << "시간, " << min << "분, " << sec << "초" << endl;
    return 0;
}