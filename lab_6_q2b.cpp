#include<iostream>
using namespace std;
//function to calculate sum by call by reference
void sum(int a,int b,int &c)
{
 c=a+b;
}
int main()
{
 int n1,n2,add;
 //accept numbers from user
 cout<<"enter first number"<<endl;
 cin>>n1;
 cout<<"enter second number"<<endl;
 cin>>n2;
 //calculate its sum
 sum(n1,n2,add);
 //print its sum
 cout<<"sum of two number="<<add<<endl;
 return 0;
}
