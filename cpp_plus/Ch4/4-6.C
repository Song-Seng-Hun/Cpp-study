#include <iostream>
#include <string>
using namespace std;

int main() {
    struct CandyBar
    {
        string brand;
        float weight;
        int cal;
    };

    CandyBar snacks[2] = { {"Mocha Munch", 2.3, 350}, {"Chupa Choups", 1.2, 280} };
    cout << snacks[0].brand << "의 중량은 " << snacks[0].weight << ", 칼로리는 " << snacks[0].cal << "입니다." << endl;
    cout << snacks[1].brand << "의 중량은 " << snacks[1].weight << ", 칼로리는 " << snacks[1].cal << "입니다." << endl;
    
    return 0;
}