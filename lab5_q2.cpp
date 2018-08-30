#include<iostream>
using namespace std;
int main()
{
 //declare variable to store number
 float a,b,c;
 //accept value from user
 cout<<"enter first number"<<endl;
 cin>>a;
 cout<<"enter second number"<<endl;
 cin>>b;
 cout<<"enter third number"<<endl;
 cin>>c;
 //check and perint greater number
 if(a>b&&a>c)
 cout<<"greater number is "<<a<<endl;
 else if(b>a&&b>c)
 cout<<"greater number is "<<b<<endl;
 else
 cout<<"greater number is "<<c<<endl;
 return 0;
}
