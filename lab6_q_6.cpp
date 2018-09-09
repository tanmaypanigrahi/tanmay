#include<iostream>
using namespace std;
//function to calculate sum of even numbers
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
//function to calculate sum of odd numbers
int sumodd(int n1,int n2)
{
 int a,so;
 for(a=n1;a<=n2;a++)
 {
  if(a%2!=0)
  so+=a;
  else
  continue;
 }
  return so;
}
//function to calculate sum of square even numbers
int sumsqeven(int n1,int n2)
{
 int a,sq,ssq;
 a=n1;
 while(a<=n2)
 {
  a++;
  if(a%2==0)
  {
   sq=a*a;
   ssq+=a;
  }
  else
   continue;
 }
}
//function to calculate sum of squre of odd numbers
int sumsqodd(int n1,int n2)
{
 int a,sq,ssq;
 a=n1;
 while(a<=n2)
 {
  a++;
  if(a%2!=0)
  {
   sq=a*a;
   ssq+=a;
  }
  else
   continue;
 }
}
//main function
int main()
{
 int sumEven,sumOdd,sumsquareEven,sumsquareOdd,n1,n2;
 cout<<"enter starting number"<<endl;
 cin>>n1;
 cout<<"enter ending number"<<endl;
 cin>>n2;
 sumEven=sumeven(n1,n2);
 sumOdd=sumodd(n1,n2);
 sumsquareEven=sumsqeven(n1,n2);
 sumsquareOdd=sumsqodd(n1,n2);
 cout<<"sum of even numbers between "<<n1<<" and "<<n2<<"="<<sumEven<<endl;
 cout<<"sum of odd numbers between "<<n1<<" and "<<n2<<"="<<sumOdd<<endl;
 cout<<"sum of squares of even numbers between "<<n1<<" and "<<n2<<"="<<sumsquareEven<<endl;
 cout<<"sum of squares of odd numbers between "<<n1<<" and "<<n2<<"="<<sumsquareOdd<<endl;
 return 0;
}
