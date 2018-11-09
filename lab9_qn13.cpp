// program to use a loop to print array using the normal index method as well as the pointer method.
#include<iostream>
using namespace std;
//declaring main function
int main()
{
  int arr[10],*p;
  p=arr;
  //asking user for input
  cout<<"Please input 10 integers."<<endl;
  for(int i=0; i<10; i++)
  {
    cin>>arr[i];
  }
  //printing user data using normal index method
  cout<<"The output using normal index method is :"<<endl;
  for(int i=0; i<10; i++)
  {
    cout<<arr[i]<<endl;
  }
  //printing user data using pointer method
  cout<<"The output using pointer method is:"<<endl;
  for(int i=0; i<10; i++)
  {
    cout<<*(p+i)<<endl;
  }
  return 0;
}