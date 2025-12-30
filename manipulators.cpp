#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    string name = "hafiz Abdullah Shakeel";
    int sap = 72405;
    double value = 123.456789;
    
    cout << " Sap ID: " << sap << endl;
    cout << setfill ('*') << setw (25) << name << endl;
    cout << setfill ('@') << setw (20) << name << endl;
    cout << setfill ('=') << setw (10) << name << endl;
    cout << endl << "Using Setprecision:" << endl;
    cout << fixed << setprecision (2);
    cout <<" Value with two decimal places: " << value << endl;
    cout << fixed << setprecision (4);
    cout <<" Value with four decimal places: " << value << endl;

    system("pause");
    return 0;
}