#include<stdio.h>
#include<conio.h>
struct list{
	int info;
	struct list *link;
	};
main(){
	typedef struct list node;
	node *f=NULL,*r=NULL,*temp=NULL,*current=NULL;
	int choice,num,del;
	do{ 
		printf("\n\n\n\t\tQUEUE\n");
		printf("\n\t1.Insert");
		printf("\n\t2.Delete");
		printf("\n\t3.Exit\n\n");
		printf("\t\tChoice : ");
		scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			if(r==NULL)
			{
				r=new node;
				printf("\n\nInput number : ");
				scanf("%d",&num);
				r->info=num;
				r->link=NULL;
				f=r;
				printf("\n\t[%d] in queue",num);
			}
			else
			{
				temp=new node;
				printf("\n\nInput number : ");
				scanf("%d",&num);
				temp->info=num;
				temp->link=NULL;
				r->link=temp;
				r=temp;
				printf("\n\t[%d] in queue",num);
			}
			break;
		case 2:
			if(f==NULL)
			{
				printf("\n\t***Queue Underflow***");
			}
			else
			{
				if(f==r)
				{
					del=f->info;
					current=f;
					f=r=temp=NULL;
				}
				else
				{
					del=f->info;
					current=f;
					f=f->link;
				}
				delete current;
				printf("\n\tDelete [%d]",del);
			}
			break;
		case 3:
			if(f!=NULL)
			{
				while(f->link!=NULL)
				{
					current=f;
					f=current->link;
					delete current;
				}
				delete f;
				printf("\n\n*** Delete all data completed ***");
			}
	}
	if(choice==1||choice==2)
	{
		printf("\n\n\nData ==>  ");
		current=f;
		while(current!=NULL)
		{
			printf("%d  ",current->info);
			current=current->link;
		}
		if(f==NULL)
		{
			printf("Empty Queue");
		}
	}
	printf("\n\n\n\n***********************************");
		if(choice==1||choice==2)
			printf("\n*    Press any key to continue    *");
		else if(choice==3)
			printf("\n*\tPress any key to EXIT     *");
		else
		{
			printf("\n*  Please select from menu (1-3)  *");
			choice=1;
		}
	printf("\n***********************************\n");
	getch();
	}while(choice==1||choice==2);
}
