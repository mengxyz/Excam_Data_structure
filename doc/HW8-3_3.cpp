#include <stdio.h>
#include<stdlib.h>
#include<string.h>
void selection(int  n, char data[]) {
		int i, j, temp, min;
		for (i = 0; i <= n-1; i++) {
			
			min = i;
			for (j = i+1; j < n; j++) {
				if  (data[j]  <  data[min]) 
					min = j;
			}
			temp  =  data[i];
			data[i]  =  data[min];
			data[min]  =  temp;
		}
		printf("min - max -> ");
		for(int i = 0 ;i<n;i++){
		printf("%c",data[i]);
	}
	}


void revert_selection(int  n, char data[]) {
		int i, j, temp, max;
		for (i = 0; i <= n-1; i++) {
			max = i;
			for (j = i+1; j < n; j++) {
				if  (data[j]  >  data[max]) 
					max = j;
			}
			temp  =  data[i];
			data[i]  =  data[max];
			data[max]  =  temp;
		}
		printf("max - min -> ");
		for(int i = 0 ;i<n;i++){
		printf("%c",data[i]);
	}
	}
	

main () {
	char s[20];
	printf("Input String : ");
	scanf("%s",&s);
	int n = strlen(s);
	selection(n,s);
	printf("\n");
	revert_selection(n,s);
}
