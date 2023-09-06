#include <iostream>
#include <cctype>
using namespace std;

int main() {
    cout << "키보드 입력 시작 : " << endl;
    char input;
    while((input = cin.get()) != '@') {
        if(islower(input)) {
            cout << char(toupper(input));
        }
        else if(isupper(input)) {
            cout << char(tolower(input));
        }
    }

    return 0;
}