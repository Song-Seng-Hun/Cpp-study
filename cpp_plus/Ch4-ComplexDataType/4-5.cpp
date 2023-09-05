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

    CandyBar snack {"Mocha Munch", 2.3, 350};
    cout << snack.brand << "의 중량은 " << snack.weight << ", 칼로리는 " << snack.cal << "입니다." << endl;
    
    return 0;
}