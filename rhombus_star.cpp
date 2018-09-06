#include<iostream>
using namespace std;
int main()
{
 //declare variables
 int k,i,j,n;
 //to accept a number from user
 cout<<"enter a number"<<endl;
 cin>>n;
 //to print rhombus star
 for(i=0;i<n;i++)
  {
  for(j=i;j<(n-1);j++)
    cout<<" ";
   for(k=0;k<n;k++)
     cout<<"*";
    cout<<endl;
  }
 return 0;
}
