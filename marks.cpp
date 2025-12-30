#include<iostream>
using namespace std;
int main()
{
    double english,urdu,maths,chemistry,physics;
    double total_marks, percentage;
    int Sap_id= 72405;

    cout<<"Enter english marks"<< endl;
    cin>>english;
    cout<<"Enter urdu marks"<< endl;
    cin>>urdu;
    cout<<"Enter maths marks"<< endl;
    cin>>maths;
    cout<<"Enter chemistry marks"<< endl;
    cin>>chemistry;
    cout<<"Enter physics marks "<< endl;
    cin>>physics;

    total_marks= english+urdu+maths+chemistry+physics;
    // assuming each subject is out of 100 marks
    percentage=(total_marks*100)/500; 

    cout<<"Obtained Percentage:"<<percentage<< endl;
    cout<<"Total Marks Obtained:"<< total_marks<< endl;
    cout<<"Name: Hafiz Abdullah Shakeel"<< endl;
    cout<<" Sap ID:"<< Sap_id<<endl;

    return 0;

}