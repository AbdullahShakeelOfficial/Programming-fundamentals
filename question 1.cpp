#include<iostream>
using namespace std;
int main()
{
    int numb_1,numb_2,swap;
    int sap_id=72405;
    
    cout<<"Name: Hafiz Abdullah Shakeel"<<endl;
    cout<<"Sap ID:"<<sap_id<<endl;
    cout<<"Enter First number:"<<endl;
    cin>>numb_1;
    cout<<"Enter Second number:"<<endl;
    cin>>numb_2;

    swap=numb_1;
    numb_1=numb_2;
    numb_2=swap;

    cout<<"The Values After Swapping"<<endl;
    cout<<"First Value:"<<numb_1<<endl;
    cout<<"Second Value:"<<numb_2<<endl;

    system("pause");
    return 0;
}