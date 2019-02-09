#include<iostream>
using namespace std;
class queueArr
{
	public:
	int arr[100],arr1[100];
	int i=0,top=-1,t;
	void enqueue(int value)
	{
		arr[i]=value;
		top=i;
		i++;
	}
	void dequeue()
	{
		for(t=0;t<i-1;t++)
		 arr[t]=arr[t+1];
		top--;
	}
	bool isEmpty()
	{
		if(top==-0)
		 return true;
		else
		 return false;
	}
	int size()
	{
		i=0;
		while(i!=top)
		{
			i++;
		}
		return i;
	}
	void display()
	{
		i=0;
		if(top==0)
		 cout<<"your queue is empty"<<endl;
		else
		{
		while(i!=top)
		{
			cout<<arr[i]<<"->";
			i++;
		}
		cout<<endl;
	    }
	}
};
int main()
{
	int j;
	queueArr a1;
	for(j=0;j<10;j++)
	a1.enqueue(j);
	a1.display();
	if(a1.isEmpty()==false)
	 cout<<"your queue is not empty"<<endl;
	else
	 cout<<"your queue is empty"<<endl;
	cout<<"size of your queue="<<a1.size()<<endl;
	for(j=1;j<5;j++)
	 a1.dequeue();
	a1.display();
   cout<<"size of your queue="<<a1.size()<<endl;
   	if(a1.isEmpty()==false)
	 cout<<"your quueue is not empty"<<endl;
	else
	 cout<<"your queue is empty"<<endl;
	 	for(j=1;j<=5;j++)
	 a1.dequeue();
	a1.display();
   cout<<"size of your queue="<<a1.size()<<endl;
   	if(a1.isEmpty()==false)
	 cout<<"your quueue is not empty"<<endl;
	else
	 cout<<"your queue is empty"<<endl;
}
