#include<iostream>
using namespace std;
double mean(int arr[],int n)
{
 int b;
 double m;
 for(b=0;b<n;b++)
 m+=arr[b];
 return m/n;
}
int large(int arr[],int n)
{
 int b,l=arr[0];
 for(b=0;b<n;b++)
 if(l<arr[b])
 l=arr[b];
 return l;
}
int small(int arr[],int n)
{
 int b,s=arr[0],l=0;
 for(b=0;b<n;b++)
 if(l>arr[b])
 s=arr[b];
 return s;
}
double median(int arr[],int n)
{
 double med=0;
 if(n%2==0)
  med=(arr[(n/2)-1]+arr[(n/2)])/2;
 else
  med=arr[((n+1)/2)-1];
 return med;
}
void mode(int arr[],int n)
{
 int b,m=0,p=0,t=0,g=0,e=0;
 for(m=0;m<n;m++)
 {
  for(p=0;p<n;p++)
  {
   if(arr[m]==arr[p])
    g++;
  }
  if(g>t)
  {
   t=g;
   e=m;
  }
   g=0;
 }
 if(t>1)
  cout<<"element with highest frequency="<<arr[e];
 else
  cout<<"no element with highest frequency"<<endl;
}
int main()
{
 int n,a;
 cout<<"ENTER THE NUMBER OF ELEMENTS IN THE ARRAY"<<endl;
 cin>>n;
 cout<<"ENTER THE ELEMENTS OF THE ARRAY"<<endl;
 int arr[n];
 for(a=0;a<n;a++)
 cin>>arr[a];
 cout<<"largest element of the arrary="<<large(arr,n)<<endl;
 cout<<"smallest element of the array="<<small(arr,n)<<endl;
 cout<<"mean of the elements is="<<mean(arr,n)<<endl;
 cout<<"median of the elements is="<<median(arr,n)<<endl;
 mode(arr,n);
 return 0;
}
















