#include<iostream>
using namespace std;
int main()
{
 //declare variable to store number
 float a;
 //accept value from user
 cout<<"enter a number"<<endl;
 cin>>a;
 //check and print the number is whether positive negative or zero
 if(a>0)
 cout<<"number is positive"<<endl;
 else if(a<0)
  cout<<"number is negative"<<endl;
 else
  cout<<"number is zero"<<endl;
 return 0;
}
