#include<iostream>
using namespace std;
int main ()
{ 
    float num, nub;
    char all;
    string name = "hafiz abdullah shakeel";
    int sap = 72405;

    cout << " Name: " << name << endl;
    cout << " Sap ID:" << sap << endl;

    cout << "enter first number: \n";
    cin >> num;

    cout << " enter second number: \n";
    cin >> nub;

    cout<< " enter the desired operator sign: \n";
    cin>>all;

    switch ( all)

    { 
        case '+':
        cout << "Addition: \n" << num+nub ;
        break;

        case '-':
        cout << "Subtraction: \n" << num-nub ;
        break;

        case '/':
        cout << "Division: \n" << num/nub ;
        break;

        case '*':
        cout << "Multiplication: \n" << num*nub ;
        break;

       default:
       cout << "Invalid Operator" << endl;

    } 

    system ("pause");
    return 0;


}