#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int choice;
    string name = "Hafiz Abdullah Shakeel";
    int sap = 72405;

    cout << " Name:" << name << endl;
    cout << "Sap Id:" << sap << endl;
    cout << "\n===== Calculator Menu =====\n";
    cout << "1. Add two integers\n";
    cout << "2. Subtract two integers\n";
    cout << "3. Multiply two integers\n";
    cout << "4. Divide two integers\n";
    cout << "5. Add two floating point numbers\n";
    cout << "6. Subtract two floating point numbers\n";
    cout << "7. Multiply two floating point numbers\n";
    cout << "8. Divide two floating point numbers\n";
    cout << "9. Sine\n";
    cout << "10. Cosine\n";
    cout << "11. Tangent\n";
    cout << "12. Square root\n";
    cout << "13. Square\n";
    cout << "14. Cube\n";
    cout << "15. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1: {
            int a, b;
            cout << "Enter two integers: ";
            cin >> a >> b;
            cout << "Result: " << a + b << endl;
            break;
        }
        case 2: {
            int a, b;
            cout << "Enter two integers: ";
            cin >> a >> b;
            cout << "Result: " << a - b << endl;
            break;
        }
        case 3: {
            int a, b;
            cout << "Enter two integers: ";
            cin >> a >> b;
            cout << "Result: " << a * b << endl;
            break;
        }
        case 4: {
            int a, b;
            cout << "Enter two integers: ";
            cin >> a >> b;
            if (b != 0)
                cout << "Result: " << a / b << endl;
            else
                cout << "Error: Division by zero\n";
            break;
        }
        case 5: {
            float a, b;
            cout << "Enter two floating point numbers: ";
            cin >> a >> b;
            cout << "Result: " << a + b << endl;
            break;
        }
        case 6: {
            float a, b;
            cout << "Enter two floating point numbers: ";
            cin >> a >> b;
            cout << "Result: " << a - b << endl;
            break;
        }
        case 7: {
            float a, b;
            cout << "Enter two floating point numbers: ";
            cin >> a >> b;
            cout << "Result: " << a * b << endl;
            break;
        }
        case 8: {
            float a, b;
            cout << "Enter two floating point numbers: ";
            cin >> a >> b;
            if (b != 0.0f)
                cout << "Result: " << a / b << endl;
            else
                cout << "Error: Division by zero\n";
            break;
        }
        case 9: {
            double angle;
            cout << "Enter angle in degrees: ";
            cin >> angle;
            cout << "Sine: " << sin(angle * M_PI / 180.0) << endl;
            break;
        }
        case 10: {
            double angle;
            cout << "Enter angle in degrees: ";
            cin >> angle;
            cout << "Cosine: " << cos(angle * M_PI / 180.0) << endl;
            break;
        }
        case 11: {
            double angle;
            cout << "Enter angle in degrees: ";
            cin >> angle;
            cout << "Tangent: " << tan(angle * M_PI / 180.0) << endl;
            break;
        }
        case 12: {
            double num;
            cout << "Enter number: ";
            cin >> num;
            if (num >= 0)
                cout << "Square root: " << sqrt(num) << endl;
            else
                cout << "Error: Negative input\n";
            break;
        }
        case 13: {
            double num;
            cout << "Enter number: ";
            cin >> num;
            cout << "Square: " << num * num << endl;
            break;
        }
        case 14: {
            double num;
            cout << "Enter number: ";
            cin >> num;
            cout << "Cube: " << num * num * num << endl;
            break;
        }
        case 15:
            cout << "Exiting calculator. Goodbye!\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
    }

    system("pause");
    return 0;
}