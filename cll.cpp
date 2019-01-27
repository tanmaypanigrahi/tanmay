#include<iostream>
using namespace std;
class node
{
	public:
		int data;
		node * next;
		node()
		{
			next=NULL;
		}
};
class cll
{
	public:
	node * head;
	node * tail;
	cll()
	{
		head=NULL;
		tail=NULL;
	}
	void insert(int value)
	{
		node * temp=new node();
		temp->data=value;
		//first node
		if(head==NULL)
		{
			head=temp;
			tail=temp;
			tail->next=head;
		}
		//other node
		else
		{
			node * current=head;
			while(current->next!=head)
			{
				current=current->next;
			}
			current->next=temp;
			current=temp;
			tail=current;
			tail->next=head;
		}
	}
	void delet()
	{
		node * temp;
		node * current=head;
		while(current->next!=tail)
		{
			current=current->next;
		}
		temp=current->next;
		tail=current;
		tail->next=head;
		delete temp;
	}
	void insertat(int value,int pos)
	{
		node * temp=new node();
		temp->data=value;
		if(pos==1)
		{
		temp->next=head;
		head=temp;	
		tail->next=head;
		}
		else
		{
			int i=1;
			node * current=head;
			while(i<pos-1)
			{
				i++;
				current=current->next;
			}
			temp->next=current->next;
			current->next=temp;
		}
	}
	void deleteat(int pos)
	{
		node * temp=new node;
		node * current=head;
		if(pos==1)
		{
			temp=head;
			current=current->next;
			head=current;
			tail->next=head;
			delete temp;
		}
		else
		{
			int i=0;
			while(i<pos-1)
			{
				i++;
				current=current->next;
			}
			if(current->next!=tail)
			{
				temp=current->next;
				current->next=temp->next;
				temp->next=NULL;
				delete temp;
			}
			else
			{
				temp=current->next;
				tail=current;
				tail->next=head;
				temp->next=NULL;
				delete temp;
			}
		}
	}
	void display()
	{
		node * current=head;
		while(current->next!=head)
		{
			cout<<current->data<<"->";
			current=current->next;
		} 
		cout<<current->data<<"->";
		cout<<current->next->data;
		cout<<endl;	
	}
	void countitems()
	{
		node * current=head;
		int i=0;
		while(current->next!=head)
		{
			i++;
			current=current->next;
	    }
		cout<<"number of elements="<<1+i<<endl;
	}
};
int main()
{
	cll l1;
	l1.insert(1);
	l1.insert(2);
	l1.insert(3);
	l1.insert(4);
	l1.display();
	l1.countitems();
	l1.insertat(55,2);
	l1.display();
	l1.countitems();
	l1.delet();
	l1.display();
	l1.countitems();
	l1.deleteat(3);
    l1.display();
	l1.countitems();	
	return 0;
}
