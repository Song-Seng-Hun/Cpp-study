#include <iostream>
using namespace std;

int main() {
    cout << "출락할 행 수를 입력하십시오 : ";
    int row;
    cin >> row;

    for(int i = 0; i < row; i++) {
        for(int j = row; j > i+1; j--) {
            cout << ".";
        }
        for(int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}