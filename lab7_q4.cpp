#include<iostream>
using namespace std;
int sum(int n)
{
 if(n==1)
  return 1;
 else
  return n+sum(n-1);
}
int main()
{
 int a;
 cout<<"enter a number"<<endl;
 cin>>a;
 cout<<sum(a)<<endl;
 return 0;
}
