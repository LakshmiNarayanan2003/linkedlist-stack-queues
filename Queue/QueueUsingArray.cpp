#include <iostream>
using namespace std;

#define N 5
class Queue
{
	int ele,front,rear;
	int a[N];
	public:
		Queue()
		{
			front=rear=-1;	
		}
		void enqueue()
		{
			cout<<"Enter the element : ";
			cin>>ele;
			if(rear==N-1)
			{
				cout<<"Overflow";
			}
			else if(front==-1 && rear==-1)
			{
				front=rear=0;
				a[rear]=ele;
			}
			else
			{
				rear++;
				a[rear]=ele;
			}
		}
		void dequeue()
		{
			if(front==-1 && rear==-1)
			{
				cout<<"Empty";
			}
			else if(front==rear)
			{
				front=rear=-1;
			}
			else
			{
				front++;
			}
		}
		void peek()
		{
			if(front==-1 && rear==-1)
			{
				cout<<"Empty";
			}
			else
			{
				cout<<a[front];
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
