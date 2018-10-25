#include<iostream>
using namespace std;
int main()
{
/*int size;
cout<<"Put max size of the name"<<endl;
cin>>size;*/
 char arr[20];
 cout<<"enter your handsome name"<<endl;
 cin.getline(arr,20);
 int i;
 char *p=&arr[0];
 cout<<"your handsome name displaying by normal index method"<<endl;
 for(i=0;arr[i]!='\0';i++)
 cout<<arr[i]<<endl;
 cout<<"your handsome name displaying by pointer method"<<endl;
 for(i=0;*(p+i)!='\0';i++)
 cout<<*(p+i)<<endl;
 cout<<"yeah!your handsome name is displayed the same in both methods"<<endl;
 return 0;
}
 
