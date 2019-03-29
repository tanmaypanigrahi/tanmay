#include<iostream>
using namespace std;
class node
{
	public:
	node * left;
	node * right;
	node * parent;
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
			curr->parent=NULL;
		}
		//else compare data and move left or right
		else if(val<curr->data)
		{ 
			if(curr->left==NULL)
			{
			curr->left=new node(val);
			curr->left->parent=curr;
		    }
			//if value<cur data,move left and call insert
			else
		     inserthelper(curr->left,val);
		}
		
		//else move right and call insert
		else
		{
		if(curr->right==NULL)
		{
		 curr->right=new node(val);
		 curr->right->parent=curr;
	    }
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
	node * findmin(int val)
	{
		node * cv=search(val);
		if(cv==NULL)
		 return cv;
		else
		 findminh(cv);
	}
	node * findminh(node * curr)
   	{
		node * curr1=root;
		while(curr1->left!=NULL)
		{
			curr1=curr1->left;
		}

		return curr1;
	}
	
	/*int count()
	{
		count1(root,0);
	}
	int count1(node * curr,int c)
	{
        if(curr==NULL)
		 return 0;
		count1(curr->left,c);
		
		c++;
		
		count1(curr->right,c);
		return c;
	}
	*/
	int count(Node* curr)										//count the number of nodes
	{
	    if(curr!=NULL)
	        return (1+count(curr->left)+count(curr->right));
	    else
	        return 0;
	}
	int rangesearch(int k1,int k2)
	{
        int c;
        rsh(k1,k2,root,0);		
	}
	int rsh(int k1,int k2,node * curr,int c)
	{
		if(curr==NULL)
		 return 0;
		rsh(k1,k2,curr->left,++c);
		if(curr->data >k1 && curr->data <k2)
		{
		c++;
		 cout<<curr->data<<"->";
	    }
	    rsh(k1,k2,curr->right,++c);
	    return c;
	}
	int height(Node *curr)										
	{
	    if(curr==NULL)
	        return 0;
	    else 
	    {
	        int right=height(curr->right);
			int left=height(curr->left);

	        if(left < right)
	          	return (1+right);
	        else
	            return (1+left);
	    }
	}
	
};
int main()
{
	bist b1;
	int i;
	 b1.insert(9);
	 b1.insert(7);
	 b1.insert(18);
	 b1.insert(6);
	 b1.insert(5);
	 b1.insert(2);
	 b1.insert(14);
	 b1.insert(8);
	 b1.insert(3);
	 b1.insert(10);
	b1.display();
	cout<<endl;
	b1.count(b1.root);
	int n;
	cout<<"Enter value to be searched"<<endl;
	cin>>n;
	if(b1.search(n)==NULL)
	cout<<n<<" is absent in the tree"<<endl;
	else
	cout<<n<<" is present in the tree and its address is="<<b1.search(n)<<endl;
 	int m;
	cout<<"Enter value from which minimm will be displayed"<<endl;
	cin>>m;
	if(b1.findmin(m)==NULL)
	 cout<<m<<" is absent so what I will display??"<<endl;
	 else
     cout<<"address of minimum valued node in your sub-tree is"<<b1.findmin(m)<<endl;
	cout<<"number of nodes in the tree= "<<b1.count()<<endl;
	cout<<b1.rangesearch(2,14);
	cout<<b1.height(b1.root);
}

