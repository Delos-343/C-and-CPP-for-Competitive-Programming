
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



struct Node
{
    int data;
    
    struct Node* left;
    struct Node* right;
    
};


struct Node* makeNode(int data);


struct Node* sort(int arr[], int start, int end)
{
    if (start > end)
      return NULL;
  	
    int mid = (start + end) / 2;
    
    struct Node *root = makeNode(arr[mid]);
  
    root -> left =  sort(arr, start, mid-1);
    root -> right = sort(arr, mid+1, end);
  
    return root;
}


struct Node* makeNode(int data) 
{
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    
    node -> data = data;
    node -> left = NULL;
    node -> right = NULL;

    return node;
}


void preorder(struct Node *node)
{
    if(node == NULL)
        return;
    
    printf("%d ", node->data);
    
    preorder(node -> left);
    preorder(node -> right);
}


void inorder(struct Node *node)
{
    if(node == NULL)
        return;
    
    inorder(node -> left);
        
    printf("%d ", node->data);
        
    inorder(node -> right);
}


void postorder(struct Node *node)
{
    if(node == NULL)
        return;
    
    postorder(node -> left);
    postorder(node -> right);
    
    printf("%d ", node->data);
}


int main()
{
    int n, i;
    scanf("%d", &n);
    
    int arr[n];
    scanf("%d", &arr);
    
    struct Node *root = sort(arr, 0, n-1);
    
    preorder(root);
    printf("\n");
    
    inorder(root);
    printf("\n");
    
    postorder(root);
    
    return 0;
}

