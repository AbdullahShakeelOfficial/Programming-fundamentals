#include<iostream>
using namespace std;
int main()
{
    char score;
    string name = " hafiz abdullah shakeel";
    int sap = 72405;
    cout << " Sap ID:" << sap << endl;
    cout << name << endl;

    cout << "Enter Grade Of Students: (A, B, C, D, F,) \n";
    cin >> score;

    switch (score)
    {
    case 'A':
    case 'a':
    cout << "grade >= 90" << endl;
    break; 

    case 'B':
    case 'b':
    cout << "grade 80 - 89" << endl;
    break; 

    case 'C':
    case 'c':
    cout << "grade 70 - 79" << endl;
    break; 

    case 'D':
    case 'd':
    cout << "grade 60 - 69" << endl;
    break;

    case 'F':
    case 'f':
    cout << "grade is below 60" << endl;
    break; 

    default:
    cout << "Invalid grade is entered" << endl;
    }

    system ("pause");
    return 0;
}