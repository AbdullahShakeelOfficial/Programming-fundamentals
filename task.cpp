#include <iostream>
using namespace std;

int main() {
    int salaries[6];

    cout << "Enter salaries of 6 employees:\n";
    for (int i = 0; i < 6; i++) {
        cout << "Employee " << (i + 1) << ": ";
        cin >> salaries[i];
    }

    cout << "\nSalaries of employees are:\n";
    for (int i = 0; i < 6; i++) {
        cout << "Employee " << (i + 1) << ": " << salaries[i] << endl;
    }

    return 0;
}