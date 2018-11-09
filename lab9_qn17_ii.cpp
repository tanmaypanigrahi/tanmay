//Program to copy the function of strcat()
#include<iostream>
using namespace std;
//declaring main function
int main()
{
  //declaring necessory variables and pointers
  char str1[20],str2[20],*p1,*p2;
  //initializing the pointers
  p1 = str1;
  p2 = str2;
  //user string inputs
  cout<<"Please enter the 1st string"<<endl;
  cin>>str1;
  cout<<"Please enter the 2nd string"<<endl;
  cin>>str2;
  //concatenated string as output
  cout<<p1<<p2<<endl;
  return 0;
}