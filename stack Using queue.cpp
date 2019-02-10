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
class queue
{
 public:
 node * front;
 node * end;
 queue()
 {
 	front=NULL;
 	end=NULL;
 }
 void enqueue(int value)
 {
 	node * temp= new node();
 	temp->data=value;
 	if(front==NULL)
 	{
 	front=temp;
	end=temp;	
	}
	else
	{
		end->next=temp;
		end=temp;
	}
 }	
 int dequeue()
 {
 	int dqdval=0;
 	node * temp=end;
 	node * current=front;
 	while(current->next!=end)
 	{
 		current=current->next;
	}
	current->next=NULL;
	end=current;
	dqdval=temp->data;
	delete temp;
 } 
 bool isempty()
 {
 	if(front==NULL)
 	 return true;
 	else
 	 return false;
 }
 int size()
 {
 	int i=1;
 	node * current=front;
 	while(current->next!=NULL)
 	{
 		i++;
 		current=current->next;
	}
	return i;
 }
 void display()
 {
 	node * current=front;
 	while(current!=NULL)
 	{
	 cout<<current->data<<"->";
	 current=current->next;
    }
    cout<<endl;
 }
};
class suq
{
	public:
	queue q1;
	void push(int val)
	{
		q1.enqueue(val);
	}
	void pop()
	{
		q1.dequeue();
	}
	void size()
	{
		cout<<"size of your stack="<<q1.size()<<endl;
	}
	bool isEmpty()
	{
		q1.isempty();
	}
	void display()
	{
		q1.display();
	}
};
int main()
{
	suq q1;
	int i=0;
	for(i=0;i<5;i++)
	 q1.push(i);
	 q1.display();
	 q1.size();
	q1.isEmpty();
	for(i=0;i<2;i++)
	 q1.pop();
	q1.display();
	q1.size();
}
