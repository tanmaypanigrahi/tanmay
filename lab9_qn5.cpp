//Program to print characters of a string in reverse order
#include<iostream>
using namespace std;
void rev(char str[],char *p)     //function that reverses the order of a string
{
  p = str;
  while(*p!='\0')
  {
    ++p;
  }
  while((p--)!=str)
  {
    cout<<*p;
  }
  cout<<endl;
    
}
//declaring main function
int main()
{
    //declaring variables
    char s[10] = "abcde";
    char *cptr;
    //displays the string s in reverse order
    rev(s,cptr);
    //return statement
    return 0;
}