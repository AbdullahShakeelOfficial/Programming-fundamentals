#include <iostream>
using namespace std;

int main()
{
    int totalStudents;
    double feePerStudent, totalFee;
    int SAP_ID = 72405;

    cout << "Enter total number of students: ";
    cin >> totalStudents;

    cout << "Enter fee per student: ";
    cin >> feePerStudent;

    totalFee = totalStudents * feePerStudent;

    cout << "\nTotal fee collected from the class: " << totalFee << endl;
    cout << "Name: Hafiz Abdullah Shakeel" << endl;
    cout << "SAP ID: " << SAP_ID << endl;

    return 0;
}