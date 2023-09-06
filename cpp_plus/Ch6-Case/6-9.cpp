#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ifstream inFile;
    inFile.open("donator.txt");

    if(!inFile.is_open()){
        exit(EXIT_FAILURE);
    }

    cout << "Society for the Presentation of Rightful Influence에 오신 기부자 여러분 환영합니다." << endl;
    int person = 0;
    struct donation {
        string donator;
        double amount;
    };

    if (inFile >> person, person > 0) {
        donation* donation_list = new donation[person];
        
        for(int i = 0; i < person; i++) {
            inFile.ignore();
            getline(inFile, donation_list[i].donator);
            inFile >> donation_list[i].amount;
        }

        cout << endl << "- 고액 기부자 -" << endl << endl;
        int cnt = 0;
        for(int i = 0; i < person; i++) {
            if(donation_list[i].amount >= 10000) {
                cout << donation_list[i].donator << endl;
                cnt++;
            }
        }
        if(cnt <= 0) {
            cout << "기부자가 없습니다.";
        }
        cout << endl << endl;

        cout << endl << "- 소액 기부자 -" << endl << endl;
        cnt = 0;
        for(int i = 0; i < person; i++) {
            if(donation_list[i].amount < 10000) {
                cout << donation_list[i].donator << endl;
                cnt++;
            }
        }
        if(cnt <= 0) {
            cout << "기부자가 없습니다.";
        }

    }
    else{
        cout << "기부자가 없습니다.";
    }

    return 0;
}