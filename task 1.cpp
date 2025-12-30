#include <iostream>
using namespace std;

int main() {
    int salaries[6];
    string n = "Hafiz Abdullah Shakeel 72405";

    cout<<"Name & Sap ID:" << n << endl;
    cout << "Enter salaries of 6 employees:\n";
    for (int i = 0; i < 6; i++) {
        cout << "Employee " << i + 1 << ": ";
        cin >> salaries[i];
    }

    cout << "\nSalaries using loop:\n";
    for (int i = 0; i < 6; i++) {
        cout << "Employee " << i + 1 << ": " << salaries[i] << endl;
    }

    cout << "\nSalaries without loop:\n";
    cout << "Employee 1: " << salaries[0] << endl;
    cout << "Employee 2: " << salaries[1] << endl;
    cout << "Employee 3: " << salaries[2] << endl;
    cout << "Employee 4: " << salaries[3] << endl;
    cout << "Employee 5: " << salaries[4] << endl;
    cout << "Employee 6: " << salaries[5] << endl;

    system("pause");
    return 0;
}