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
class queueLL
{
 public:
 node * front;
 node * end;
 queueLL()
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
 void dequeue()
 {
 	node * temp=end;
 	node * current=front;
 	while(current->next!=end)
 	{
 		current=current->next;
	}
	current->next=NULL;
	end=current;
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
int main()
{
	queueLL q1;
	int i=0;
	for(i=0;i<5;i++)
	 q1.enqueue(i);
	 q1.display();
	q1.isempty();
	for(i=0;i<2;i++)
	 q1.dequeue();
	q1.display();
	q1.size();
}
