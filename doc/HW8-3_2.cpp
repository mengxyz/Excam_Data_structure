#include<stdio.h>   
#include<conio.h>   

#define maxsize 100
char data[maxsize];
int n,i,choice; 

void bubble_minmax(int  n, char data[]) {
		int i, j, temp;
		for (i = 1; i< n; i++) {
			for (j = n-1; j >= i; j--) {
				if  (data[j]  <  data[j-1]) {
					temp  =  data[j];
					data[j]  =  data[j-1];
					data[j-1]  =  temp;
				}
			}
		}
	}

void bubble_maxmin(int  n, char data[]) {
		int i, j, temp;
		for (i = 1; i< n; i++) {
			for (j = n-1; j >= i; j--) {
				if  (data[j]  >  data[j-1]) {
					temp  =  data[j];
					data[j]  =  data[j-1];
					data[j-1]  =  temp;
				}
			}
		}
	}

void printarr(int a)
{
  int i;
  for(i=0;i<a;i++)
  {
  printf(" %c ",data[i]);
  }
  }

main(){
	do{

	  printf("\n########################\n");
	  printf("#                      #\n");
	  printf("#  ++ Bubble Sort ++   #\n");
	  printf("#     1.Min to Max     #\n");
	  printf("#     2.Max to Min     #\n");
	  printf("#     3.Exit           #\n");
	  printf("#                      #\n");
	  printf("########################\n\n");
	  printf("Enter choice from menu:\n");
	  printf("=> ");
	  scanf("%d",&choice);

	  if(choice==1||choice==2){

		printf("\n\nHow many numbers to process :=> ");
		scanf("%d",&n);
		printf("\n");
		  for(i=0;i<=n-1;i++)   
	  
			  {   
	  
				printf("Enter value No. %d :=> ",i+1); 
				data[i]=getche();
				printf("\n"); 
	  
			  }  
	  }

	switch(choice)
	{
		case 1:
			printf("\n==========================");
			printf("\n\t  RESULTS ");
			printf("\n==========================");
			printf("\n");
			printf("The Values before sorting ");
			printf("\n");
			printarr(n);
			bubble_minmax(n,data);
			printf("\n\n");
			printf("The Values after sorting");
			printf("\n");
			printarr(n);
			break;
		case 2:
			printf("\n==========================");
			printf("\n\t  RESULTS ");
			printf("\n==========================");
			printf("\n");
			printf("The Values before sorting ");
			printf("\n");
			printarr(n);
			bubble_maxmin(n,data);
			printf("\n\n");
			printf("The Values after sorting");
			printf("\n");
			printarr(n);
			break;
	}
			 

	 printf("\n\n\n\n+++++++++++++++++++++++++++++++++++");
		if(choice==1||choice==2)
			printf("\n+    Press any key to continue   +");
		else if(choice==3)
			printf("\n+\tPress any key to EXIT     +");
		else
		{
			printf("\n+  Please select from menu (1-3)  +");
			choice=1;
		}
	printf("\n+++++++++++++++++++++++++++++++++++\n");
	getch();
	}while(choice==1||choice==2);
//getch();
}//end program.
