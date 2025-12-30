#include<iostream>
using namespace std;
int main()
{
    int num_1,num_2,num_3,maximum;
    string name= "Hafiz Abdullah Shakeel";
    int sap=72405;

    cout<<"Name:"<<name<<endl;
    cout<<"Sap ID:"<<sap<<endl;

    cout<<"Enter First Number:"<<endl;
    cin>>num_1;
    cout<<"Enter Second Number:"<<endl;
    cin>>num_2;
    cout<<"Enter Third Number:"<<endl;
    cin>>num_3;

    maximum=num_1;

    if(num_2 > maximum)
    {
        maximum= num_2;
    }
    if(num_3>maximum)
    {
        maximum=num_3;
    }

    cout<<"The Maximum number is:"<<maximum<<endl;

    system("pause");
    return 0;

}