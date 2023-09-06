#include <iostream>
#include <array>
#include <cctype>
using namespace std;

int main() {
    array<double, 10> donates = {0};
    double donation;
    int idx = 0;
    cout << "기부금 입력 시작 : " << endl;
    while((idx < 10) && (cin >> donation)) {
        donates[idx++] = donation;
        cout << donation << endl;
    }

    double average = 0;
    for(double donate:donates)
        average += donate; 
    average /= idx;

    int large = 0;
    for(double donate:donates){
        if(donate > average)
            large++;
    }

    cout << "기부금의 평균은 " << average << ", 평균보다 큰 기부금은 " << large << "개 있습니다." << endl;
    return 0;
}