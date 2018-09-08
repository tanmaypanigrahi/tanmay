#include<iostream>
using namespace std;
//function to calculate sum by call by value
int sum(int a,int b)
{
 int c;
 c=a+b;
 return c;
}
//main function to accept two number from user and print sum
int main()
{
 int n1,n2;
 //accept numbers from user
 cout<<"enter first number"<<endl;
 cin>>n1;
 cout<<"enter second number"<<endl;
 cin>>n2;
 //calculate its sum
 sum(n1,n2);
 //print its sum
 cout<<"sum of two number="<<sum(n1,n2)<<endl;
 return 0;
}
