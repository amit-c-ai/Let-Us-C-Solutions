#include<stdio.h>
#include<stdlib.h>
struct subs{
	char character;
	char subs;
}charr[20];
int total, check;
int main(){
	
/* 1st part of question */
	
	FILE *fs, *foffset, *fsub;
	char source[15], offset[15], substitution[20], ch;
	int i;
	printf("Enter source file name: ");
	scanf("%s", source);
	fflush(stdin);
	printf("Enter offset file name: ");
	scanf("%s", offset);
	fflush(stdin);
	printf("Enter substitution file name: ");
	scanf("%s", substitution);
	
	fs = fopen(source, "r");
	if(fs==NULL){
		printf("\ncan't open source file");
		exit(0);
	}
	foffset = fopen(offset, "w+");
	while((ch=fgetc(fs))!=EOF){
		fputc(ch+128, foffset);
	}
	printf("\nDone offset\n");
	fclose(fs); fclose(foffset);

/* 2nd part of question */
	
	printf("\nEnter no. of substitutions: ");
	scanf("%d", &total);
	printf("\nEnter specific character for some characters:\n");
	for(i=0; i<total; i++){
		printf("\tcharacter: ");
		fflush(stdin);
		scanf("%c", &charr[i].character);
		printf("\tsubstitution: ");
		fflush(stdin);
		scanf("%c", &charr[i].subs);
	}
	
	fs = fopen(source, "r");
	if(fs==NULL){
		printf("\ncan't open source file");
		exit(0);
	}
	fsub = fopen(substitution, "w+");
	while((ch=fgetc(fs))!=EOF){
		check=0;
		for(i=0; i<total; i++){
			if(ch==charr[i].character){
				fputc(charr[i].subs, fsub);
				check=1;
				break;
			}
		}
		if(check==0)
			fputc(ch, fsub);
	}
	
	fclose(fs); fclose(fsub);
	printf("\nDone substitution\n");
	return 0;
}
