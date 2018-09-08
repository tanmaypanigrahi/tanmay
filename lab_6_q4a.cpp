#include<iostream>
using namespace std;
//function to calculate sum
int min(int a,int b)
{
 if(a<b)
  return a;
 else
  return b;
}
int main()
{
 int n1,n2;
 //accept numbers from user
 cout<<"enter first number"<<endl;
 cin>>n1;
 cout<<"enter second number"<<endl;
 cin>>n2;
 //print max of two number
 cout<<"min of "<<n1<<" and "<<n2<<" is "<<min(n1,n2)<<endl;
 return 0;
}
