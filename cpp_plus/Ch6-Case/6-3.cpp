#include <iostream>
using namespace std;

void show_menu(int);

int main() {
    show_menu(1);
    char selection;
    
    while((selection = cin.get())!='q', selection!='Q') {
        switch (selection)
        {
        case 'c' :
        case 'C' :
            cout << "카메라는 눈과 구조가 유사합니다." << endl;
            break;
        
        case 'p' :
        case 'P' :
            cout << "피아노는 대표적인 건반악기입니다." << endl;
            break;

        case 't' :
        case 'T' :
            cout << "단풍나무는 잎이 별처럼 생겼습니다." << endl;
            break;

        case 'g' :
        case 'G' :
            cout << "게임은 디지털 게임과 보드게임으로 나뉩니다." << endl;
            break;

        case 'q' :
        case 'Q' :
            return 0;
            break;

        default :
            show_menu(0);
            break;
        }
    } 
    return 0;
}

void show_menu(int message) {
    string menu;
    if (message == 1)
        menu = "다음 선택 사항 중에서 하나를 선택하십시오.\t(끝내려면 q)\nc) camera\tp) pianist\nt) tree    \tg)game";
    else if (message == 0)
        menu = "c, p, t, g 중에서 하나를 선택하십시오.\t(끝내려면 q) :";
    cout << menu << endl;
    return;
}