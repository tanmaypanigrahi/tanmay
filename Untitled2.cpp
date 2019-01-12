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
	node()
	{
		next=NULL;
	}
};
class linkedlist
{
	public:
	//head~circle  type ptr
	node * head;
	node * tail;
	//constructor
	linkedlist()
	{
		head=NULL;
		tail=NULL;
	}
	void insert(int value)
	{
	//if first node is added
	node * temp=new node;
	temp->data=value;
	if(head==NULL)
	{
	head=temp;
    }
	//2nd node only
	else
	{
	tail->next=temp;
    }
	tail=temp;
	}
	void   delet()
	{
		//store tail in temp
		node * temp=tail;
		//before tail has to poin to null
		node * current=head;
	while(current->next !=tail)
	{
		current=current->next;
	}
	 current->next=NULL;
		//update tail
		tail=current;
		//delete temp
		delete temp; 
		
	}
	void insertat(int pos,int value)
	{
		//reach the before position
		node * current=head;
		int i=1;
		while(i<pos-1)
		{
			i++;
			current=current->next;
		}
			//create node
	node * temp=new node;
	temp->data=value;
	temp->next=current->next;
	current->next=temp;
	}
	void deleteat(int pos)
	{
		if(pos==1)
		{
			node * temp=head;
			node * current=head;
			current=current->next;
			head=current;
			delete temp;
		}
		else
		{
			node * current=head;
			int i=1;
			while(i<pos-1)
			{
				current=current->next;
				i++;
			}
			node * temp=current->next;
			node * a=head;
			int j=1;
			while(j<pos+1)
			{
				a=a->next;
				j++;
			}
			current->next=a;
			delete temp;
		}
	}
	void display()
	{
		int i=0;
	node * current=head;
	while(current!=NULL)
	{
		cout<<current->data<<"->";
		current=current->next;
		i++;
	}
	cout<<"NULL";
      cout<<endl;
      cout<<"number of elements="<<i<<endl;
	}
};
int main()
{
	linkedlist l1;
	l1.insert(1);
	l1.insert(2);
	l1.insert(3);
	l1.insert(4);
	l1.display();
    l1.deleteat(2);
	l1.display();
	l1.delet();
    l1.display();
	
}
