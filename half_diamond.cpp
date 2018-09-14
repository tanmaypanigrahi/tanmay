#include<iostream>
using namespace std;
int main()
{
 int a,b,c,d,n;
 cout<<"enter a number"<<endl;
 cin>>n;
 for(a=1;a<=n;a++)
 {
  for(b=1;b<=a;b++)
  cout<<"*";
  cout<<endl;
 }
 for(a=1;a<n;a++)
 {
  for(b=n-1;b>=a;b--)
  cout<<"*";
  cout<<endl;
 }
 return 0;
}
