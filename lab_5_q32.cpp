#include<iostream>
#include<cmath>
using namespace std;
int main()
{
 int a,n,p;
 cout<<"enter a number"<<endl;
 cin>>n;
 for(a=1;a>0;a++)
 {
  p=(pow(10,a));
  if(n/p==0)
   break;
 }
 cout<<"first digit is "<<(long)(n/(pow(10,(a-1))))<<endl;
 cout<<"last digit is "<<(n%10)<<endl;
 return 0;
}
