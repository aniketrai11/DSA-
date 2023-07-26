#include<stdio.h>
struct node{
	int data;
	struct node  *left;
	struct node *right;
	
	
	node(int val)
	{
		data=val;
		left=NULL;
		right=NULL;
	}
};

int search(int inorder[],int start,int end,int curr)
{
	for(int i=start;i<=end;i++)
	{
		if(inorder[i]==curr)
		return i;
	}
	return -1;
}

 node* BuildTree(int preorder[],int inorder[],int start,int end)
{
	static int idx=0;
	if(start>end)
	return NULL;
	int curr=preorder[idx];
	idx++;
	
	node* Node=new node(curr);
	if(start==end)
	return Node;
	
	
	int pos=search(inorder,start,end,curr);
	Node->left=BuildTree(preorder,inorder,start,pos-1);
	Node->right=BuildTree(preorder,inorder,pos+1,end);
	
	return Node;
}

void inOrderTraversal(struct node* root)
{
	if(root==NULL)
	return ;
	inOrderTraversal(root->left);
	printf("%d", root->data);
	inOrderTraversal(root->right);
		
}

int main()
{
	
	int preorder[]={1,2,3,4,5};
	int inorder[]={4,2,1,5,3};
	 node *root=BuildTree(preorder,inorder,0,4);
	inOrderTraversal(root);
	
}
