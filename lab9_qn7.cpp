//Program including a function that returns a pointer to the maximum value of an array of double's and returning null if the array is empty
#include<iostream>
using namespace std;
double* maximum(double *a,int size)
{
  double *p;
  p=a;
  for(int i=0;i<size;i++)
  {
    if(a[i]>*p)
      p=&a[i];
  }
  if(size!=0)
    return p;
  else
    return NULL;
}
//declaring main function
int main()
{
  //declaring necessary variables
  double arr[50];//array initialisation
  int size;
  //input of array size
  cout<<"Enter the size of the array\n";
  cin>>size;
  //asks user to enter the array
  cout<<"Enter the entries of the double array\n";
  for(int i=0;i<size;i++)
  {
    cin>>arr[i];
  }
  //output of the maximum value of array by calling unto 1st function
  cout<<"The maximum entry in the array of double's is "<<*maximum(arr,size)<<endl;
  return 0;
}