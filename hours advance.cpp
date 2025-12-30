#include <iostream>
using namespace std;

int main() {
    int totalSeconds;
    string name = "Hafiz Abdullah Shakeel";
    int sap = 72405;

    cout << " Name:" << name << endl;
    cout << "Sap Id:" << sap << endl;
    cout << "Enter total seconds: ";
    cin >> totalSeconds;

    int hours = totalSeconds / 3600;
    int remainingSeconds = totalSeconds % 3600;
    int minutes = remainingSeconds / 60;
    int seconds = remainingSeconds % 60;

    cout << hours << " hrs " << minutes << " mins " << seconds << " secs" << endl;

    system("pause");
    return 0;
}