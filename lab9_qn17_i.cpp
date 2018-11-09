//Program to copy the role of function strcpy()
#include<iostream>
using namespace std;
void strcopy(char *str,char *p)
{
  while(*str!='\0')
  {
     *p = *str;
     str++;
     p++;
  }
  *p = '\0';
}
//initiating main function
int main()
{
  //declaring variables
  char str[40],p[30];
  //user input of string
  cout<<"please enter the string"<<endl;
  cin>>str;
  strcopy(str,p);
  //displaying output
  cout<<"The copied string: "<<endl;
  cout<<p<<endl;
  return 0;
    
}