#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string filename;
    cout << "파일의 이름을 입력하세요: ";
    cin >> filename;
    
    ifstream inFile;
    inFile.open(filename);
    
    if(!inFile.is_open()) {
        exit(EXIT_FAILURE);
    }

    char text;
    int wordCount = 0;
    while(inFile >> text) {
        wordCount++;
    }

    cout << "총 문자 수는 " << wordCount << "입니다.";

    return 0;
    }