#include<iostream>
using namespace std;
 //function to accept all
 int accept(int &uc,int &u,int &tr)
 {
  cout<<"enter unit cost"<<endl;
  cin>>uc;
  cout<<"enter units"<<endl;
  cin>>u;
  cout<<"enter tax rate"<<endl;
  cin>>tr;
 }
 //function to calculate sales tax and total due
 int calculate(int uc,int u,int tr,int &st,int &td)
 {
  st=u*uc*tr;
  td=st+(u*uc);
 }
 //print all
 int print(int uc,int u,int tr,int st,int td)
 {
  cout<<"Unit Cst= "<<uc<<endl;
  cout<<"units= "<<u<<endl;
  cout<<"tax rate= "<<tr<<endl;
  cout<<"sales tax+ "<<st<<endl;
  cout<<"total due= "<<td<<endl;
 }
 //main function
 int main()
 {
  int uc,u,tr,st,td;
  accept(uc,u,tr);
  calculate(uc,u,tr,st,td);
  print(uc,u,tr,st,td);
 return 0;
}
