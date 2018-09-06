#include<iostream>
using namespace std;
int main()
{
 //declare variables
 int k,i,j,n;
 //to accept a number from user
 cout<<"enter a number"<<endl;
 cin>>n;
 //to print mirrored rhombus star
 for(i=0;i<n;i++)
  {
     for(k=0;k<i;k++)
     cout<<" ";
     for(j=0;j<(n);j++)
     cout<<"*";
     cout<<endl;
  }
 return 0;
}
