#include<iostream>
using namespace std;
int main()
{
 int arr[10]={1,2,3,4,5,6,7,8,9,10};
 int i;
 int *p;
 p=arr;
 cout<<"printing by normal index method"<<endl;
 for(i=0;i<10;i++)
 cout<<arr[i]<<endl;
 cout<<"printing by pointer method"<<endl;
 for(i=0;i<10;i++)
 cout<<*(p+i)<<endl;
 cout<<"OOPS!BOTH PRINTED SAME VALUES"<<endl;
 return 0;
}
