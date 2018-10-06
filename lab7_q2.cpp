#include<iostream>
using namespace std;
int print(int i,int n)
{
 cout<<i<<endl;
 i++;
 if(i==n+1)
  return 1;
 else
  print(i,n);
}
int main()
{
 int a,b=1;
 cout<<"enter a number";
 cin>>a;
 print(b,a);
 return 0;
}
