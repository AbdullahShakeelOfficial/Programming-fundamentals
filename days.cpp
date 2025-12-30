#include<iostream>
using namespace std;
int main()
{
    int total_number_of_days, weeks, remaining_days;
    int sap_id=72405;
    
    cout<<"Enter Total Number Of Days";
    cin>>total_number_of_days;

    weeks=total_number_of_days/7;
    remaining_days=total_number_of_days%7;

    cout<<"Weeks:"<<weeks<< endl;
    cout<<"Remaining Days:"<<remaining_days<< endl;
    cout<<"Name: Hafiz Abdullah Shakeel"<<endl;
    cout<<"Sap ID:"<<sap_id<<endl;
    
    system("pause");
    return 0;


}