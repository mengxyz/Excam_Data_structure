#include<stdio.h>
#include<conio.h>

	int choice,x[100],n=0,i,j,temp,key,y;

	void binary_search (int x[], int key, int n) {
		int	f, r, mid, found;
		f = 0;
		r = n;
		found = 0;
		while (f <= r && found == 0) {
			mid = (f + r)/2;
			if (key == x[mid]) 
				found = 1;
			else
				if (key > x[mid])
					f = mid + 1;
				else
					r = mid - 1;
		}
		if (key == x[mid]) 
			printf("Found %d", key);
		else
			printf("Not Found %d", key);
	}


main()
{

 
	do{
		printf("\n\n\n\t\t++ MENU ARRAY ++\n\n");
		printf("\n\t1.Add\n");
		printf("\t2.Search (Binary)\n");
		printf("\t3.Exit\n\n");
		printf("\t\tchoice : ");
		scanf("%d",&choice);
		printf("\n");
	switch(choice)
	{
		case 1:
			n++;
				printf("Input number : ");
				scanf("%d",&x[n]);
				printf("\n\t[%d] in array\n",x[n]);
				printf("\n\t%d",n);
				for(i=1;i<=n;i++)
				{
					for(j=i+1;j<=n;j++)
					{
						if(x[i]>x[j])
						{
							temp=x[i];
							x[i]=x[j];
							x[j]=temp;
						}
					}
				}
			printf("\n\n[Min ==> Max] ==>  ");
			for(i=1;i<=n;i++)
				printf("%d  ",x[i]);
			break;
		case 2:
			printf("Input number : ");
			scanf("%d",&key);
			if(n>0){
				binary_search(x,key,n);
			}
			else{
				printf("Not found %d",key);
			}
	}
	
	}while(choice==1||choice==2);
}
