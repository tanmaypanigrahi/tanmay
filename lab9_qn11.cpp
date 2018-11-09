//program to declare variables of all predefined sizes and declare corresponding pointers along with respective sizes
#include<iostream>
using namespace std;
//declaring main function
int main()
{
  //declaring variables and pointers
  int *ip;
  long *lp;
  float *fp;
  double *dp;
  bool *bp;
  char *cp;
  //output
  cout<<"The sizes of the  predefined datatypes include:"<<endl;
  cout<<"int-"<<sizeof(*ip)<<"  long-"<<sizeof(*lp)<<"  float-"<<sizeof(*fp)<<"  double-"<<sizeof(*dp)<<"  boolean-"<<sizeof(*bp)<<"  character-"<<sizeof(*cp)<<endl;
  cout<<"The sizes of the  pointers for the predefined datatypes include:"<<endl;
  cout<<"int-"<<sizeof(ip)<<"  long-"<<sizeof(lp)<<"  float-"<<sizeof(fp)<<"  double-"<<sizeof(dp)<<"  boolean-"<<sizeof(bp)<<"  character-"<<sizeof(cp)<<endl;
  return 0;
}