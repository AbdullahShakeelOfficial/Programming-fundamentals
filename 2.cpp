#include <iostream>
using namespace std;

void addTwoNumber();
void findMaxMin();
int main() {
 addTwoNumber();
 cout<<endl<<endl;
 findMaxMin();
 return 0;
}

void addTwoNumber()
{ int first,second;
 cout<<"Enter first vlaue:";
 cin>>first;
 cout<<"Enter second vlaue:";
 cin>>second;
 cout<<"Sum of two numbers is:"<<(first+second);
}
void findMaxMin()
{
 int A[4];
 for(int i=0;i<4;i++)
 { cout<<"Enter vlaue "<<i+1<<":";
 cin>>A[i];
 }
 int max=A[0];
 int min=A[0];
 for(int i=0;i<4;i++)
 { if(A[i]>max)
 max=A[i];
 if(A[i]<min)
 min=A[i];
 }
 cout<<"\nThe max value out of 4 is:"<<max;
 cout<<"\nThe min value out of 4 is:"<<min;
}