#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string input;
    int consonant = 0;
    int vowel = 0;
    int etc = 0;

    cout << "단어들을 입력하시오 (끝내려면 q): " << endl;
    while(cin >> input, input != "q") {
        if(isalpha(input[0])) {
            switch(char(tolower(input[0]))) {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    vowel += 1;
                    break;
                default:
                    consonant += 1;
                    break;
            }
        }
        else {
            etc++;
        }
    }

    cout << "모음으로 시작하는 단어 수: " << vowel << endl;
    cout << "자음으로 시작하는 단어 수: " << consonant << endl;
    cout << "기타: " << etc << endl;
    return 0;
}