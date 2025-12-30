#include<iostream>
using namespace std;
int main()
{
    int sub_1,sub_2,sub_3;
    double avg, marks;
    int sap=72405;

    cout<<"Name: Hafiz Abdullah Shakeel"<<endl;
    cout<<"Sap ID:"<<sap<<endl;
    cout<<"Enter the marks of English:"<<endl;
    cin>>sub_1;
    cout<<"Enter the marks of Urdu:"<<endl;
    cin>>sub_2;
    cout<<"Enter the marks of Meth:"<<endl;
    cin>>sub_3;

    marks= sub_1+sub_2+sub_3;
    avg= marks/3;

    if (marks>80)

    {
        cout<<"You are above Standard \n Admission Granted"<<endl;
    }

    system("pause");
    return 0;

}