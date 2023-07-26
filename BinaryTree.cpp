#include<stdio.h>
#include<malloc.h>
struct node{
	int data;
	struct node  *left;
	struct node *right;
};
//Create a new node

struct node* CreateNode(int value)
{
	struct node *newNode;
	newNode=(struct node*) malloc(sizeof(struct node*));
	newNode->data=value;
	newNode->left=NULL;
	newNode->right=NULL;
	return newNode;
	
}

//Insertion At Left Subtree

struct node* insertLeft(struct node* root,int value)
{
	root->left=CreateNode(value);
	return root->left;
	
}

//Insertion At right Subtree

struct node* insertRight(struct node* root,int value)
{
	root->right=CreateNode(value);
	return root->right;
	
}


//traversal 

void inOrderTraversal(struct node* root)
{
	if(root==NULL)
	return ;
	inOrderTraversal(root->left);
	printf("%d", root->data);
	inOrderTraversal(root->right);
		
}

void postOrderTraversal(struct node* root)
{
	if(root==NULL)
	return ;
	postOrderTraversal(root->left);
	postOrderTraversal(root->right);
	printf("%d", root->data);
}

void preOrderTraversal(struct node* root)
{
	if(root==NULL)
	return ;
	printf("%d", root->data);
	preOrderTraversal(root->left);
	preOrderTraversal(root->right);

	
}


int main()
{
	struct node* root = CreateNode(1);
  insertLeft(root, 2);
  insertRight(root, 3);
  insertLeft(root->left, 4);

  printf("Inorder traversal \n");
  inOrderTraversal(root);
  printf("\n");
   printf("postorder traversal \n");
  postOrderTraversal(root);
  printf("\n");
   printf("preorder traversal \n");
  preOrderTraversal(root);
}



