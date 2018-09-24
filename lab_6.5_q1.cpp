#include<iostream>
using namespace std;
int main()
{
 int m,a,b;
 double r;
 for(m=1;m<=33;m++)
 {
  for(a=1;a<=(100-m);a++)
  {
   for(b=1;b<=(100-(a+m));b++)
   {
    r=(3*m)+a+(b*0.5);
    if((r==100)&&((a+b+m)==100))
    {
     cout<<"number of mangoes= "<<m<<endl;
     cout<<"number of apples= "<<a<<endl;
     cout<<"number of bananas= "<<b<<endl;
     cout<<endl;   
    }
   }
  }
 }
 return 0;
}
