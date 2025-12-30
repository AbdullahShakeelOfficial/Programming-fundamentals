#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    int sum, product;
    float average;
    int NAMESAPID = 72405;

    cout << "Enter four numbers: ";
    cin >> a >> b >> c >> d;

    sum = a + b + c + d;
    product = a * b * c * d;
    average = static_cast<float>(sum) / 4;

    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;
    cout << "Product: " << product << endl;
    cout << "Hafiz Abdullah Shakeel\nSAP ID: " << NAMESAPID << endl;

    return 0;
}