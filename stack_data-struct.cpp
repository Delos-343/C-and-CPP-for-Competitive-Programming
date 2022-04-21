
#include <bits/stdc++.h>

using namespace std;


typedef struct s_Node
{
	int data;
	struct s_Node *next;
} s_Node;


typedef struct stack_s
{
	s_Node *top;
	unsigned size;
}Stack;


bool stack_Empty (Stack *stack)
{
	return (stack -> top == NULL);
}


void push (Stack *stack, int value)
{
	s_Node *newNode = (s_Node*) malloc (sizeof(s_Node));
	
	if (newNode)
	{
		stack -> size++;
		newNode -> data = value;
		
		if (stack_Empty(stack))
		{
			newNode -> next = NULL;
		}
		
		else
		{
			newNode -> next = stack -> top;
		}
		
		stack -> top = newNode;
	}
}


void pop (Stack *stack)
{
	if (!stack_Empty(stack))
	{
		s_Node *temp = stack -> top;
		stack -> top = stack -> top -> next;
		free (temp);
		stack -> size--;
	}
}


int s_pop (Stack *stack)
{
	if (!stack_Empty(stack))
	{
		return stack -> top -> data;
	}
	
	return 0;
}

int main ()
{
	int a, n;
	cin >> a >> n;
	
	// Your code(s)
	
	return 0;
}

