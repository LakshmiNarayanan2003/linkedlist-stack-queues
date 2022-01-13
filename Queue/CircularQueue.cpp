#include <iostream>
using namespace std;
#define N 5

class Queue
{
	int front,rear,ele;
	int a[N];	
	public:
		Queue()
		{
			front=rear=-1;
		}
		void enqueue()
		{
			cout<<"Enter the element :";
			cin>>ele;
			if(front==-1 && rear==-1)
			{
				front=rear=0;
				a[rear]=ele;
			}
			else if((rear+1)%N==front)
			{
				cout<<"Full";
			}
			else
			{
				rear=(rear+1)%N;
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
				front=(front+1)%N;
			}
		}
		void display()
		{	int i=front;
			if(front==-1 && rear==-1)
			{
				cout<<"Empty";
			}
			else
			{
				while(i!=rear)
				{
					cout<<a[i];
					i=(i+1)%N;
				}
			}
		}
};
main()
{	Queue q;
	int choice;
	char c;
	do
	{
	cout<<"\n1. Enqueue\n2. Dequeue\n3. Display\n";
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
			q.display();		
			break;	
	}	
	cout<<"Press 'y' to continue : ";
	cin>>c;
	}while(c=='y');
	
	
}

