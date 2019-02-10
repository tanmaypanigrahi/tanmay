#include<iostream>
using namespace std;
class node
{
	public:
	//data
	int data;
	//pointer to next node
	node * next;
	//constructor to make next pointer to null
	Node(int value)
	{
		next=NULL;
		value=data;
	}
};
class stack
{
	public:
	node * top;
	stack()
	{
		top=NULL;
	}
	void push(int value)
	{
		node * temp=new node();
		temp->data=value;
	     if(top==NULL)
	     {
	     	top=temp;
		 }
		 else
		 {
		 	node * current=top;
		 	while(current->next!=NULL)
		 	{
			 current=current->next; 
			}
			current->next=temp;
			current=temp;
		 }
	}
	int pop()
	{
		int val;
		node * temp=top;
		val=temp->data;
		top=temp->next;
		temp->next=NULL;
		delete temp;
		return val;
	}
	bool isEmpty()
	{
		if(top==NULL)
		 return true;
		else
		 return false; 
	}
	int size()
	{
		node * current=top;
		int i=1;
		while(current->next!=NULL)
		{
			i++;
			current=current->next;
		}
		return i;
	}
	void display()
	{
		node * current=top;
		while(current!=NULL)
		{
			cout<<current->data<<"->";
			current=current->next;
		}
		cout<<endl;
	}
};
class qus
{
	public:
		stack s1;
		void enqueue(int value)
		{
			s1.push(value);
		}
		void dequeue()
		{
			if(s1.size()==0)
			 cout<<"nothing to delete"<<endl;
			else if(s1.size()==1)
			 cout<<"one element "<<s1.pop()<<"is dequeued"<<endl;
			else
			{
				int ppdval;
				ppdval=s1.pop();
				dequeue();
				s1.push(ppdval);
			}
		}
		bool isEmpty()
		{
			s1.isEmpty();
		}
		void size()
		{
			cout<<"size="<<s1.size()<<endl;
		}
};
int main()
{
	int i;
	qus q1;
	for(i=0;i<10;i++)
	 q1.enqueue(i);
	q1.size();
	q1.isEmpty();
	for(i=0;i<5;i++)
	 q1.dequeue();
	q1.size();
	q1.isEmpty();
	return 0;
}
