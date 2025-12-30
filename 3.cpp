#include<iostream>
using namespace std;
int main ()
{
    int num_1,num_2;
    int sap=72405;
    string name = "Hafiz Abdullah Shakeel";

    cout<<"Name:"<<name<<endl;
    cout<<"Sap ID:"<<sap<<endl;

    cout<<"Enter your first number"<<endl;
    cin>>num_1;
    cout<<"Enter your second number"<<endl;
    cin>>num_2;

    if(num_2%2==0)
    {
        cout<<"Square Of First Number"<<num_1*num_1<<endl;
    }

    system("pause");
    return 0;

}