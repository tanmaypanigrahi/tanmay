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
  if (a==1||a==n)
  {
   for(c=1;c<=(2*a-1);c++)
   cout<<"*";
   cout<<endl;
  }
  else
  {
   for(c=1;c<=(2*a);c++)
   {
    if (c==1||c==(2*a))
     cout<<"*";
    else
     cout<<" ";
   }
   cout<<endl;
  }
 }
 return 0;
} 
