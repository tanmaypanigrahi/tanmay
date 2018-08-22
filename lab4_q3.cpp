#include<iostream>
using namespace std;
int main()
{
double c,f;
//to enter temperature in fahrenheit
cout<<"enter temperature in fahrenheit"<<endl;
cin>> f;
//to convert into celcius
c=((5*f-160)/9);
//to display temperature in celcius
cout<<"temperature in celcius="<<c<<endl;
return 0;
}
