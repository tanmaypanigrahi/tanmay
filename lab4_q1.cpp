#include<iostream>
using namespace std;
int main()
{
int l;
double m,km;
//input length
cout<<"enter length in centimeters"<<endl;
cin>> l;
//to convert into metres
m=l/100.0;
//to convert into kilometres
km=l/100000.0;
//display length in metres
cout<<"length in metres="<<m<<endl;
//display length in kilometres
cout<<"length in kilometres="<<km<<endl;
return 0;
}

