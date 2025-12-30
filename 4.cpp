#include<iostream>
using namespace std;
int main()

{ 
    int num_1;
    string name= "Hafzi Abdullah Shakeel";
    int sap=72405;

    cout<<"Name:"<<name<<endl;
    cout<<"Sap ID:"<<sap<<endl;
    cout<<"Enter First Number:"<<endl;
    cin>>num_1;

    if(num_1%2==0)
    {
        cout<<"number is even"<<endl;
    }

    if(num_1%2!=0)
    {
        cout<<"number is odd"<<endl;
    }
    
    system("pause");
    return 0;
}
