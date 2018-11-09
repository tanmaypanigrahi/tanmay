//Program to copy the function of strcmp().
#include<iostream>
using namespace std;
void strcomp(char *p1,char *p2,char *str1,char *str2)
{
  int l=0,m;
  str1 = p1;
  str2 = p2;
  while(*p1!='\0' || *p2!='\0')
  {
    if(*p1>*p2)
     {
       l++;
     }
    else 
     {
       l--;
     }
    if(l>0)
      m=1;
    else if(l<0)
      m=-1;
       
    else
       continue;
       
    p1++;
    p2++;
  }
    
  if(m==1)
  {
     cout<<str1<<" is greater than "<<str2<<endl;
  }
    
  else if(m==-1)
  {
     cout<<str2<<" is greater than "<<str1<<endl;
  }
}
//declaring main function
int main()
{
  //declaring variables
  char str1[20],str2[20],*p1,*p2;
  //input of 1st string
  cout<<"Please enter the first string"<<endl;
  cin>>str1;
  //input of 2nd string
  cout<<"Please enter the second string"<<endl;
  cin>>str2;
  //output
  strcomp(str1,str2,p1,p2);
  return 0;
}