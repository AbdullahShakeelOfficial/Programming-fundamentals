#include<iostream>
using namespace std;
int main ()
{
    int n;
    int s = 72405;
    string name = "Hafiz Abdullah Shakeel";

    cout << "Sap ID:" << s << endl;
    cout << "Name:" << name << endl;
    do
    {
        cout << "Enter A Number:\n";
        cin >> n;
        if (n!=-1)
        {
             cout << "Entered Number:" << n << endl;
        }
    } while (n!=-1);
    cout << "Program limit -1" << endl;


     system ("pause");
    return 0;
}