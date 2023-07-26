#include<stdio.h>
#include<malloc.h>
struct node 
{
   int data;
   struct node *next;
};
struct node *start;


void insertionAtfirst(struct node* &head,int ele)
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

void insertionAtlast(struct node* &head,int ele)
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




void display()
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


void evenAfterOdd(struct node* &head)
{
	struct node *odd=start;
	struct node *even=start->next;
	struct node *evenstart=even;
	
	while(odd->next!=NULL && even->next!=NULL)
	{
		odd->next=even->next;
		odd=odd->next;
		even->next=odd->next;
		even=even->next;
		
	}
	
	odd->next=evenstart;
	if(odd->next!=NULL)
	even->next=NULL;
	display();
	
}









int main()
{
	struct node *head=NULL;

	int arr1[]={6,5,4,3,2,1};
	
	for(int i=0;i<6;i++)
	{
		insertionAtfirst(head,arr1[i]);
	}
	
	
    evenAfterOdd(head);
   
}
	 
	


