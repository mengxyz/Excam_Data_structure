#include<stdio.h>
#include<conio.h>
#include<string.h>
struct list{
	char info[20];
	struct list *llink;
	struct list *rlink;
	};
	char item[20], del;
	int choice,i;
main(){
	typedef struct list node;
	node *head=NULL, *current=NULL, *temp=NULL, *pred=NULL, *tail=NULL;

	do{
		printf("\n\n\n\t\tCIRCULAR DOUBLE LINK LIST\n");
		printf("\n\t1.Create");
		printf("\n\t2.Add");
		printf("\n\t3.Delete");
		printf("\n\t4.Display");
		printf("\n\t5.Search");
		printf("\n\t6.Exit\n\n");
		printf("\t\tChoice : ");
		scanf("%d",&choice);
		printf("\n");
	switch(choice)
	{
		case 1:
			if(head==NULL)
			{
				head=new node;
				head->llink=head;
				head->rlink=head;
				printf("\n\tCreate complete");
			}
			else printf("\n\tYou don't create head again");
			break;
		case 2:
			if(head!=NULL)
			{
				if(head->rlink!=head)
				{
					current=head;
					while(current->rlink!=head){
					current=current->rlink;
					}
					temp=new node;
					printf("Input data : ");
					scanf("%s",temp->info);
					current->llink->rlink=current;
					current->rlink=temp;
					temp->llink=current;
					temp->rlink = head;
					head->llink=temp;
					tail=temp;
					printf("\n\t[ %s] in node",temp->info);
				}
				if(head->rlink==head)
				{
					temp=new node;
					printf("Input info : ");
					scanf("%s",temp->info);
					head->rlink=temp;
					temp->llink=head;
					temp->rlink=head;
					head->llink=temp;
					head->rlink=temp;
					printf("\n\t[ %s ] in node",temp->info);
				}
			}
			else printf("\n\tYou must create head node");
			break;
		case 3:
			if(head!=NULL)
			{
				if(head->rlink==head)
				{
					printf("\n\tNo see info in node");
				}
				if(head->rlink!=head)
				{
					printf("Input info : ");
					scanf("%s",item);
					del='n';
					pred=head->rlink;
					while(pred!=head)
					{
						if(strcmp(head->rlink->info,item)!=0)
						{
							current=head->rlink;
							while((strcmp(current->info,item)!=0)&&current!=head)
							{
								current=current->rlink;
							}
							if((strcmp(current->info,item)!=0)&&del!='y')
							{
								printf("\n\tNo see [ %s ] in node",item);
								break;
							}
							if(strcmp(current->info,item)==0)
							{
								if(current->rlink==head)
								{
									tail=current->llink;
									current->llink->rlink=head;
									head->llink=tail;
									delete current;
									printf("\n\tDelete [ %s ]",item);
								}
								else
								{
									current->llink->rlink=current->rlink;
									current->rlink->llink=current->llink;
									delete current;
									printf("\n\tDelete [ %s ]",item);
								}
								del='y';
							}
						}
						if(strcmp(head->rlink->info,item)==0)
						{
							current=head->rlink;
							head->rlink=current->rlink;
							if(head->rlink==head)
							{
								head->llink=head;
								head->rlink=head;
							}
							else
							{
								head->rlink->llink=head;
								head->rlink=current->rlink;
							}
							delete current;
							printf("\n\tDelete [ %s ]",item);
							del='y';
						}
						pred = pred->rlink;
					}
				}
			}
			else printf("\n\tYou must create head node");
			break;
		case 4:
			if(head!=NULL)
			{
				if(head->rlink==head)
				{
					printf("\n\tNo see info in node");
				}
				if(head->rlink!=head)
				{
					printf("Info in node ==>  ");
					current=head->rlink;
					while(current!=head)
					{
						printf("[ %s ]  ",current->info);
						current=current->rlink;
					}
					printf("\n");
				}
			}
			else printf("\n\tYou must create head node");
			break;
		case 5:
			if(head!=NULL)
			{
				if(head->rlink==head)
				{
					printf("\n\tNo see info in node");
				}
				if(head->rlink!=head)
				{
					printf("Input info : ");
					scanf("%s",item);
					current=head->rlink;
					while((strcmp(current->info,item)!=0)&&current->rlink!=head)
						current=current->rlink;
					if(strcmp(current->info,item)==0)
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
				if(head->rlink==head)
				{
					delete head;
					printf("*** Delete head node completed ***\n");
				}
				if(head->rlink!=head)
				{
					while(head->rlink!=head)
					{
						current=head->rlink;
						head->rlink=current->rlink;
						head->rlink=head->rlink;
						delete current;
					}
					delete head;
					printf("*** Delete all info completed ***\n");
				}
			}
	}
		printf("\n\n\n\n******************************************");
		if(choice==6){
			printf("\n*\t   Press any key to EXIT         *");
		}
		printf("\n******************************************\n");
	//getch();
	}while(choice==1||choice==2||choice==3||choice==4||choice==5);
}
