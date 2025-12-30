#include<iostream>
using namespace std;
int main ()
{
    double temp;
    string name = "Hafiz Abdullah Shakeel";
    int sap = 72405;

    cout << "SAP ID: " << sap << endl;
    cout << "Name: " << name << endl;
    cout << "How much is temperature today ? \n";
    cin >> temp;

   if ( temp > 35)
  {
     cout << "It is hot today";
  }

  else if ( temp >= 25 && temp <= 35)
  {
  cout << " It is pleasent today";
  }

  else if ( temp < 25)
  {
  cout << " It is cool today";
  }

  else
  {
    cout << " Error ";
  }

  system("pause");
  return 0;

}