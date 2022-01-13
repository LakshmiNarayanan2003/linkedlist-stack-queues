#include <iostream>
using namespace std;



class Node
{
	public:
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
class Stack
{
	Node *top;
	int ele,n;
	public:
		Stack()
		{
			n=0;
			top=NULL;
			
		}
		void push()
		{
			cout<<"Enter the element : ";
			cin>>ele;
			Node *temp=new Node(ele);
			n++;
			if(top==NULL)
			{
				top=temp;
			}
			else
			{
				temp->next=top;
				top=temp;
			}
		}
		void pop()
		{
			Node *temp;
			
			if(n==0)
			{
				cout<<"Underflow";
			}
			else
			{
				temp=top;
				top=top->next;				
				delete top;
				n--;
			}
		}
		void peek() // Display the topmost element
		{
			if(n==0)
			{
				cout<<"Underflow";
			}
			else
			{
				cout<<top->val;
			}
		}
		void display()
		{	Node *ptr=top;
			cout<<endl;
			while(ptr!=NULL)
			{
				cout<<ptr->val<<"\t";
				ptr=ptr->next;
			}
		}
};

main()
{
	Stack s;
	int choice;
	char c;
	do{
		cout<<"1. Push\n2. Pop\n3. Peek\n4. Display";
		cout<<"\nEnter your choice : ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				s.push();
				break;	
			case 2:
				s.pop();
				break;
			case 3:
				s.peek();
				break;
			case 4:
				s.display();
				break;
				
		}
		cout<<"To continue, press 'y' : ";
		cin>>c;
	}while(c=='y'||c=='Y');
}
