#include <iostream>
#include <array>
using namespace std;

int main() {
    array<float, 3> results;
    cout << "첫 번째 40m 달리기 결과를 입력해주세요 : ";
    cin >> results[0];
    cout << "두 번째 40m 달리기 결과를 입력해주세요 : ";
    cin >> results[1];
    cout << "세 번째 40m 달리기 결과를 입력해주세요 : ";
    cin >> results[2];

    cout << "총 " << results.size() << "회의 40m 달리기 결과 평균은 " << (results[0]+results[1]+results[2])/3 << "입니다.";
    return 0;    
}