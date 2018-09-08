#include<iostream>
using namespace std;
//function to calculate maximum by call by reference
void max(int a,int b,int &c)
{
 if(a>b)
  c=a;
 else
  c=b;
}
 //main function
int main()
{
 int n1,n2,maxm;
 //accept numbers from user
 cout<<"enter first number"<<endl;
 cin>>n1;
 cout<<"enter second number"<<endl;
 cin>>n2;
 //determine maximum of two numbers
 max(n1,n2,maxm);
 //print the maximum number
 cout<<"maximum of two number="<<maxm<<endl;
 return 0;
}
