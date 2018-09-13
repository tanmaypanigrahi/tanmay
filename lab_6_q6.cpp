#include<iostream>
using namespace std;
int sumeven(int n1,int n2)
{
 int a,se;
 for(a=n1;a<=n2;a++)
 {
  if(a%2==0)
   se+=a;
  else
   continue;
 }
  return se;
}
int sumodd(int n1,int n2)
{
 int a,so;
 for(a=n1;a<=n2;a++)
 {
  if(a%2==1)
   so+=a;
  else
   continue;
 }
  return so;
}
int sumsqeven(int n1,int n2)
{
 int a,sq,ssq;
 a=n1;
 while(a<=n2)
 {
  ++a;
  if(a%2==0)
  {
   sq=a*a;
   ssq+=sq;
  }
  else
   continue;
  return ssq;
 }
}
int sumsqodd(int n1,int n2)
{
 int a,sq,ssq;
 a=n1;
 while(a<=n2)
 {
  ++a;
  if(a%2==1)
  {
   sq=a*a;
   ssq+=sq;
  }
  else
   continue;
  return ssq;
 }
}
int main()
{
 int sumEven,sumOdd,sumsqEven,sumsqOdd;
 int n1,n2;
 cout<<"enter the starting number"<<endl;
 cin>>n1;
 cout<<"enter the ending number"<<endl;
 cin>>n2;
 sumEven=sumeven(n1,n2);
 sumOdd=sumodd(n1,n2);
 sumsqEven=sumsqeven(n1,n2);
 sumsqOdd=sumsqeven(n1,n2);
 cout<<"Sum of even numbers between "<<n1<<" and "<<n2<<"="<<sumEven<<endl;
 cout<<"Sum of odd numbers between "<<n1<<" and "<<n2<<"="<<sumOdd<<endl;
 cout<<"Sum of squares of even numbers between "<<n1<<" and "<<n2<<"="<<sumsqEven<<endl;
 cout<<"Sum of squares of odd numbers between "<<n1<<" and "<<n2<<"="<<sumsqOdd<<endl;
 return 0;
}

