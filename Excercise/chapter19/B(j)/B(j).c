#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<Windows.h>

#define FOUND (strcmp(word, "a") == 0 || strcmp(word, "an") == 0\
				|| strcmp(word, "the") == 0 || strcmp(word, "A") == 0\
				|| strcmp(word, "An") == 0 || strcmp(word, "The") == 0)

void delart(char*);

int main(){
	delart("file.txt");
	return 0;
}

void delart(char *file){
	FILE *fp, *nf;
	int i;
	char word[20];
	fp = fopen(file, "r+");
	nf = fopen("newfile.txt", "w");
	if(fp == NULL){
		puts("\nCannot open the file.\n");
		exit(1);
	}
	for(i = 0; 1; i++){
		word[i] = fgetc(fp);
		if(word[i] == EOF)
			break;
		if(word[i] == ' '){
			word[i] = '\0';
			if(FOUND){
				/*Replacing the word with the space*/
				strcpy(word, " ");
				fputs(word, nf);
			}
			else{
				fputs(word, nf);
				fputc(' ', nf);
			}
			i = -1;
			/*After the loop ends, i incremented by 1,
			so -1 becomes 0 and	next character saved
			in the word[0]*/
		}
	}
	printf("Done");
}
