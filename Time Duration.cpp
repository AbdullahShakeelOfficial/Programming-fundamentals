#include<iostream>
using namespace std;
int main()
{
    double minutes, seconds, hours;
    int sap_id= 72405;

    cout<<"time in hours";
    cin>>hours;

    minutes=hours*60;
    seconds=hours*60*60;

    cout<<"time in minutes:"<<minutes<<endl;
    cout<<"time in seconds:"<<seconds<<endl;
    cout<<"Name: Hafiz Abdullah Shakeel"<<endl;
    cout<<"Sap ID:"<<sap_id<<endl;

    return 0;
}