#include<iostream>
using namespace std;
char toUpper(char a)
{
 int b;
 char c;
 b=(int)a-32;
 c=(char)b;
 return c;
}
char toLower(char a)
{
 int b;
 char c;
 b=(int)a+32;
 c=(char)b;
 return c;
}
int main()
{
 char a;
 cout<<"enter a character"<<endl;
 cin>>a;
 if((int)a>=97&&(int)a<=122)
  cout<<"entered character in uppercase is "<<toUpper(a)<<endl;
 else
  cout<<"entered character in lowercase is "<<toLower(a)<<endl; 
 return 0;
}
