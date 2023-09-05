#include <iostream>
using namespace std;

int main() {
    long long world;
    long long america;

    cout << "세계 인구수를 입력하시오 : ";
    cin >> world;
    cout << "미국의 인구수를 입력하시오 : ";
    cin >> america;
    cout << "세계 인구수에서 미국이 차지하는 비중은 " << float(america)/float(world)*100 << "%이다." << endl;
    return 0;
}