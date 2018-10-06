#include<iostream>
using namespace std;
int power(int b,int pr)
{
 if(pr==0)
  return 1;
 else
  return(b*power(b,pr-1));
}
int main()
{
 int a,b=1,c;
 cout<<"enter a number"<<endl;
 cin>>a;
 cout<<"enter the power"<<endl;
 cin>>c;
 cout<<power(a,c)<<endl;
 return 0;
}
