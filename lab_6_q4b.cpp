#include<iostream>
using namespace std;
//function to calculate minimum by call by reference
void min(int a,int b,int &c)
{
 if(a>b)
  c=b;
 else
  c=a;
}
//main function
int main()
{
 int n1,n2,minm;
 //accept numbers from user
 cout<<"enter first number"<<endl;
 cin>>n1;
 cout<<"enter second number"<<endl;
 cin>>n2;
 //calculate its minimum
 min(n1,n2,minm);
 //print the minimum number
 cout<<"minimum of two number="<<minm<<endl;
 return 0;
}
