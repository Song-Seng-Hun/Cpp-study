#include <iostream>
using namespace std;

int main() {
    struct Pizza {
        string company;
        float diameter;
        float weight;
    };

    Pizza* pizza = new Pizza;

    cout << "피자회사의 이름을 입력하세요 : ";
    getline(cin, pizza->company);
    cout << "피자회사의 이름은 " << pizza->company;
    cout << endl << "피자의 지름을 입력하세요 : ";
    cin >> pizza->diameter;
    cout << "피자의 지름은 " << pizza->diameter << "m";
    cout << endl << "피자의 무게를 입력하세요 : ";
    cin >> pizza->weight;
    cout << "피자의 무게는 " << pizza->weight << "kg";

    return 0;
}