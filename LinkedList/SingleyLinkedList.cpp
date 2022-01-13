#include <iostream>
using namespace std;

class Node
{public:
	int val;
	Node *next;
	
		Node()
		{
			val=-1;
			next=NULL;
		}
		Node(int x)
		{
			val=x;
			next=NULL;
		}
};
class LinkedList
{
		Node *head;
		int ele,pos,n;
		public:
			LinkedList()
			{
				n=0;
				head=NULL;
			}
			void printList()
			{
				Node *ptr=head;
					while(ptr!=NULL)
					{
						cout<<ptr->val;
						ptr=ptr->next;
					}
					
			}
			void insertBeg()
			{
				cout<<"Enter the value to be inserted : ";
				cin>>ele;
				n++;
				Node *temp=new Node(ele);
				if(head==NULL)
				{
					head=temp;
				}
				else
				{
					temp->next=head;
					head=temp;
				}
			}
			void insertEnd()
			{
				cout<<"Enter the value to be inserted : ";
				cin>>ele;
				n++;
				Node *temp=new Node(ele);
				if(head==NULL)
				{
					head=temp;
				}
				else
				{	Node *ptr=head;
					while(ptr->next!=NULL)
					{
						ptr=ptr->next;
					}
					
					ptr->next=temp;
					
				}
				
			}
	void  insertPos()
	{	int p=1;
		cout<<"Enter the position : ";
		cin>>pos;
		if(pos==1)
		{
			insertBeg();
		}
		else if(pos==n+1)
		{
			insertEnd();
		}
		else if(pos<1 || pos>n+1)
		{
			cout<<"Invalid position";
		}
		else
		{
			cout<<"Enter the element to be inserted : ";
			cin>>ele;
			Node *temp=new Node(ele);
			Node *ptr=head;
			while(p<(pos-1))
			{
				ptr=ptr->next;
				p++;
			}
			temp->next=ptr->next;
			ptr->next=temp;
		}
	}
	void search()
	{
		Node *ptr=head;
		int p=1;
		int temp=-1;
		cout<<"Enter the element to search : ";
		cin>>ele;
		while(ptr!=NULL)
		{
			if(ptr->val==ele)
			{	
				cout<<"Element found at position "<<p;
				temp=0;
			}
			ptr=ptr->next;
			++p;
		}
		if(temp==-1)
		{
			cout<<"Element not found";
		}
	}
	void deleteBeg()
	{
		Node *ptr=head;
		if(ptr!=NULL)
		{
			
			head=head->next;
			delete ptr;
			n--;
		}
		else
		{
			cout<<"Empty list";	
		}	
	}
	void deleteEnd()
	{
		Node *ptr1,*ptr2;
		ptr1=head;
		ptr2=head;
		if(ptr1!=NULL)
		{
			while(ptr1->next!=NULL)
			{
				ptr2=ptr1;
				ptr1=ptr1->next;
			}
			ptr2->next=NULL;
			delete ptr1;	
				n--;
		}
		else
		{
			cout<<"Empty list";
		}
	}
	void delPos()
	{
		cout<<"Enter the position : ";
		cin>>pos;
		if(pos==1)
		{
			deleteBeg();
		}
		else if(pos==n)
		{
			deleteEnd();
		}
		else if(pos<1 || pos>n)
		{
			cout<<"Invalid position";
		}
		else
		{
			Node *temp,*ptr;
			ptr=head;
			temp=head;
			while(pos>0)
			{
				--pos;
				temp=ptr;
				ptr=ptr->next;
			}
			cout<<"Element deleted : "<<ptr->val;
			temp->next=ptr->next;
			delete ptr;
		}
	}
	void reverse()
	{
		Node *current,*prev,*nextt;
		current=head;
		prev=NULL;
		nextt=NULL;
		while(current!=NULL)
		{
			nextt=current->next;
			current->next=prev;
			prev=current;
			current=nextt;
		}
		head=prev;
	}
};
main()
{
	LinkedList l;
	int choice;
	char cont;
	do
	{
	cout<<"1. Insert at beginning\n2. Insert at end\n3. Insert at position\n4. Delete beginning\n5. Delete at end\n6. Delete at position\n 7. Search\n8. Print array";
	cout<<"\nEnter your choice : ";
	cin>>choice;
	switch(choice)
	{
		case 1:
			l.insertBeg();
			break;
		case 2:
			l.insertEnd();
			break;
		case 3:
			l.insertPos();
			break;
		case 4:
			l.deleteBeg();
			break;
		case 5:
			l.deleteEnd();
			break;
		case 6:
			l.delPos();
			break;
		case 7:
			l.search();
			break;	
		case 8:
			l.printList();
			break;
		case 9:
			l.reverse();
			break;
	}
	cout<<"If you wish to continue, press 'y'";
	cin>>cont;
	}while(cont=='y');
	
}
