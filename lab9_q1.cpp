#include<iostream>
using namespace std;
int main()
{
 int n;
 cout<<"enter no of character in your string"<<endl;
 cin>>n;
 char arr[n];
 int a,i;
 cout<<"enter your string"<<endl;
 for(i=0;i<n;i++)
 cin>>arr[i];
 char *p=&arr[0];
 for(i=n-1;i>=0;i--)
 cout<<*(p+i);
 cout<<endl;
 return 0;
}
