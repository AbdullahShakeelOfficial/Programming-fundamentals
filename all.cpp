#include <iostream>
using namespace std;

int main() {
    int choice;
    char ch;
    int num, limit;
    string n = "Hafiz Abdullah Shakeel 72405";

    do {
        cout<<"Name:"<<n<<endl;
        cout << "\n===== MENU =====\n";
        cout << "1. Check whether a number is Even or Odd\n";
        cout << "2. Check whether a number is Prime or Not\n";
        cout << "3. Check whether a character is Uppercase or Lowercase\n";
        cout << "4. Print Reverse Multiplication Table of a number\n";
        cout << "5. Print Descending Right-Angled Triangle pattern\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                cout << "Enter a number: ";
                cin >> num;
                if (num % 2 == 0)
                    cout << num << " is Even.\n";
                else
                    cout << num << " is Odd.\n";
                break;
            }

            case 2: {
                cout << "Enter a number: ";
                cin >> num;
                bool isPrime = true;

                if (num <= 1) {
                    isPrime = false;
                } else {
                    for (int i = 2; i <= num / 2; i++) {
                        if (num % i == 0) {
                            isPrime = false;
                            break;
                        }
                    }
                }

                if (isPrime)
                    cout << num << " is Prime.\n";
                else
                    cout << num << " is Not Prime.\n";
                break;
            }

            case 3: {
                cout << "Enter a single character: ";
                cin >> ch;
                if (ch >= 'A' && ch <= 'Z')
                    cout << ch << " is Uppercase.\n";
                else if (ch >= 'a' && ch <= 'z')
                    cout << ch << " is Lowercase.\n";
                else
                    cout << ch << " is not an alphabet.\n";
                break;
            }

            case 4: {
                cout << "Enter a number: ";
                cin >> num;
                cout << "Enter the limit: ";
                cin >> limit;

                cout << "Reverse Multiplication Table of " << num << ":\n";
                for (int i = limit; i >= 1; i--) {
                    cout << num << " x " << i << " = " << num * i << endl;
                }
                break;
            }

            case 5: {
                cout << "Enter the number of rows: ";
                cin >> num;

                cout << "Descending Right-Angled Triangle:\n";
                for (int i = num; i >= 1; i--) {
                    for (int j = 1; j <= i; j++) {
                        cout << "* ";
                    }
                    cout << endl;
                }
                break;
            }

            case 6: {
                cout << "Exiting program...\n";
                break;
            }

            default:
                cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 6);

    return 0;
}