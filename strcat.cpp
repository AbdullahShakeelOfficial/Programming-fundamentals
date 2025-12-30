#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[20] = "Hello";
    char str2[] = "Guys";
    strcat(str1, str2);
    cout << "Concatenated String: " << str1 << endl;
    return 0;
}