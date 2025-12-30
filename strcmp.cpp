#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[] = "Apple";
    char str2[] = "Banana";
    int result = strcmp(str1, str2);
    if(result == 0)
        cout << "Strings are equal" << endl;
    else if(result < 0)
        cout << str1 << " comes before " << str2 << endl;
    else
        cout << str1 << " comes after " << str2 << endl;
    return 0;
}