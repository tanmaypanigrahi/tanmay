//program to declare two variables a,b and a pointer variable p (all integer type)Point p to a. And store the value pointed by p in b. Print the values of a, b and *p. 
#include<iostream>
using namespace std;
//declaring main function
int main()
{
  //declaring variables
  int a,b,*p;   //p is a pointer variable
  p = &a;
  b = *p;
  a=2;
  b=3;
  cout<<"a: "<<a<<" b: "<<b<<" *p: "<<*p<<endl;
  //pointing p to b
  p=&b;
  cout<<"a: "<<a<<" b: "<<b<<" *p: "<<*p<<endl;
  return 0;
}
