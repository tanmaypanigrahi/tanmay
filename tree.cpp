#include<iostream>
using namespace std;
class node
{
	public:
	node * left;
	node * right;
	int data;
	node(int val)
	{
		left=NULL;
		right==NULL;
		data=val;
	}
};
class bist
{
	public:
	node * root;
	bist()
	{
		root=NULL;
	}
	void insert(int val)
	{
		inserthelper(root,val);
	}
	void inserthelper(node * curr,int val)
	{
		//1st node
		if(curr==NULL)
		{
		    curr=new node(val);
		    if(root==NULL)
			root=curr;
		}
		//else compare data and move left or right
		else if(val<curr->data)
		{ 
			if(curr->left==NULL)
			{
			 curr->left=new node(val);
			  
		    }
			//if value<cur data,move left and call insert
			else
		     inserthelper(curr->left,val);
		}
		
		//else move right and call insert
		else
		{
		if(curr->right==NULL)
		 curr->right=new node(val);
		else
		 inserthelper(curr->right,val);	
		}
	}
	void display()
	{
	 display2(root); 	
	}
	int display2(node * curr)
	{
		if(curr==NULL)
		 return 0;
		//display left
		display2(curr->left);
		//display current
		cout<<curr->data<<"->";
		//display right
		display2(curr->right);
	}
	node * search(int val)
	{
		search2(root,val);
	}
	node * search2(node * curr,int val)
	{
		if(curr==NULL||curr->data==val)
		 return curr;
		else if(val<curr->data)
		 return search2(curr->left,val);
		else
		 return search2(curr->right,val);
	}
};
int main()
{
	bist b1;
	int i;
	for(i=0;i<7;i++)
	 b1.insert(i);
	b1.display();
	cout<<endl;
	int n;
	cout<<"Enter value to be searched"<<endl;
	cin>>n;
	if(b1.search(n)==NULL)
	cout<<n<<" is absent in the tree"<<endl;
	else
	cout<<n<<" is present in the tree and its address is="<<b1.search(n)<<endl;
}
