
#include <bits/stdc++.h>

using namespace std;


typedef struct Node
{
	int data;
	Node* next;
	Node* prev;

	Node()
	{
		next = NULL;
		prev = NULL;
	}

	Node(int n)
	{
		data = n;
		next = NULL;
		prev = NULL;
	}
};


typedef struct Queue
{
	int Q_Rev;

	Node* head;
	Node* tail;

	int queue()
	{
		Q_Rev = false;
		
		head = NULL;
		tail = NULL;
	}

	void _push_front(int n)
	{
		if(tail == NULL || head == NULL)
		{
			head = new Node(n);
			tail = head;
		}
		
		else
		{
			Node* temp = new Node(n);
			head->prev = temp;
			temp->next = head;
			head = temp;
		}
	}

	void _push_back(int n)
	{
		if(tail == NULL && head == NULL)
		{
			head = new Node(n);
			tail = head;
		}
		
		else
		{
			Node* temp = new Node(n);
			tail -> next = temp;
			temp -> prev = tail;
			tail = temp;
		}
	}

	int Tail()
	{
		if(tail == NULL)
		{
			return -1;
		}
		
		int data = tail -> data;
		tail = tail -> prev;

		if(tail == NULL)
		{
			head = NULL;
		}
		
		else
		{
			tail -> next = NULL;
		}
		
		return data;
	}

	int Head()
	{
		if(head == NULL)
		{
			return -1;
		}	
			
		int data = head -> data;
		
		head = head -> next;

		if(head == NULL)
		{
			tail = NULL;
		}

		else
		{
			head -> prev = NULL;
		}

		return data;
	}


	void toFront (int n)
	{
		if(Q_Rev)
		{
			_push_back(n);
		}
			
		else
		{
			_push_front(n);
		}		
	}

	void push_back (int n)
	{
		if (!Q_Rev)
		{
			_push_back(n);
		}
			
		else
		{
			_push_front(n);
		}		
	}

	void reverse()
	{
		Q_Rev != Q_Rev;
	}

	int _Head()
	{
		if (Q_Rev)
		{
			return Tail();
		}
			
		else
		{
			return Head();
		}	
	}

	int _Tail()
	{
		if (!Q_Rev)
		{
			return Tail();
		}
				
		else
		{
			return Head();
		}
			
	}

	int Output()
	{
		Node* temp = head;
		
		while (temp != NULL)
		{
			cout << temp -> data << " ";
			temp = temp -> next;
		}
		
		cout << Q_Rev <<endl;

	}

};


int main()
{	
	int n;
	cin>>n;

	string s;
	Queue q;
	
	while (n--)
	{
		long int k;
		cin >> s;
		
			if (s == "back")
			{
				k = q._Tail();
				
				if (k >= 0)
				{
					cout << k << endl;
				}
					
				else
				{
					cout << "No job for Ada? \n";
				}	
			}
			
			else if (s == "front")
			{
				k = q._Head();
				
				if (k >= 0)
				{
					cout << k << endl;
				}
				
				else
				{
					cout << "No job for Ada? \n";
				}
			}
				
			else if (s == "reverse")
			{
				q.reverse();
			}
			
			else if ( s == "toFront")
			{
				cin >> k;
				q.toFront(k);
			}
			
			else if ( s == "push_back" )
			{
				cin >> k;
				q.push_back(k);
			}
			
			cout << n << endl;
	}
	
	return 0;
}

