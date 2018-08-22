#include<iostream>
using namespace std;
int main()
{
//to declare variables to store marks in 5 subjects
int m1,m2,m3,m4,m5;
//to declare variable to calculate and store total marks,average and percentage of marks
double tm,avg,per;
//to enter marks in 5 subjects
cout<<"enter mark in subject 1"<<endl;
cin>>m1;
cout<<"enter mark in subject 2"<<endl;
cin>>m2;
cout<<"enter mark in subject 3"<<endl;
cin>>m3;
cout<<"enter mark in subject 4"<<endl;
cin>>m4;
cout<<"enter mark in subject 5"<<endl;
cin>>m5;
//calculate total marks
tm=m1+m2+m3+m4+m5;
//calculate average mark
avg=tm/5;
//to calculate percentage of marks
per=tm/5;
//display total marks,average and percentage of marks
cout<<"total marks="<<tm<<endl;
cout<<"average marks="<<avg<<endl;
cout<<"percentage of marks="<<per<<"%"<<endl;
return 0;
}
