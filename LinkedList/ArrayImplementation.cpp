
#include <iostream>
using namespace std;

class List
{
	int a[10],value,pos,n,i;
	public:
	List()
	{
			n=0;
			for(int i;i<10;i++)
			{
				a[i]=-1;
			}
	}
	void insertBeg()
	{
		cout<<"\nInsert at beginning:  ";
		cout<<"\nEnter the value to be inserted at the beginning: ";
		cin>>value;
		n=n+1;
		for(i=n;i>1;i--)
		{
			a[i]=a[i-1];
		}
		a[1]=value;
		printArray();
	}
	void insertEnd()
	{
		cout<<"\nEnter the element to be inserted at the end :";
		cin>>value;
		n=n+1;
		a[n]=value;
		printArray();
	}
	void insertPos()
	{
		
		cout<<"\nEnter the position at which the value should be inserted :";
		cin>>pos;
		if(pos<1 || pos>n+1)
		{
			cout<<"\nInvalid position";
		}
		else if(pos==1)
		{
			insertBeg();
		}
		else if(pos==n+1)
		{
			insertEnd();
		}
		else
		{
		cout<<"\nEnter the element to be inserted:";
		cin>>value;
		n=n+1;
		for(i=n;i>pos;i--)
		{
			a[i]=a[i-1];
				
		}	
		a[pos]=value;
		printArray();
		}
	}
	void delBeg()
	{
		cout<<"\n The element"<<a[1]<<" has been deleted";
		for(i=1;i<n;i++)
		{
			a[i]=a[i+1];
		}
		a[1]=-1;
		printArray();
	}
	void delEnd()
	{
		cout<<"\nThe element "<<a[n]<<" has been deleted";
		a[n]=-1;
		n=n-1;
	}
	void delPos()
	{
			cout<<"Enter the position at which the value should be inserted :";
		cin>>pos;
		if(pos<1 || pos>n)
		{
			cout<<"\nInvalid position";
		}
		else if(pos==1)
		{
			delBeg();
		}
		else if(pos==n)
		{
			delEnd();
		}
		else
		{
		cout<<"\nThe element "<<a[pos]<<" is deleted";
		for(i=pos;i>n;i--)
		{
			a[i]=a[i+1];
				
		}	
		a[pos]=-1;
		n=n-1;
		printArray();
		}
	}
	void search()
	{
		if(n==0)
		{
			cout<<"\nThe list is empty";
			
		}
		else
		{
			int temp=-1;
			cout<<"Enter the element to be searched :";
			cin>>value;
			for(i=1;i<=n;i++)
			{
				if(a[i]==value)
				{
					cout<<"Element found at index "<<i;
					temp=0;
				}
			}
			if(temp==-1)
			{
				cout<<"Element not found";
			}
		}
	}
	void printArray()
	{
		cout<<"The array : ";
		for(i=1;i<=n;i++)
		{
			cout<<a[i]<<"\t";
		}
	}
};
main()
{
	List l;
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
			l.delBeg();
			break;
		case 5:
			l.delEnd();
			break;
		case 6:
			l.delPos();
			break;
		case 7:
			l.search();
			break;
		case 8: 
			l.printArray();
			break;
	}
	cout<<"If you wish to continue, press 'y'";
	cin>>cont;
	}while(cont=='y');
	
}
