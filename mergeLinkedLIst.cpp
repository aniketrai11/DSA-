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




void display(struct node* &head)
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


struct node* merge(struct node* &head1,struct node* &head2)
{
	struct node *p1=head1;
	struct node *p2=head2;
    struct node *dummynode;
    struct node *p3=dummynode;
    
    while(p1!=NULL && p2!=NULL)
    {
    	if(p1->data<p2->data)
		{
        	p3->next=p1;
        	p1=p1->next;
        }
    	if(p2->data<p1->data)
    	{
    		p3->next=p2;
    		p2=p2->next;
    		
		}
		p3=p3->next;
    	
	}
	
	while(p1!=NULL)
	{
		p3->next=p1;
		p1=p1->next;
		p3=p3->next;
		
	}
	
	while(p2!=NULL)
	{
		p3->next=p2;
		p2=p2->next;
		p3=p3->next;
		
	}
	return dummynode->next;
	
}










int main()
{
	struct node *head1=NULL;
	struct node *head2=NULL;
	int arr1[]={7,5,4,1};
	int arr2[]={6,3,2};
	for(int i=0;i<4;i++)
	{
		insertionAtfirst(head1,arr1[i]);
	}
		for(int i=0;i<3;i++)
	{
		insertionAtfirst(head2,arr2[i]);
	}



    struct node *newhead=merge(head1,head2);
    display(newhead);
}
	 
	


