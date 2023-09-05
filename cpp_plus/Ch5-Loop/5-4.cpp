#include <iostream>
using namespace std;

int main() {
    int customer_a = 100000;
    int customer_b = 100000;
    int year = 0;

    while (customer_a >= customer_b) {
        customer_a += (100000*0.1);
        customer_b *= 1.05;
        year += 1;

        cout << year << "년 후의 고객a의 투자가치는 " << customer_a-100000 << ", 고객b의 투자가치는 " << customer_b-100000 << "입니다." << endl;
    }

    return 0;
}