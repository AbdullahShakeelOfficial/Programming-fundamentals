#include<iostream>
using namespace std;
int main ()
{
    int s = 72405;
    string n = " Hafiz Abdullah Shakeel";

    cout << " Name :" << n << endl;
    cout << " SAP ID :" << s << endl;
    
    for ( int i = 5; i>=1 ; i--)
    { 
        for ( int l = 1; l<=i ; l++)
        {
            cout << "*";
        }
        cout << endl;
    } 

    system ("pause");
    return 0;
}