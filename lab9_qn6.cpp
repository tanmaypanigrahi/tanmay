//Program to take an integer array as input and display the number of even entries as output
#include<iostream>
using namespace std;
//declaring required function to return even entries
int countEven(int *arr,int size)
{
  int p=0;
  for(int i=0;i<size;i++)
  {
    if(*(arr+i)%2==0)
    {
      p++;
    }
  }
return p;
}
//declaring main functon
int main()
{
  //declaring necessary variables
  int arr[50],size;
  //asking user for size of the array
  cout<<"Enter the size of the array\n";
  cin>>size;
  //taking values for the array
  cout<<"Enter the integer array\n";
  for(int i=0;i<size;i++)
  {
    cin>>arr[i];
  }
  //output by calling the function
  cout<<"No. of even entries: "<<countEven(arr,size)<<endl;
  return 0;
}