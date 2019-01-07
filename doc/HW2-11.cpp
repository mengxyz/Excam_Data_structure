#include<stdio.h>
#include<conio.h>
main(){
	char name[16][10],ans;
	int i,j,data[16][3],x[15],max=-32768,min=32767,maxthai=-32768,minthai=32767,
		maxmath=-32768,minmath=32767,maxcom=-32768,mincom=32767,o=0;
	float sum=0,total=0,t=0,m=0,c=0,thai=0,math=0,com=0,t1=0,m1=0,c1=0;
	do{
	for(i=0;i<2;i++){
		printf("Std NO [%d]\n",i);
		printf("Input your name : ");
		scanf("%s",name[i]);
		printf("\nScore : [1]=Thai [2]=Math [3]=Computer\n\n");
		sum=0;
		for(j=1;j<=3;j++){
			printf("Input score [%d] : ",j);
			scanf("%d",&data[i][j]);
			t=0;
			m=0;
			c=0;
			if(j==1){
				t=data[i][j];
				if(data[i][j]>maxthai)
					maxthai=data[i][j];
				if(data[i][j]<minthai)
					minthai=data[i][j];
			}
			if(j==2){
				m=data[i][j];
				if(data[i][j]>maxmath)
					maxmath=data[i][j];
				if(data[i][j]<minmath)
					minmath=data[i][j];
			}
			if(j==3){
				c=data[i][j];
				if(data[i][j]>maxcom)
					maxcom=data[i][j];
				if(data[i][j]<mincom)
					mincom=data[i][j];
			}
			
			t1+=t;
			m1+=m;
			c1+=c;
			sum+=data[i][j];
			x[i]=sum;
		}
		if(sum>max){
			max=sum;
		}
		if(sum<min){
			min=sum;
		}		
		total+=sum;
		thai=t1;
		math=m1;
		com=c1;
		o++;

	}
	printf("\n*************************************************************");
	printf("\n*                                                           *");
	printf("\n*                       Score Display                       *");
	printf("\n*                                                           *");
	printf("\n*                                                           *");
	printf("\n*************************************************************");
	printf("\n\n\tName");
	printf("\t\tThai");
	printf("\tMath");
	printf("\tCom");
	printf("\tTotal");
	printf("\n\n");
//***Score***
	for(i=0;i<o;i++){
		printf("\t%s",name[i]);
		for(j=1;j<=3;j++){
			if(j==1){
				printf("\t\t%d",data[i][j]);
			}
			if(j==2){
				printf("\t%d",data[i][j]);
			}
			if(j==3){
				printf("\t%d",data[i][j]);
			}
		}
		printf("\t%d",x[i]);
		printf("\n");
	}
	printf("\n************************************************************");
//***Min***
	printf("\n\n\tMin ==>");
	printf("\t\t%d",minthai);
	printf("\t%d",minmath);
	printf("\t%d",mincom);
	printf("\t%d",min);
//***Max***
	printf("\n\tMax ==>");
	printf("\t\t%d",maxthai);
	printf("\t%d",maxmath);
	printf("\t%d",maxcom);
	printf("\t%d",max);
//***Average***
	printf("\n\tAverage ==>");
	printf("\t%.2f",thai/o);
	printf("\t%.2f",math/o);
	printf("\t%.2f",com/o);
	printf("\t%.2f",total/o);
//***EXIT***
	printf("\n\n************************************************************");
		do{
		printf("\n\nDo you want to continue [y/n] : ");
		ans=getche();
		printf("\n***You type is wrong***");
		}while(ans!='y'&&ans!='n');
	}while(ans!='n');
}
