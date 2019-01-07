#include<stdio.h>   
#include<conio.h>   

#define maxsize 100
int data[maxsize],n,i,choice; 

void selection_minmax(int  n, int data[]) {
		int i, j, temp, min;
		for (i = 0; i<= n-1; i++) {
			min = i;
			for (j = i+1; j < n; j++) {
				if  (data[j]  <  data[min]) 
					min = j;
			}
			temp  =  data[i];
			data[i]  =  data[min];
			data[min]  =  temp;
		}
	}


void selection_maxmin(int  n, int data[]) {
		int i, j, temp, min;
		for (i = 0; i<= n-1; i++) {
			min = i;
			for (j = i+1; j < n; j++) {
				if  (data[j]  >  data[min]) 
					min = j;
			}
			temp  =  data[i];
			data[i]  =  data[min];
			data[min]  =  temp;
		}
	}

void printarr(int a)
{
  int i;
  for(i=0;i<a;i++)
  {
  printf(" %d ",data[i]);
  }
  }

main(){
	do{

	  printf("\n#########################\n");
	  printf("#                       #\n");
	  printf("# ++ Selection Sort ++  #\n");
	  printf("#     1.Min to Max      #\n");
	  printf("#     2.Max to Min      #\n");
	  printf("#     3.Exit            #\n");
	  printf("#                       #\n");
	  printf("#########################\n\n");
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
				scanf("%4d",&data[i]);   
	  
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
			selection_minmax(n,data);
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
			selection_maxmin(n,data);
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
