#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fs, *ft;
	char source[15], target[20], str[80];
	printf("Enter source file name: ");
	scanf("%s", source);
//	printf("Enter target file name: ");
//	scanf("%s", target);
	fs = fopen(source, "r");
	if(fs==NULL){
		printf("\nCan't open file");
		exit(0);
	}
	while(fgets(str, 79, fs)!=NULL){
		printf("%s\n", str);
	}
//	ft = fopen(target, "a");
//	if(ft==NULL){
//		printf("\ncan't open target file");
//		fclose(fs); exit(1);
//	}
//	while(fgets(str, 79, fs)!=NULL){
//		fputs(str, ft);
//	}
	
	fclose(fs);
	printf("\nDone");
	return 0;
}



