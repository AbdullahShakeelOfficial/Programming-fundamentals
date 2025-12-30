#include <iostream>
using namespace std;

int main() {
    int ageyears;
    int agemonths, ageDays;
    int nameSAPID;

    cout << "name:" ;
    cout << "SAPID:" ;
    cout << "Enter your age in years: ";
    cin >> ageyears;

    agemonths = ageyears * 12;
    ageDays = ageyears * 365; 

    cout << "Your age in months: " << agemonths << endl;
    cout << "Your age in days: " << ageDays << endl;
    cout << "hafiz abdullah shakeel \n 72405:" << nameSAPID << endl;

    return 0 ;
}