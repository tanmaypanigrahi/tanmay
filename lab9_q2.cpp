#include<iostream>
using namespace std;
int counteven(int n,int arr[])
{
 int *p=arr;
 int a,b=0;
 for(a=0;a<n;a++)
 if(*(p+a)%2==0)
 b++;
 return b;
}
int main()
{
 int n;
 cout<<"enter the size of your array"<<endl;
 cin>>n;
 int arr[n];
 int i,a;
 cout<<"enter the numbers of the array"<<endl;
 for(i=0;i<n;i++)
 cin>>arr[i];
 cout<<"number of even numbers in your array="<<counteven(n,arr)<<endl;
 return 0;
}
