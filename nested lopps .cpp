#include<iostream>
using namespace std;

int main()
{
    int s = 72405;
    string name = "Hafiz Abdullah Shakeel";

    cout << "Sap ID: " << s << endl;
    cout << "Name: " << name << endl;


    int row = 1;

    do {
        int col = 1;
        while (col <= 5) {
            cout << "*";
            col++;
        }
        cout << endl;
        row++;
    } while (row <= 5);

    system ("pause");
    return 0;
}