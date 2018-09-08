#include<iostream>
using namespace std;
//function to calculate sum
int sum(int a,int b)
{
 int c;
 c=a+b;
 return c;
}
//function to calculate maximum
int max(int a,int b)
{
 if(a<b)
  return b;
 else
  return a;
}
//function to calculate minimum
int min(int a,int b)
{
 if(a<b)
  return a;
 else
  return b;
}
//main function
int main()
{
 int n1,n2,l;
 cout<<"enter first number"<<endl;
 cin>>n1;
 cout<<"enter second number"<<endl;
 cin>>n2;
 cout<<"PRESS 1 TO CALCULATE SUM,PRESS 2 TO CALCULATE MAXIMUM,PRESS 3 TO CALCULATE MINIMUM OF TWO NUMBERS"<<endl;
 cin>>l;
 if (l==1)
 {
  sum(n1,n2);
  //print its sum
  cout<<"sum of two number="<<sum(n1,n2)<<endl;
  }
 else if(l==2)
 {
  //print max of two number
  cout<<"max of "<<n1<<" and "<<n2<<" is "<<max(n1,n2)<<endl;
  }
 else
 {
  //print min of two number
 cout<<"min of "<<n1<<" and "<<n2<<" is "<<min(n1,n2)<<endl;
  }
 return 0;
}
