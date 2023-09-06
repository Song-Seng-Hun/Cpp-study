#include <iostream>
#include <cstring>
using namespace std;

void show_menu(int);

int main() {
    // Benevolent Order of Programmers 회원 구조체
    struct bop {
        char fullname[20];
        char title[20];
        char bopname[20];
        int preference; // 0 = fullname, 1 = title, 2 = bopname
    };

    bop *boplist = new bop[5];
    strcpy(boplist[0].fullname, "Wimp Macho");
    strcpy(boplist[0].title, "Senior Programmer");
    strcpy(boplist[0].bopname, "ALPHA");
    boplist[0].preference = 0;

    strcpy(boplist[1].fullname, "Raki Rhodes");
    strcpy(boplist[1].title, "Junior Programmer");
    strcpy(boplist[1].bopname, "BETA");
    boplist[1].preference = 1;

    strcpy(boplist[2].fullname, "Clia Laiter");
    strcpy(boplist[2].title, "AI Researcher");
    strcpy(boplist[2].bopname, "MIPS");
    boplist[2].preference = 2;

    strcpy(boplist[3].fullname, "Hoppy Hipman");
    strcpy(boplist[3].title, "Analyst Trainee");
    strcpy(boplist[3].bopname, "GAMMA");
    boplist[3].preference = 1;

    strcpy(boplist[4].fullname, "Pat Hand");
    strcpy(boplist[4].title, "Student");
    strcpy(boplist[4].bopname, "LOOPY");
    boplist[4].preference = 2;

    show_menu(1);
    char selection;
    while((selection = cin.get())!='q') {
        switch (selection)
        {
        case 'a':
            for(int i = 0; i < 5; i++)
                cout << boplist[i].fullname << endl;
            show_menu(0);
            break;

        case 'b':
            for(int i = 0; i < 5; i++)
                cout << boplist[i].title << endl;
            show_menu(0);
            break;

        case 'c':
            for(int i = 0; i < 5; i++)
                cout << boplist[i].bopname << endl;
            show_menu(0);
            break;

        case 'd':
            for(int i = 0; i < 5; i++)
                switch(boplist[i].preference) {
                    case 0:
                        cout << boplist[i].fullname << endl;
                        break;
                    case 1:
                        cout << boplist[i].title << endl;
                        break;
                    case 2:
                        cout << boplist[i].bopname << endl;
                        break;
                }
            show_menu(0);
            break;
        
        default:
            break;
        }
    }
    cout << "프로그램을 종료합니다.";
    return 0;
}

void show_menu(int selection) {
    switch(selection) {
        case 1:
            cout << "Benevolent Order of Programmers\na. 실명으로 열람\tb. 직함으로 열람\nc. BOP 아이디로 열람\td. 회원이 지정한 것으로 열람\nq. 종료" << endl;
        case 0:
            cout << "원하는 것을 선택하십시오: ";
            break;
    }
}