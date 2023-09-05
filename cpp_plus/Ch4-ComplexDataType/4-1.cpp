#include <iostream>
#include <string>
using namespace std;

int main(){
    string first_name;
    string last_name;
    char score;
    int age;

    cout << "영문 퍼스트 네임 (이름) : ";
    getline(cin, first_name);
    cout << "영문 라스트 네임 (성) : ";
    cin >> last_name;
    cout << "학생이 원하는 학점 : ";
    cin >> score;
    cout << "나이 : ";
    cin >> age;
    cout << "성명 : " << first_name + ", " + last_name << endl;
    cout << "학점 : " << char(score + 1) << endl;
    cout << "나이 : " << age << endl;
    return 0;
}