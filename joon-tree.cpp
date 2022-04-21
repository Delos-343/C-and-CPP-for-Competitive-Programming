
#include <bits/stdc++.h>

using namespace std;


typedef struct node
{
    int data;
    
    struct node* left;
    struct node* right;
    
};


struct node* makeNode(int data) 
{
    struct node* node = (struct node*)malloc(sizeof(struct node));
    
    node -> data = data;
    node -> left = NULL;
    node -> right = NULL;

    return (node);
}


struct node* insert(node* root, int data)
{
    if (root == NULL)
		return makeNode(data);

    if (data < root -> data)
        root -> left = insert(root -> left, data);
        
    else if (data > root -> data)
        root -> right = insert(root -> right, data);

    return root;
}


void postorder(struct node* root)
{
	if (root)
	{
		postorder(root -> left);
		postorder(root -> right);

		cout << root -> data << " ";
	}	
}


void inorder(struct node* root)
{
	if (root)
	{
		inorder(root -> left);

		cout << root -> data << " ";

		inorder(root -> right);
	}	
}


void preorder(struct node* root)
{	
	if (root)
	{
		cout << root -> data << " ";

		preorder(root -> left);
		preorder(root -> right);
	}
}


int main()
{
	
	struct node* root = NULL;
	
	int n;
	cin >> n;
	
	int a;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		root = insert(root, a);
	}

	cout << "\n";

	postorder(root);
	cout << "\n";
	
	inorder(root);
	cout << "\n";

	preorder(root);

}

