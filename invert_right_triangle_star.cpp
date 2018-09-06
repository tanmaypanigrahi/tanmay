#include<iostream>
using namespace std;
int main()
{
 //declare variables
 int i,j,n;
 //to accept a number from user
 cout<<"enter a number"<<endl;
 cin>>n;
 //to print invert right triangle star
 for(i=0;i<n;i++)
  {
  for(j=n;j>i;j--)
    cout<<"*";
    cout<<endl;
  }
 return 0;
}
