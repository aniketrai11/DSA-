#include<iostream>
#include<queue>
using namespace std;
struct Node{
	int data;
	struct Node* left;
	struct Node* right;
	
	Node(int val)
	{
		data=val;
		left=NULL;
		right=NULL;
	}
};


int countNodes(Node* root )
{
	if(root==NULL)
	return 0;
	return countNodes(root->left)+countNodes(root->right)+1;
}
int printLevelOrder(Node* root)
{
	if(root==NULL)
	return -1;
	
	queue<Node*> q;
	q.push(root);
	q.push(NULL);
	int count=0;
	int level=0;
	
	while(!q.empty())
	{
		Node* node=q.front();
		
		q.pop();
		count++;
		
		if(node!=NULL)
		{
			if(node->left)
			q.push(node->left);
			if(node->right)
			q.push(node->right);
		}
		else if(!q.empty())
		{
			q.push(NULL);
			
		}
		
	}
	return count;
	
	
}
int main()
{
	Node* root=new Node(1);
	root->left=new Node(2);
	root->right=new Node(3);
	root->left->left=new Node(4);	
	root->left->right=new Node(5);	
	root->right->left=new Node(6);
	root->right->right=new Node(7);
	cout<<printLevelOrder(root)<<"\n";
	cout<<countNodes(root);
}

