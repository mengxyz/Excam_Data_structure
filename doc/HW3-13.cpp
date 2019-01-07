#include<stdio.h>
#include<conio.h>
struct list{
	int info;
	struct list *link;
	};
	int item, choice;
main(){
	typedef struct list node;
	node *head=NULL, *chead=NULL, *current=NULL, *temp=NULL, *pred=NULL;

       do{
 
		printf("\n\n\n\t\tCIRCULAR SINGLE LINK LIST\n");
		printf("\n\t1.Create\n");
		printf("\t2.Add\n");
		printf("\t3.Delete\n");
		printf("\t4.Display\n");
		printf("\t5.Search\n");
		printf("\t6.Exit\n\n");
		printf("\t\tchoice : ");
		scanf("%d",&choice);
		printf("\n");
	switch(choice)
	{
		case 1:
			if(head==NULL)
			{
				head=new node;
				head->link=head;
				printf("\n\tCreate head node completed");
			}
			else printf("\n\tYou have already head node");
			break;
		case 2:
			if(head!=NULL)
			{
				if(head->link!=head)
				{
					temp=new node;
					printf("Input info : ");
					scanf("%d",&temp->info);
					if(temp->info<=chead->info)
					{
						temp->link=chead;
						head->link=temp;
						chead=temp;
					}
					if(temp->info>chead->info)
					{
						item=temp->info;
						pred=head;
						current=head->link;
						while(current->info<item&&current!=head)
						{
							pred=current;
							current=current->link;
						}
						if(current==head)
						{
							temp->link=head;
							pred->link=temp;
						}
						if(current!=head)
						{
							temp->link=current;
							pred->link=temp;
						}
					}
					printf("\n\t[%d] in node",temp->info);
				}
				if(head->link==head)
				{
					temp=new node;
					printf("Input info : ");
					scanf("%d",&temp->info);
					temp->link=head;
					head->link=temp;
					chead=temp;
					printf("\n\t[%d] in node",temp->info);
				}
			}
			else printf("\n\tYou must create head node");
			break;
		case 3:
			if(head!=NULL)
			{
				if(head->link==head)
				{
					printf("\n\tNo see info in node");
				}
				if(head->link!=head)
				{
					printf("Input info : ");
					scanf("%d",&item);
					if(item<chead->info)
					{
						printf("\n\tNo see [%d] in node",item);
					}
					if(item>chead->info)
					{
						pred=head;
						current=head->link;
						while(current->info<item&&current!=head)
						{
							pred=current;
							current=current->link;
						}
						if(item!=current->info)
						{
							printf("\n\tNo see [%d] in node",item);
						}
						if(item==current->info)
						{
							pred->link=current->link;
							delete current;
							printf("\n\tDelete[%d]",item);
							while(item==pred->link->info)
							{
								current=pred->link;
								pred->link=current->link;
								delete current;
								printf("\n\tDelete[%d]\n",item);
							}
						}
					}
					while(item==chead->info)
					{
						current=chead;
						chead=current->link;
						head->link=chead;
						delete current;
						printf("\n\tDelete[%d]",item);
					}
				}
			}
			else printf("\n\tYou must create head node");
			break;
		case 4:
			if(head!=NULL)
			{
				if(head->link==head)
				{
					printf("\n\tNo see info in node");
				}
				if(head->link!=head)
				{
					printf("Info in node ==>  ");
					current=chead;
					while(current!=head)
					{
						printf("%d  ",current->info);
						current=current->link;
					}
					printf("\n");
				}
			}
			else printf("\n\tYou must create head node");
			break;
		case 5:
			if(head!=NULL)
			{
				if(head->link==head)
				{
					printf("\n\tNo see info in node");
				}
				if(head->link!=head)
				{
					printf("Input info : ");
					scanf("%d",&item);
					current=chead;
					while(current->info!=item&&current->link!=head)
					{
						current=current->link;
					}
					if(current->info==item)
						printf("\n\tData found");
					else
						printf("\n\tData not found");
				}
			}
			else printf("\n\tYou must create head node");
			break;
		case 6:
			if(head!=NULL)
			{
				if(head->link==head)
				{
					delete head;
					printf("*** Delete head node completed ***\n");
				}
				if(head->link!=head)
				{
					while(head->link!=head)
					{
						current=chead;
						chead=current->link;
						head->link = chead;
						delete current;
					}
					delete head;
					printf("*** Delete all info completed ***\n");
				}
			}
	}
	printf("\n\n\n\n***********************************");
		if(choice==1||choice==2||choice==3||choice==4||choice==5)
			printf("\n*    Press any key to continue    *");
		else if(choice==6)
			printf("\n*\tPress any key to EXIT     *");
		else
		{
			printf("\n*  Please select from menu (1-6)  *");
			choice=1;
		}
	printf("\n***********************************\n");

	}while(choice==1||choice==2||choice==3||choice==4||choice==5);
}
