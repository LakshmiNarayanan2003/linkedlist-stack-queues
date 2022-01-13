#include <iostream>
using namespace std;

class Node
{	public:
	int val;
	Node *next;
	Node()
	{
		val=0;
		next=NULL;
	}
	Node(int x)
	{
		val=x;
		next=NULL;
	}
};

class Queue
{
	int ele,n;
	Node *front,*rear;
	public:
	Queue()
	{
		front=rear=NULL;
		n=0;	
	}	
	void enqueue()
	{
		cout<<"Enter the element : ";
		cin>>ele;
		n++;
		Node *temp=new Node(ele);
		if(front==NULL && rear==NULL)
		{
			front=rear=temp;
		}
		else
		{
			temp->next=rear;
			rear=temp;
		}
	}
	void dequeue()
	{
		if(front==NULL && rear==NULL)
		{
			cout<<"Empty";
		}
		else
		{
				if(front->next==NULL)
				{
					front=rear=NULL;
				}
				else
				{
					Node *temp;
					temp=front;
					front=front->next;
					delete temp;
				}
		}
	}
	void peek()
	{
		if(front==NULL && rear==NULL)
		{
			cout<<"Empty";
		}
		else
		{
			cout<<front->val;
		}
	}
};

main()
{	Queue q;
	int choice;
	char c;
	do
	{
	cout<<"\n1. Enqueue\n2. Dequeue\n3. Peek\n";
	cout<<"\nEnter your choice: ";
	cin>>choice;
	switch(choice)
	{
		case 1:
			q.enqueue();
			break;
		case 2:
			q.dequeue();
			break;
		case 3:
			q.peek();		
			break;	
	}	
	cout<<"Press 'y' to continue : ";
	cin>>c;
	}while(c=='y');
	
	
}
