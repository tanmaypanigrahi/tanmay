#include<iostream>
using namespace std;
int odd(int i,int n)
{
 int t;
 if(i%2!=0)
  cout<<i<<endl;
 else
  t++;
 i++;
 if(i==n+1)
  return 1;
 else
  odd(i,n);
}
int even(int i,int n)
{
 int t;
 if(i%2==0)
  cout<<i<<endl;
 else
  t++;
 i++;
 if(i==n+1)
  return 1;
 else
  even(i,n);
}
int main()
{
 int n;
 char c;
 cout<<"enter a number"<<endl;
 cin>>n;
 cout<<"press e to print even numbers between 1 and "<<n<<" or press o to print odd numbers between 1 and "<<n<<endl;
 cin>>c;
 if(c=='e')
  even(1,n);
 else
  odd(1,n);
 return 0;
} 

