#include<iostream>
#include<cmath>
using namespace std;
int main()
{
 int a,n,nd,p,nm;
 n=nm;
 cout<<"enter a number"<<endl;
 cin>>n;
 for(a=1;a>0;a++)
 {
  p=(pow(10,a));
  if(n/p==0)
   break;
 }
 cout<<"Number of digits="<<(a)<<endl;
 return 0;
}
