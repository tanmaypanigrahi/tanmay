#include<iostream>
using namespace std;
int main()
{
 //declare variable to store number
 int a;
 //accept value from user
 cout<<"enter a number"<<endl;
 cin>>a;
 if(a%5==0&&a%11==0)
 cout<<"number is divisible by 5 and 11"<<endl;
 else
  cout<<"number is not divisible by 5 and 11"<<endl;
 return 0;
}
