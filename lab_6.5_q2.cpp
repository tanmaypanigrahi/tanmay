#include<iostream>
using namespace std;
double option1()
{
 int income;
 income=600;
 return income;
}
double option2(int sales)
{
 double income;
 income=(7*40)+((sales*225)*0.1);
 return income;
}
double option3(int sales)
{
 double income;
 income=(sales*20)+((sales*225)/5);
 return income;
}
double better(double a,double b,double c)
{
 if(a>b&&b>c)
  return a;
 else if(b>a&&b>c)
  return b;
 else
  return c;
} 
int main()
{
 int sales;
 double income1,income2,income3,Better;
 cout<<"Enter number of pairs of shoes sold"<<endl;
 cin>>sales;
 income1=option1();
 income2=option2(sales);
 income3=option3(sales);
 Better=better(income1,income2,income3);
 if((Better==income1)==true)
  cout<<"Option 1 is better for you i.e. Rs.600 per week"<<endl;
 else if((Better==income2)==true)
  cout<<"Option 2 is better for you i.e. Rs.7 per hour and 10% commission on sale"<<endl;
 else
  cout<<"option 3 is better for you i.e 20% Commission and Rs.20 for each pair of shoes sold"<<endl;
 return 0;
}
 
 
