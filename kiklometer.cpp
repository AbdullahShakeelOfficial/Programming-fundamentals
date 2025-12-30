#include <iostream>
using namespace std;

int main()
{
    double miles, kilometers;
    const double MILES_TO_KM = 1.069;
    int SAP_ID = 72405;

    cout << "Enter distance in miles: ";
    cin >> miles;

    kilometers = miles * MILES_TO_KM;

    cout << "Distance in kilometers: " << kilometers << " km" << endl;
    cout << "SAP ID: " << SAP_ID << endl;
    cout << "Name: Hafiz Abdullah Shakeel" << endl;

    return 0;
}