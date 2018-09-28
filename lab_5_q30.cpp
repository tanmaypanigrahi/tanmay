#include<iostream>
#include<cmath>
using namespace std;
int main()
{
 int n,a;
 cout<<"enter a number"<<endl;
 cin>>n;
 cout<<"multiplication table of "<<n<<" is:-"<<endl;
 for(a=1;a<11;a++)
 cout<<n<<"*"<<a<<"="<<(n*a)<<endl;
 return 0;
}
