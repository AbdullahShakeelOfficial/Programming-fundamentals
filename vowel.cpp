#include<iostream>
using namespace std;
int main ()
{
    char vowel;
    string name = "Hafiz Abdullah Shakeel";
    int sap = 72405;

    cout << "Sap ID:" << sap << endl;

    cout << " Enter a Vowel:" << endl;
    cin >> vowel;

    if ( vowel =='A'|| vowel =='a'|| vowel =='E'|| vowel =='e'||
        vowel=='I'|| vowel =='i'|| vowel =='O'|| vowel =='o'|| vowel =='U'|| vowel =='u')
    {
        cout << " Entered charater is Vowel" << endl;
    }
    else
    { 
        cout << "Entered charater is not Vowel" << endl;
    }

    system("pause");
    return 0;

}