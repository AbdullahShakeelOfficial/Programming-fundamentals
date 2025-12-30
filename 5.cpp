#include<iostream>
using namespace std;
int main()
{
    int numb_1;

    string name= "Hafiz Abdullah Shakeel";
    int sap=72405;

    cout<<"Name:"<<name<<endl;
    cout<<"Sap ID:"<<sap<<endl;

    cout<<"Enter First Number:"<<endl;
    cin>>numb_1;

    if(numb_1>0)
    {
        cout<<"The Number is Positive"<<endl;
    }
    if(numb_1<0)
    { 
        cout<<"The Number is Negative"<<endl;
    }
    if(numb_1==0)
    {
        cout<<"The Number is Zero"<<endl;
    }

    system("pause");
    return 0;
}
