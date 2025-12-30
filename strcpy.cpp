#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char source[] = "C++ Programming";
    char destination[50];
    strcpy(destination, source);
    cout << "Copied String: " << destination << endl;
    return 0;
}