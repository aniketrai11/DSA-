#include<stdio.h>
#include<malloc.h>
struct node 
{
   int data;
   struct node *next;
};
struct node *start;


void insertionAtfirst(int ele)
{
	struct node *temp;
	temp=(struct node*) malloc(sizeof(struct node*));
	temp->data=ele;
	if(start==NULL)
	{
	  temp->next=NULL;
	}
	else
	{
		temp->next=start;
	}
	start=temp;
}

void insertionAtlast(int ele)
{
	struct node *temp,*p;
	temp=(struct node*)malloc(sizeof(struct node*));
	temp->data=ele;
	p=start;
	if(start==NULL)
	{
		start=temp;	
	}
	else{
		
		while(p->next!=NULL)
		{
			p=p->next;
		}
		p->next=temp;
	}
}   




void traversal()
{
	struct node *traverse;
	traverse=start;
	if(start==NULL)
	printf("list is empty");
	else{
		while(traverse!=NULL)
		{
			printf(" %d",traverse->data);
			traverse=traverse->next;
		}
	}
}


void deletionAtFirst()
{
	struct node *temp;
	temp=(struct node*) malloc(sizeof(struct node*));
	if(start==NULL)
	{
		printf("list is empty");
	}
	else
	{
		temp=start;
		start=start->next;
		free (temp);
	}
	
}


void deletionAtLast()
{
	struct node *p,*q;
	p=(struct node*)malloc(sizeof(struct node*));
	q=(struct node*)malloc(sizeof(struct node*));
	if(start==NULL)
	  printf("list is empty");
	else
	{
		p=start;
		while(p->next!=NULL)
		{
			q=p;
			p=p->next;
		}
		if(p==start)
		  start=NULL;
		else
		{
			q->next=NULL;
		}  
	}  
	free(p);
	free(q);
	}

void search(int key)
{
		struct node *search;
		int flag=0;
		search=(struct node*) malloc(sizeof(struct node*));

	search=start;
	if(start==NULL)
	printf("list is empty");
	else {
		while(search!=NULL)
		{
			if(search->data==key)
			{
				flag=1;
			}
			
			search=search->next;
		}
	}
	if(flag==1)
	printf("\nelement  found");
	else
	printf("element not found");
}


void reverseLL(){
	struct node *currptr=start;
	struct node *prevptr=NULL;
	struct node *nextptr;
	
	while(currptr!=NULL)
	{
		nextptr=currptr->next;
		currptr->next=prevptr;
		
		prevptr=currptr;
		currptr=nextptr;
	}
	start=prevptr;
	traversal(); 

}

node* RecursiveReverse(node* &start)
{
	
	if(start==NULL || start->next==NULL){
		return start; 
	}
	
	struct node *newstart=RecursiveReverse(start->next);
	start->next->next=start;
	start->next=NULL;
	return newstart;
	
}


node* reverseknode(node* &start,int k)
{
	
	struct node *prevptr=NULL;
	struct node *currptr=start;
	struct node *nextptr;
	int count=0;
	
	
	while(currptr!=NULL && count<k)
	{
		nextptr=currptr->next;
		currptr->next=prevptr;
		
		prevptr=currptr;
		currptr=nextptr;
		count++;
		
		
	}
	if(nextptr!=NULL){
	start->next=reverseknode(nextptr,k);
}
	return prevptr;
}



 int main()
{
	 start=NULL;
	 int n,choise;
	do{
		printf("1.) InsertAtfirst\n");
		printf("2.) InsertAtlast\n");
		printf("3.) DeleteATfirst\n");
		printf("4.) DeleteATlast\n");
		printf("5.) Display\n");
		printf("6.) search\n");
		printf("7.) ReverseLL\n");
		printf("8.) recursiveReverseLL\n");
		printf("9.) reverseKnode\n");
		printf("10.) Exit\n");
		printf("What is your choise : ");
		scanf("%d",&choise);
		
		switch(choise){
			case 1: {
					printf("\nEnter the element : ");
					scanf("%d",&n);
					insertionAtfirst(n);
					break;
					}
			case 2: {
					printf("\nEnter the element : ");
					scanf("%d",&n);
					insertionAtlast(n);
					break;
					}
			case 3: {
					deletionAtFirst();
					break;
					}		
		
		    case 4: {
					deletionAtLast();
					break;
					}	
			case 5: {
					traversal();
					break;
					}
			case 6: {
				printf("\nEnter the element to search : ");
					scanf("%d",&n);
					search(n);
					break;
					}
			
			case 7: {reverseLL();
			          break;
			
					}
			case 8:{
				start= RecursiveReverse(start);
				traversal();
			}		
			case 9:{
			int k=2;
			start=reverseknode(start, k);
			traversal();
				break;
			}
			case 10:{
				break;
			}		
			default :
			printf("Please choose correct option .\n");					
		}
	}
	while(choise != 10);
}
	 
	


