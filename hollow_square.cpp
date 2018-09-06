#include<iostream>
using namespace std;
int main()
{
 //declare variables
 int i,j,n;
 //to accept a number from user
 cout<<"enter a number"<<endl;
 cin>>n;
 //to print hollow square
 for(i=0;i<n;i++)
 {
  //to print the whole line with stars
  if(i==0||i==(n-1))
   {
    for(j=0;j<n;j++)
    cout<<"*";
    cout<<endl;
    } 
  //to print line with spaces and stars
  else
   {
    for(j=0;j<n;j++)
     {
     //to print stars
      if(j==0||j==(n-1))
       cout<<"*";
       //to print spaces
      else
       cout<<" ";
      }
      cout<<endl;
    } 
 
  }
 return 0;
}
