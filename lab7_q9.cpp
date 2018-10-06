#include<iostream>
#include<cmath>
using namespace std;
int fac(int n,int fn)
{
 if(n>0)
 {
  fn*=n;
  return
   fac(n-1,fn);
 }
 else
  return fn;
}
int main()
{
 int n;
 cout<<"enter a number"<<endl;
 cin>>n;
 cout<<"factorial of "<<n<<"="<<fac(n,1)<<endl;
 return 0;
}
  
