#include <iostream>
using namespace std;

#define n 5

class Stack
{
	int a[n];
	int ele,top;
	public:
		Stack()
		{
			for(int i=0;i<n;i++)
			{
				a[i]=-1;
			}
			top=-1;
		}
		void push()
		{
			cout<<"Enter the element : ";
			cin>>ele;
			if(top==n-1)
			{
				cout<<"Overflow";
			}
			else
			{
				a[top]=ele;
				top++;
			
			}
		}
		void pop()
		{
			if(top==-1)
			{
				cout<<"Underflow";
			}
			else
			{
				int item;
				item=a[top];
				top--;
				cout<<"Element deleted : "<<item;
			}
		}
		void peek() // Display the topmost element
		{
			if(top==-1)
			{
				cout<<"Underflow";
			}
			else
			{
				cout<<a[top];
			}
		}
		void display()
		{
			cout<<endl;
			for(int i=0;i<=top;i++)
			{
				cout<<a[i]<<"\t";
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
