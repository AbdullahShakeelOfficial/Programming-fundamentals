#include <iostream>
#include <string>
using namespace std;

int main() {
    string text = "HelloGuys";
    string sub = text.substr(0, 4);
    cout << "Original: " << text << endl;
    cout << "Substring: " << sub << endl;
    return 0;
}