#include<iostream>
using namespace std;
int main()
{
 int a;
 //while loop starts
 while(a<100)
 {
  a++;
  if(a%2!=0)
  cout<<a<<endl;
  else
  continue;
 }
 return 0;
}
