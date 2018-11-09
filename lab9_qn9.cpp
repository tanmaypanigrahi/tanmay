//Program containing a function contains(char*, char) which returns true if the 1st parameter cstring contains the 2nd parameter char, or false otherwise.
#include<iostream>
using namespace std;
bool content(char *str,char ch)
{ 
  int n = 0;
  while(*(str++)!='\0')
  {
    if(*str==ch)
      n++;
  }
  if(n!= 0)
    return true;
  else
    return false;
}
//initiating main function
int main()
{
  //declaring necessary variables
  char string[50],ch;
  //asking user for input
  cout<<"Please enter the string "<<endl;
  cin>>string;
  //asking user to enter a character which is to be searched inside the string given as input
  cout<<"Enter character to be searched"<<endl;
  cin>>ch;
  cout<<"1- Character exists in string"<<endl<<"0-Character does not exist in string"<<endl<<"Output:"<<endl;
  cout<<content(string,ch)<<endl;
  return 0;
}