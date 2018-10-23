#include<iostream>
using namespace std;
int klar(int arr[],int n,int k)
{
 return arr[k];

}
int ksma(int arr[],int n,int k)
{
 return arr[k];
}
int main()
{
 int n;
 cout<<"enter the size of the array"<<endl;
 cin>>n;
 int arr[n],a,b,c,tmp,k;
 cout<<"enter the elements of the array"<<endl;
 for(a=0;a<n;a++)
 cin>>arr[a];
 cout<<"enter the value of k"<<endl;
 cin>>k;
 for(a=(n-1);a>0;a--)
 {
  for(b=0;b<a;b++)
  {
   if(arr[b]>arr[b+1])
   {
    tmp=arr[b];
    arr[b]=arr[b+1];
    arr[b+1]=tmp;
   }
  }
 }
 cout<<"sorted array"<<endl;
 for(c=0;c<n;c++)
 cout<<arr[c]<<endl;
 cout<<k<<"th smallest element of the array="<<arr[k-1]<<endl;
 cout<<k<<"th largest element of the array="<<arr[n-k]<<endl;
 return 0;
} 
 

 
