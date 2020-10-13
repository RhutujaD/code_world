#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node *next;
};

class CircularLinkedList
{
	public:
	node *root,*last;
	void createLinkedList()
	{
		root=last=NULL;
	}
	void insertLeft(int e)
	{
		node *n;
		n=new node;
		n->data=e;
		n->next=NULL;
		if(root==NULL)
		{
			root=last=n;
			last->next=root;
		}
		else
		{
			n->next=root;
			root=n;
			last->next=root;
		}
	}
	void insertRight(int e)
	{
		node *n;
		n=new node;
		n->data=e;
		n->next=NULL;
		if(root==NULL)
		{
			root=last=n;
			n=root;
		}
		else
		{
			last->next=n;
			last=n;
			last->next=root;
		}
	}
	void deleteLeft()
	{
		node *t;
		if(root==NULL)
		cout<<"Empty List";
		else if(root->next==root){
			cout<<root->data<<" ";
			root=NULL;
		}
		else
		{
			t=root;
			root=root->next;
			last->next=root;
			cout<<"Deleted"<<t->data;
			delete t;
		}
	}
	void deleteRight()
	{
		node *t,*t2;
		if(root==NULL)
		cout<<"Empty List";
		else if(root->next==root){
			cout<<root->data<<" ";
			root=NULL;
		}
		else
		{
			t=t2=root;
			while(t!=last)
			{
				t2=t;
				t=t->next;
			}
			last=t2;
			t2->next=root;
			cout<<"Deleted:"<<t->data;
			delete t;
		}
	}
void printList()
	{
		node *t;
		if(root==NULL)
		cout<<"Empty List";
		else
		t=root;
		do
		{
			cout<<t->data;
			t=t->next;
		}
		while(t!=root);
	}
};

int main()
{

	CircularLinkedList cl;
	cl.createLinkedList();
	int a;
	int ch;
	
do{
   cout<<"\n1) InsertLeft   ->"<<endl;
   cout<<"2) InsertRight  <-" <<endl;
   cout<<"3) DeleteLeft   ->X"<<endl;
   cout<<"4) DeleteRight  X<-"<<endl;
   cout<<"5) PrintList    -----"<<endl;
   cout<<"0) Exit"<<endl;
   
   cout<<endl<<"Enter your choice : "<<endl;
   	 
   cin>>ch;
		
		switch(ch)
		{
			case 1:
				cout<<"Enter Data:";
				cin>>a;
				cl.insertLeft(a);
				break;
				
			case 2:
				cout<<"Enter Data:";
				cin>>a;
				cl.insertRight(a);
				break;
				
			case 3:
				cl.deleteLeft();
				break;
				
			case 4:
				cl.deleteRight();
				break;
				
			case 5:
				cl.printList();
				break;
				
			case 0:
				cout<<"Exiting";
				break;
				
			default:
				cout<<"Invalid Input";
		}
	}
	while(ch!=0);
	return 0;
}
