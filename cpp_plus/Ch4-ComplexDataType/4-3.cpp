#include <iostream>
#include <cstring>

using namespace std;
char* getname(void);

int main() {
    cout << "퍼스트 네임(이름)을 입력하시오 : ";
    char* first_name = getname();
    cout << "라스트 네임(성)을 읿력하시오 : ";
    char* last_name = getname();
    cout << "하나의 문자열로 만들면 : " << strcat(strcat(last_name, ", "), first_name) << endl;

    return 0;
}

char* getname(void) {
    char tempname[30];
    cin.getline(tempname, 30);
    char* ptrname = new char[strlen(tempname)+1];
    strcpy(ptrname, tempname);
    return ptrname;
}