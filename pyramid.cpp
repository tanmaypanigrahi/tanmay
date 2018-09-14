#include<iostream>
using namespace std;
int main()
{
 int a,b,c,d,n;
 cout<<"enter a number"<<endl;
 cin>>n;
 for(a=1;a<=n;a++)
 {
  for(b=a;b<n;b++)
  cout<<" ";
  for(c=1;c<(2*a);c++)
  cout<<"*";
  cout<<endl;
 }
 return 0;
} 
