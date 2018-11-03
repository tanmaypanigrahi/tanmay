#include<iostream>
using namespace std;
int main()
{

 char *p;
 int i,a;
 char arr[10];
 cout<<"enter 10 characters"<<endl;
 for(i=0;i<10;i++)
 cin>>arr[i];
 p=&arr[0];
 for(i=0;i<10;i++)
 {
  for(a=i;a<10;a++)
  cout<<*(p+a);
  cout<<endl; 
 }
 return 0;
}

