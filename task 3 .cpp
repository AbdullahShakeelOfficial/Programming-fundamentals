#include<iostream>
using namespace std;
int main ()
{
    int s = 72405;
    string n = "Hafiz Abdullah Shakeel";

    cout << "Name:" << n << endl;
    cout << "SAP ID:" << s << endl;

    for ( int m = 1; m <= 4; m++)
    {
        for ( int n = 1; n <= 4; n++) 
        {
            cout << m << n << "\t";
        } cout << endl;
    } 

    system ("pause");
    return 0;
}