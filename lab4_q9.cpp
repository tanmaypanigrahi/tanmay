#include<iostream>
using namespace std;
int main()
{
//to declare variables to store principal amount,rate of interest and time period
double p,t,r;
//
//to declare variables to calculate and store simple interest
double si;
//to store principal amount,rate of interest and time period
cout<<"enter principal amount"<<endl;
cin>>p;
cout<<"enter rate of interest"<<endl;
cin>>r;
cout<<"enter time period"<<endl;
cin>>t;
//calculate simple interest
si=(p*t*r)/100;
//display the simple interest amount
cout<<"Simple Interesr= Rs."<<si<<endl;
return 0;
}
