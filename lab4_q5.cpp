#include<iostream>
using namespace std;
int main()
{
//declare variable to store two angles of a triangle
double a1,a2;
//to declare variable to calculate and store 333rd angle
double a3;
//enter first angle of the triangle
cout<<"enter the first angle of the triangle"<<endl;
cin>>a1;
//enter second angle of the triangle
cout<<"enter the second angle of the triangle"<<endl;
cin>>a2;
//calculate third angle of the triangle
a3=180-(a1+a2);
//display third angle of triangle
cout<<"third angle of triangle="<<a3<<endl;
return 0;
}
