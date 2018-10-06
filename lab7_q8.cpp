#include<iostream>
#include<cmath>
using namespace std;
int sumnum(int n,int nn)
{
 int d;
 if(n>0)
  {
   d=n%10;
   nn+=d;
   return
    sumnum(n/10,nn);
  }
 else
  return nn;
}
int main()
{
 int n,fs;
 cout<<"enter a number"<<endl;
 cin>>n;
 fs=sumnum(n,0);
 cout<<"sum of digits of "<<n<<" is="<<fs<<endl;
 return 0;
}
 
