#include<iostream>
#include<cmath>
using namespace std;
int lcm(int a,int b,int i)
{
 if(i<(a*b))
 {
  if((a*b)%i==0)
   return i;
  else
  {
   cout<<i<<endl;
   cout<<a<<endl;
   cout<<b<<endl;
   return lcm(a,b,i+=1);
  }
 } 
 else
  return a*b;
}
int large(int a,int b)
{
 if(a<b)
  return b;
 else
  return a;
}
int main()
{
 int a,b,s;
 s=large(a,b);
 cout<<"enter the first number"<<endl;
 cin>>a;
 cout<<"enter the second number"<<endl;
 cin>>b;
 cout<<"L.C.M of "<<a<<" and "<<b<<"="<<lcm(a,b,s)<<endl;
 return 0;
}
 

