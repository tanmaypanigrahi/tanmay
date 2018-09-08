#include<iostream>
using namespace std;
//function to calculate maximum by call by value
int max(int a,int b)
{
 if(a<b)
  return b;
 else
  return a;
}
 //main function
int main()
{
 int n1,n2;
 //accept numbers from user
 cout<<"enter first number"<<endl;
 cin>>n1;
 cout<<"enter second number"<<endl;
 cin>>n2;
 //print max of two number
 cout<<"maximum of "<<n1<<" and "<<n2<<" is "<<max(n1,n2)<<endl;
 return 0;
}
