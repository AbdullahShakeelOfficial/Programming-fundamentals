#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[20] = "Hello";
    char str2[] = "Guys";
    strncat(str1, str2, 3);
    cout << "Result after strncat: " << str1 << endl;
    return 0;
}