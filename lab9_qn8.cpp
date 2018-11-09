//Program including a function myStrLen(char*) which returns the length of the parameter cstring without using the C++ function strlen.
#include<iostream>
using namespace std;
//function that returns length of string passed as parameter
int myStrLen(char *cstr)     
{
  int l=0;
  while(*cstr!='\0')
  {
    l++;
    cstr++;
  }
  return l;
}
//initiating main function
int main()
{   
  //initialising array of reasonable size
  char string[50];
  //user input
  cout<<"Enter required string (max=50 characters)"<<endl;
  cin>>string;
  //displays length of string by calling the function myStrLen
  cout<<"Length of the given string is "<<myStrLen(string)<<endl;
  return 0;
}