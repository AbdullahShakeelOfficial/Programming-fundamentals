#include<iostream>
using namespace std;
int main()
{
    double volume,length,width,height;
    int Sap_id= 72405;

    cout<<"Enter length of the cube:" <<endl;
    cin>>length;
    cout<<"Enter width of the cube:" <<endl;
    cin>>width;
    cout<<"Enter height of the cube:" <<endl;
    cin>>height;

    volume= length*width*height;

    cout<<"Volume of the Cube:"<<volume<< endl;
    cout<<"Name: Hafiz Abdullah Shakeel"<< endl;
    cout<<"Sap_id:"<<Sap_id<<endl;

    return 0;
}