//Program to create a string and store our name in it and then use a loop to print string character by character using the normal index method as well as the pointer method. 
#include<iostream>
using namespace std;
//declaring main function
int main()
{
  //declaring variables
  char name[50],*cp;
  cp=name;
  //asking user to enter his/her name
  cout<<"Please enter your name: "<<endl;
  cin>>name;
  //displaying the user's name using normal index method
  cout<<"Using normal index method: "<<endl;
  for(int i=0;name[i]!='\0';i++)
  {
    cout<<name[i];
  }
  cout<<endl;
  //displaying the user's name using pointer method
  cout<<"Using pointer method: "<<endl;
  while(*cp!='\0')
  {
    cout<<*cp;
    cp++;
  }
  cout<<endl;
  return 0;
}