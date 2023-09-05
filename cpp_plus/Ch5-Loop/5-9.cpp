#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "영어 단어들을 입력하십시오 (끝내려면 done을 입력) : \n";
    string input_text;
    cin >> input_text;
    int cnt;
    for(cnt=0; input_text != "done"; cnt++) {   
        cout << input_text << " ";
        cin >> input_text;
    }

    cout << endl << "총 " << cnt << "단어가 입력되었습니다.";

    return 0;
}