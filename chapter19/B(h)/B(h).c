#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	FILE *fs;
	char str[25];
	int total, i, n, count=0;
	fs = fopen("Students.DAT", "w+");
	printf("Enter number of students: ");
	scanf("%d", &total);
	printf("\nEnter names: \n");
	fflush(stdin);
	for(i=0; i<total; i++){
		printf("\tname%d: ", i+1);
		fgets(str, 25, stdin);
		fputs(str, fs);
	}
	fclose(fs);
	printf("\nEnter value of n to display nth name: ");
	scanf("%d", &n);
	fs = fopen("Students.DAT", "r");
	while(fgets(str, 25, fs)!=NULL){
		count++;
		if(count==n){
			str[strlen(str)-1]='\0';
			printf("\n%dth name: %s", n, str);
		}
	}
}
