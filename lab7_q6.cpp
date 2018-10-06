#include<iostream>
using namespace std;
int revnum(int n)
{
 cout<<n%10;
 if(n/10==0)
  return 1;
 else
  revnum((n/10));
}
int main()
{
 int n;
 cout<<"enter a number"<<endl;
 cin>>n;
 revnum(n);
 return 0;
}
