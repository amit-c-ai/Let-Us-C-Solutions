#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
	FILE *fs, *ft;
	char source[15], target[15], ch;
	printf("Enter source file name: ");
	scanf("%s", source);
	printf("\nEnter target file name: ");
	scanf("%s", target);
	fs = fopen(source, "r");                //as sourcefile is opened in "r" mode, file must be present there
	if(fs==NULL){
		printf("\ncan't open source file");
		exit(0);
	}
	ft = fopen(target, "w+");             //target file not neccesary need to be present
	if(ft==NULL){
		printf("\ncan't open target file");
		fclose(fs); exit(1);
	}
	while((ch=fgetc(fs))!=EOF){
		if(islower(ch)){
			putc(toupper(ch), ft);
		}
		else{
			putc(ch, ft);
		}
	}
	printf("\nDone");
	fclose(fs); fclose(ft);
	return 0;
}
