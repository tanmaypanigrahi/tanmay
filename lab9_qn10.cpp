//Program containing a function revString(char*) which reverses the parameter cstring.  The function returns nothing. 
#include<iostream>
using namespace std;
//function to reverse the string passed as a parameter
void revString(char *ptr)
{
  char *p;
  p=ptr;
  while(*ptr!='\0')
  {
    ptr++;
  }
  while((ptr--)!=p)//gives reverse string as output
  {
    cout<<*ptr;          
  }
  cout<<endl;
}
//initiating main function
int main()
{
  char s[10]="abcde";
  revString(s);//calling the function
  return 0;
}