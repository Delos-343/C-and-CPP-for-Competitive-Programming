
#include <bits/stdc++.h>

using namespace std;


typedef struct node
{
	int data;
    struct node *left;
    struct node *right;
};

node* newNode(int data)
{
   node *temp = new node;
   
   temp -> data = data;
   
   temp -> left = NULL;
   temp -> right = NULL;
   
   return temp;
}


node* insert( node* root, int data)
{
    if (root == NULL) return newNode(data);

    if (data < root -> data)
        root -> left = insert(root -> left, data);
        
    else if (data > root -> data)
        root -> right = insert(root -> right, data);

    return root;
}


void traverse(node *root)
{
   if (root == NULL)
      return;
      
   queue <node *> que;
   que.push(root);
   
   while (que.empty() == false)
   {
      unsigned int size;
      
      while (size > 0)
	  {
         node *node = que.front();
         
         cout << node -> data << "\n";
         
         que.pop();
         
         if (node -> left != NULL)
            que.push(node -> left);
            
         if (node -> right != NULL)
            que.push(node -> right);
            
         size--;
      }
   }
}


int main()
{
   node *root = NULL;
   
   int T;
   cin >> T;
   
   float Ti;
   
   for (int i = 0; i < T; i++)
   {
   		cin >> Ti;
   		root = insert(root, Ti);
   	
   		while (cin >> Ti)
   		{
   			int val = 0;
   			
   			if (Ti == -1)
   				break;
   		
   			if (!(cin >> val))
   				continue;
		
			else if (val > -1)
				Ti++;
		
			else if (val < -1)
				Ti++;
			
			else
				return val;
    }	}
   
   traverse(root);
   
   return 0;
}

