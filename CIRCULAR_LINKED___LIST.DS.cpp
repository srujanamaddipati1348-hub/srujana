#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};

struct node *head=NULL;

void display()
{
	struct node *temp;
	temp=head;
	if(head==NULL)
	{
		printf("list is empty\n");
		return;
	}
	
	do
	{
		printf("%d->",temp->data);
		temp=temp->next;
	}while(temp!=head);
}

void insert_begin()
{
	struct node *newnode,*temp;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter data:");
	scanf("%d",&newnode->data);
	temp=head;
	   while(temp->next!=head)
	   {
	   	temp=temp->next;
	   }
	newnode->next=head;
	head=newnode;
	temp->next=newnode;
	display();
}
void insert_end()
{
	struct node *newnode,*temp;
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("Enter data:");
	scanf("%d",&newnode->data);
	newnode->next=head;
	   temp=head;
	   while(temp->next!=head)
	      {
	   	    temp=temp->next;
	      }
	    temp->next=newnode;
	display();
}
void insert_pos()
{
	 struct node *newnode,*temp;
	 int pos,i;
	 printf("Enter position:");
	 scanf("%d",&pos);
	 newnode=(struct node*)malloc(sizeof(struct node));
	 printf("Enter data:");
	 scanf("%d",&newnode->data);
	 temp=head;
	 for(i=0;i<pos-1;i++)
	    temp=temp->next;
	newnode->next=temp->next;
	temp->next=newnode;
}
void delete_begin()
{
	struct node *temp,*last;
	last=head;
	    while(last->next!=head)
	    {
	    	last=last->next;
		}
		temp=head;
		head=head->next;
		last->next=head;
		free(temp);
		display();
}
void delete_end()
{
	struct node*temp,*prev;
	temp=head;
	while(temp->next!=head)
	{
		prev=temp;
		temp=temp->next;
	}
	prev->next=head;
	free(temp);
	display();
}
void delete_pos()
{
	struct node*temp,*prev;
	int pos,i;
	printf("Enter position:");
	scanf("%d",&pos);
	temp=head;
	for(i=1;i<pos;i++)
	{
		prev=temp;
		temp=temp->next;
	}
	prev->next=temp->next;
	free(temp);
}
void search()
{
	struct node *temp;
	int key,pos=1,found=0;
	printf("Enter element to search:");
	scanf("%d",&key);
	temp=head;
	do
	{
		if(temp->data==key)
		{
	    	printf("Element found at position %d\n",pos);
	    	found=1;
	    	break;
		}
		temp=temp->next;
		pos++;
	}while(temp!=head);
	if(found==0)
	    printf("Element not found\n");

}
int main()
 {
	struct node *newnode,*temp;
	int n,i;
	printf("enter number of nodes:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("enter data for nodes %d: ",i);
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		if(head==NULL)
		{
			head = newnode;
			newnode->next=head;
			temp = head;
		}
		else
		{
			temp->next=newnode;
			newnode->next=head;
			temp= newnode;
		}
    }
	int choice;
	while(1)
	{
		printf("\n__MENU__\n");
        printf("1.inserBegin\n2.insertEnd\n3.insertPos\n");
        printf("4.deleteBegin\n5.deleteEnd\n6.deletePos\n");
        printf("7.search\n8.exit\n");
        printf("enter choice: ");
	    scanf("%d",&choice);
	    switch(choice)
	    {
	    	case 1: insert_begin();break;
	    	case 2: insert_end();break;
	    	case 3: insert_pos();break;
	    	case 4: delete_begin();break;
	    	case 5: delete_end();break;
	    	case 6: delete_pos();break;
	    	case 7: search();break;
	    	case 8: exit(0);
	    	default: printf("Invalid choice\n");
		}
		
	    
    }
      
}
