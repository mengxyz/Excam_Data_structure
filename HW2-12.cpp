    #include <stdio.h>
     
    main(){
    	int i ,j,s,m1,m2;
    	do{
    		printf("\tMENU\n");
    		printf("1 [+]\n");
    		printf("2 [-]\n");
    		printf("3 [*]\n");
    		printf("4 Exit\n");
    		printf(" : ");
    		scanf("%d",&s);
    		
    		if(s==1 || s==2){
    			printf("Input Matrix zize [n x n]: ");
    	scanf("%d",&m1);
    	scanf("%d",&m2);
    	int metrix1[m1][m2];
    	int metrix2[m1][m2];
    	for(i = 0;i<=m1-1;i++){
    		for(j = 0;j<=m2-1;j++){
    			printf("Input Metrix 1 [%d][%d] : ",i,j);
    			scanf("%d",&metrix1[i][j]);
						}
										} 	
										
										printf("\n");
										
    	for(i = 0;i<=m1-1;i++){
    		for(j = 0;j<=m2-1;j++){
    			printf("Input Metrix 2 [%d][%d] : ",i,j);
    			scanf("%d",&metrix2[i][j]);
						}
										}
										
										if(s==1){
											int metrixsum[m1][m2];
										for(i = 0;i<=m1-1;i++){
    		for(j = 0;j<=m2-1;j++){
    			metrixsum[i][j] = metrix1[i][j] + metrix2[i][j];
						}
										}
										printf("\n");
										printf("[+]\n");
										
										for(i = 0;i<=m1-1;i++){
    		for(j = 0;j<=m2-1;j++){
    			printf("%d   ",metrixsum[i][j]);
						}
						printf("\n");
										}
										}
										
										
										if(s==2){
											int metrixsum1[m1][m2];
										for(i = 0;i<=m1-1;i++){
    		for(j = 0;j<=m2-1;j++){
    			metrixsum1[i][j] = metrix1[i][j] - metrix2[i][j];
						}
										}
										
										printf("\n");
										printf("[-]\n");
										for(i = 0;i<=m1-1;i++){
    		for(j = 0;j<=m2-1;j++){
    			printf("%d   ",metrixsum1[i][j]);
						}
						printf("\n");
										}
										}					
						}

if(s==3){
	printf("input metrix size N x N : ");
	scanf("%d",&m1);
	scanf("%d",&m2);
	int metrix1[m1][m2];
	int multiply[m2][1];
	int metrixsum2[m1][m2];
	
	for(i = 0;i<=m1-1;i++){
    		for(j = 0;j<=m2-1;j++){
    			printf("Input Metrix 1 [%d][%d] : ",i,j);
    			scanf("%d",&metrix1[i][j]);
						}
										}	
																	
										for(i = 0;i<=m1-1;i++){
    		for(j = 0;j<=m2-1;j++){
    			printf("%d   ",metrix1[i][j]);
						}

						printf("\n");
										}
										
										for(i = 0;i<=m2-1;i++){
    			printf("Input multiply [%d][%d] : ",i,0);
    			scanf("%d",&multiply[i][0]);
										}	
										
										for(i = 0;i<=m2-1;i++){
    		for(j = 0;j<=0;j++){
    			printf("%d   ",multiply[i][j]);
						}
						printf("\n");
										}
										
										printf("\n");
										
										for(i = 0;i<=m2-1;i++){
    		for(j = 0;j<=m1-1;j++){
    			metrixsum2[j][i] = metrix1[j][i] * multiply[i][0];
						}
										}
										
										for(i = 0;i<=m1-1;i++){
    		for(j = 0;j<=m2-1;j++){
    			printf("%d   ",metrixsum2[i][j]);
						}
						printf("\n");
										}
}
					}while(s!=4);

				}
    
