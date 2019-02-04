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
class stackLL
{
	public:
	node * top;
	stackLL()
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
	void pop()
	{
		node * temp=top;
		top=temp->next;
		temp->next=NULL;
		delete temp;
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
int main()
{
	stackLL s1;
	int i;
	for(i=0;i<6;i++)
	s1.push(i);
	s1.display();
	cout<<s1.isEmpty()<<endl;
  	cout<<s1.size()<<endl;
	for(i=0;i<3;i++)
	s1.pop();
	s1.display();
	cout<<s1.isEmpty()<<endl;
	cout<<s1.size()<<endl;
	return 0;
}
