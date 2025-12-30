#include <iostream>
using namespace std;

int main() {
    int marks[10], total = 0;
    float average;
    string n = "Hafiz Abdullah Shakeel 72405";

    cout<<"Name & Sap ID:" << n << endl;
    cout << "Enter quiz marks of 10 students:\n";
    for (int i = 0; i < 10; i++) {
        cout << "Student " << i + 1 << ": ";
        cin >> marks[i];
        total += marks[i];
    }

    average = total / 10.0;

    cout << "\nTotal Marks: " << total << endl;
    cout << "Average Marks: " << average << endl;

    system("pause");
    return 0;
}