//program to to show string repeatedly by shifting top character of string from right to left. 
#include<iostream>
#include<stdio.h>
using namespace std;   
//declaring main function
int main(void)
{
  //declaring variables
  char str[20], *p;
  //asking user to enter an array
  cout<<"Input about 10 characters of string\n";
  cin>>str;
  //pointer variable refers to address of string
  p = str;
  //show string by shifting top character of string to right
  while(*p!='\0')
  {
    p++;
  }
  while((p--)!=str)
  {
    cout<<p<<endl;
  }
  return 0;
}