
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


// player registry

void player(int ID)
{
    if(ID == -1)  // The value '-1' denotes a loss
    {
        printf("Tidak ada pemenang\n");
        return;
    }
    
    switch(ID)
    {
        case 1: printf("Elpis\n");
                break;
                
        case 2: printf("Leonard\n");
                break;
                
        case 3: printf("Haza\n");
                break;
                
        case 4: printf("Pupuro\n");
                break;
                
        case 5: printf("Horus\n");
                break;
                
        case 6: printf("Xiwangmu\n");
                break;
                
        case 7: printf("Nuwa\n");
                break;
                
        case 8: printf("Yog\n");
                break;
                
        case 9: printf("Giemsa\n");
                break;
                
        case 10: printf("Reimu\n");
                break;
                
        case 11: printf("Cang Bi\n");
                break;
                
        case 12: printf("Radha\n");
                break;
                
        case 13: printf("Aurora\n");
                break;
                
        case 14: printf("Astrid\n");
                break;
                
        case 15: printf("Ralph\n");
                break;
                
        case 16: printf("Shamash\n");
                break;
                
        case 17: printf("Enlil\n");
                break;
                
        case 18: printf("Marduk\n");
                break;
                
        case 19: printf("Veronica\n");
                break;
                
        case 20: printf("Marisa\n");
                break;
                
        case 21: printf("Spencer\n");
                break;
                
        case 22: printf("Diamond\n");
                break;
                
        case 23: printf("Amber\n");
                break;
                
        case 24: printf("Jade\n");
                break;
                
        case 25: printf("Sapphire\n");
                break;
                
        case 26: printf("Ruby\n");
                break;
                
        case 27: printf("Lyndis\n");
                break;
                
        case 28: printf("Florina\n");
                break;
                
        case 29: printf("Fiora\n");
                break;
                
        case 30: printf("Sakuya\n");
                break;
                
        case 31: printf("Farina\n");
                break;
                
        case 32: printf("Nino\n");
                break;
                
        case 33: printf("Renault\n");
                break;
                
        case 34: printf("Eirika\n");
                break;
                
        case 35: printf("Vanessa\n");
                break;
                
        case 36: printf("Tana\n");
                break;
                
        case 37: printf("Syrene\n");
                break;
                
        case 38: printf("Amelia\n");
                break;
                
        case 39: printf("Joshua\n");
                break;
                
        case 40: printf("Alice\n");
                break;
                
        case 41: printf("Hansekyo\n");
                break;
                
        case 42: printf("Dwuaykicong\n");
                break;
                
        case 43: printf("NETral\n");
                break;
                
        case 44: printf("iNSANiTY\n");
                break;
                
        case 45: printf("Vinseks\n");
                break;
                
        case 46: printf("Aiedail\n");
                break;
                
        case 47: printf("Heisser\n");
                break;
                
        case 48: printf("MAXiMUSE\n");
                break;
                
        case 49: printf("p03tato\n");
                break;
                
        case 50: printf("Youmu\n");
                break;
                
        case 51: printf("Ikta\n");
                break;
                
        case 52: printf("Franz\n");
                break;
                
        case 53: printf("Zephiel\n");
                break;
                
        case 54: printf("Idunn\n");
                break;
                
        case 55: printf("Shanna\n");
                break;
                
        case 56: printf("thea\n");
                break;
                
        case 57: printf("Juno\n");
                break;
                
        case 58: printf("Yaisyeky\n");
                break;
                
        case 59: printf("Gerik\n");
                break;
                
        case 60: printf("Mayumi\n");
                break;
                
        case 61: printf("Cecilia\n");
                break;
                
        case 62: printf("Sophia\n");
                break;
                
        case 63: printf("Douglas\n");
                break;
                
        case 64: printf("Duessel\n");
                break;
    }
    
    
    /* YO THESE NAMES  LMAO  - Legit sounds like
      (50%) discount of M.K. from Giant Hypermarket */
       
}



// data[0] for p_ID, data[1] for p_damage

int i, data[2][100];


typedef struct avlNODE {
    
	int data;
	int id_player;
	int damage;
	
	struct avlNODE *left, *right;
	
	int height;
	
} AVLNode;


typedef struct AVL_tree {
    
	AVLNode *root;
	
	unsigned int size;
	
} AVL;


AVLNode* createNode(int value)
{
	AVLNode *newNode = (AVLNode*)malloc(sizeof(AVLNode));
	
	newNode->data = value;
	
	newNode->id_player = -1;
	
	newNode->damage = -1;
	
	newNode->height = 1;
	
	newNode->left = newNode->right = NULL;
	
	return newNode;
}


AVLNode* search(AVLNode * root, int value)
{
	while (root != NULL)
	{
		if (value < root->data)
			root = root->left;
			
		else if (value > root->data)
			root = root->right;
			
		else
			return root;
	}
	return root;
}


int getH(AVLNode* node)
{
	if(node==NULL)
		return 0; 
		
	return node->height;
}


int max(int a, int b)
{
    
    /* terniary operator : return 'a' if 'a>b' is true,
       return 'b', if false */
       
	return (a > b) ? a : b;
}


AVLNode* rightRo(AVLNode * pivotNode)
{
	
	AVLNode* newParent = pivotNode->left;
	
	pivotNode->left = newParent->right;
	
	newParent->right = pivotNode;
	
	pivotNode->height = max(getH(pivotNode->left), getH(pivotNode->right)) + 1;
	
	newParent->height = max(getH(newParent->left), getH(newParent->right)) + 1;
	
	return newParent;
}


AVLNode * leftRo(AVLNode * pivotNode)
{
	
	AVLNode * newParent = pivotNode->right;
	
	pivotNode->right = newParent->left;
	
	newParent->left = pivotNode;
	
	pivotNode->height = max(getH(pivotNode->left), getH(pivotNode->right)) + 1;
				
	newParent->height = max(getH(newParent->left), getH(newParent->right)) + 1;
	
	return newParent;
}


AVLNode* leftCaseRo(AVLNode * node)
{
    // left-left
	return rightRo(node);
}


AVLNode* rightCaseRo(AVLNode * node)
{
    // right-right
	return leftRo(node);
}


AVLNode* leftRightCaseRo(AVLNode * node)
{
    // left-right
	node->left = leftRo(node->left);
	
	return rightRo(node);
}


AVLNode* rightLeftCaseRo(AVLNode * node)
{
    // right-left
	node->right = rightRo(node->right);
	
	return leftRo(node);
}


int getBalanceFactor(AVLNode * node)
{
	if(node==NULL)
		return 0;
		
	return getH(node->left) - getH(node->right);
}


AVLNode* insert_AVL(AVL * avl, AVLNode * node, int value)
{
	
	if(node==NULL)
		return createNode(value);
		
	if(value < node->data)
		node->left = insert_AVL(avl, node->left, value);
		
	else if(value > node->data)
		node->right = insert_AVL(avl, node->right, value);
	
	node->height= 1 + max(getH(node->left), getH(node->right)); 
	
	int balanceFactor = getBalanceFactor(node);
	
	if(balanceFactor > 1 && value < node->left->data)
		return leftCaseRo(node);
		
	if(balanceFactor > 1 && value > node->left->data)
		return leftRightCaseRo(node);
		
	if(balanceFactor < -1 && value > node->right->data)
		return rightCaseRo(node);
		
	if(balanceFactor < -1 && value < node->right->data)
		return rightLeftCaseRo(node);
	
	return node;
}


AVLNode* findMinNode(AVLNode *node)
{
	AVLNode *currNode = node;
	
	while (currNode && currNode->left != NULL)
		currNode = currNode->left;
		
	return currNode;
}


AVLNode* remove_AVL(AVLNode* node, int value)
{
	if(node==NULL)
		return node;
		
	if(value > node->data)
		node->right=remove_AVL(node->right, value);
		
	else if(value < node->data)
		node->left=remove_AVL(node->left, value);
		
	else
	{
		AVLNode *temp;
		
		if((node->left == NULL)||(node->right == NULL))
		{
			temp = NULL;
			
			if(node->left == NULL) temp = node->right;
			
			else if(node->right == NULL) temp = node->left;
			
			if(temp==NULL)
			{
				temp = node;
				node = NULL;
			}
			
			else
				*node = *temp; 
			
			free(temp);
		}
		
		else
		{
			temp = findMinNode(node->right);
			
			node->data = temp->data;
			
			node->right = remove_AVL(node->right, temp->data);
		} 
	}
	
		if(node==NULL)
		    return node;
	
	node->height = max(getH(node->left), getH(node->right)) + 1;
	
	int balanceFactor= getBalanceFactor(node);
	
	if (balanceFactor > 1 && getBalanceFactor(node->left) >= 0) 
		return leftCaseRo(node);
	
	if (balanceFactor > 1 && getBalanceFactor(node->left) < 0) 
		return leftRightCaseRo(node);
	
	if (balanceFactor < -1 && getBalanceFactor(node->right) <= 0) 
		return rightCaseRo(node);
	
	if (balanceFactor < -1 && getBalanceFactor(node->right) > 0) 
		return rightLeftCaseRo(node);
	
	return node;
}


void avl_init(AVL * avl)
{
	avl->root = NULL;
	
	avl->size = 0;
}


bool avl_isEmpty(AVL * avl)
{
	return avl->root == NULL;
}


bool avl_find(AVL *avl, int value)
{
	AVLNode *temp = search(avl->root, value);
	
	if (temp == NULL)
		return false;
	
	if (temp->data == value)
		return true;
		
	else
		return false;
}


void avl_insert(AVL * avl, int value)
{
	if(! avl_find(avl, value))
	{
		avl->root = insert_AVL(avl, avl->root, value);
		
		avl->size++;
	}
	
}
	
void avl_remove(AVL * avl, int value)
{
	if(avl_find(avl, value))
	{
		avl->root= remove_AVL(avl->root, value);
		
		avl->size--;
	}
	
}


void preorder(AVLNode * root)
{
	if (root)
	{
		preorder(root->left);
		
		printf("%d height = %d\n", root->data, root->height);
		
		preorder(root->right);
	}
}


//function for (X vs Y) via inorder
void sign_player(AVLNode *node)
{
    AVLNode *temp;
    
    if(node == NULL || node->damage != -1)
        return;
    
    
    sign_player(node->left);
 
    if(node->left == NULL && node->damage == -1)
    {
    	// 1.1 value of data '-3' to denote node with players
    	
        temp = createNode(-3);
        
        temp->damage = data[1][i];
        
        temp->id_player = data[0][i];
        
        node->left = temp;
        
        i++;
    }
    
    if(node->right == NULL && node->damage == -1)
    {
    	// 1.2 value of data -3 to denote node with players
    	
        temp= createNode(-3);
        
        temp->damage = data[1][i];
        
        temp->id_player = data[0][i];
        
        node->right = temp;
        
        i++;
    }
    
    sign_player(node->right);
}


// function to run the fight via postorder
void SMASH(AVLNode * root)
{
    if (root)
    {
    	// If damage = -1, then the fight hasn't started yet
    	
        if(root->damage == -1)
            SMASH(root->left);
        
        if(root->damage == -1);
            SMASH(root->right);
    }
    
    if(root)
    {
    	// If damage = -1 then the fight will use the given node
    	
        if(root->damage == -1)
        {
        	//This node indicates no winners : -1
        	
            if(root->left->damage == root->right->damage)
            {
                printf("Pemenang pertarungan ke-%d: Tidak ada pemenang\n", i);
                
                i++;
                
                root->damage = 0;
                
                root->id_player = 0;
            }
            
            // Winners on the left - FATALITY
            
            else if (root->left->damage > root->right->damage)
            {
                printf("Pemenang pertarungan ke-%d: ", i);
                
                i++;
                
                player(root->left->id_player);
                
                root->damage = root->left->damage - root->right->damage;
                
                root->id_player = root->left->id_player;
            }
            
            // Winners on the right - FATALITY
            
            else
            {
                printf("Pemenang pertarungan ke-%d: ", i);
                
                i++;
                
                player(root->right->id_player);
                
                root->damage = root->right->damage - root->left->damage;
                
                root->id_player = root->right->id_player;
            }
        }
    }
}


bool flag = true;


void check_balance(AVLNode *pivot)
{
	if(pivot != NULL && flag == true)
	{
		int bal_factor = getBalanceFactor(pivot);
		
		if(bal_factor > 1 || bal_factor < -1)
		{
			printf("NO\n");
			
			flag = false;
			
			return;
		}
		
		else if (bal_factor <= 1 && bal_factor >= -1)
		{
			check_balance(pivot->left);
			
			check_balance(pivot->right);
		}
	}
	
	if(flag == true)
	{
		printf("YES\n");
		
		flag = false;
		
		return;
	}
}
	
int main()
{
	AVL avl1;
	avl_init(&avl1);
	
	int N, id1, dmg;
	scanf("%d",&N);
	
	int j, k;
	
	
	// Create blank spaces for N-1 competition (ignoring 3rd place)
	
	for(j=1; j<N; j++)
	{
		avl_insert(&avl1, j);
	}
	
	
	// Store spaces for player data
	
	for(j=0; j<N; j++)
	{
		scanf("%d %d", &id1, &dmg);
		
		data[0][j] = id1;
		
		data[1][j] = dmg;
	}
	
	
	// Initialize i for usage on function : sign_player
	
	i = 0;
	sign_player(avl1.root);
	
	
	// Initialize i to count n fights 
	
	i = 1;
	SMASH(avl1.root);
}

