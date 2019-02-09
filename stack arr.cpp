#include<iostream>
using namespace std;
class stackArr
{
	public:
	int arr[100];
	int i=0,top=-1;
	void push(int value)
	{
		arr[i]=value;
		top=i;
		i++;
	}
	void pop()
	{
		arr[top]=0;
		top--;
	}
	bool isEmpty()
	{
		if(top==-1)
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
		while(i!=top)
		{
			cout<<arr[i]<<"->";
			i++;
		}
		cout<<endl;
	}
};
int main()
{
	int j;
	stackArr a1;
	for(j=0;j<10;j++)
	a1.push(j);
	a1.display();
	if(a1.isEmpty()==false)
	 cout<<"your stack is not empty"<<endl;
	else
	 cout<<"your stack is empty"<<endl;
	cout<<"size of your stack="<<a1.size()<<endl;
	for(j=1;j<3;j++)
	 a1.pop();
	a1.display();
   cout<<"size of your stack="<<a1.size()s<<endl;
   	if(a1.isEmpty()==false)
	 cout<<"your stack is not empty"<<endl;
	else
	 cout<<"your stack is empty"<<endl;
}
