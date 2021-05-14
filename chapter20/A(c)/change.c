#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define BUFFER_SIZE 1000

void replaceAll(char *, const char *, const char *);

int main(int argc, char *argv[]){
	char old_word[15], new_word[15], file[15], buffer[BUFFER_SIZE];
	int i, k;
	FILE *fp, *ft;
	if(argc!=4){
		puts("improper number of arguments");
		exit(1);
	}
	strcpy(old_word, argv[1]);
    strcat(old_word, " ");
	strcpy(new_word, argv[2]);
    strcat(new_word, " ");
	strcpy(file, argv[3]);
	
	printf("%s %s %s\n", new_word, old_word, file);
	fp = fopen(file, "r");
	ft = fopen("temp.txt", "w+");
	if(fp==NULL){
		printf("cant't open file\n"); exit(1);
	}
	
    while ((fgets(buffer, BUFFER_SIZE, fp)) != NULL)
    {
        // Replace all occurrence of word from current line
        replaceAll(buffer, old_word, new_word);

        // After replacing write it to temp file.
        fputs(buffer, ft);
    }
	fclose(fp); fclose(ft);
	if(remove(file)!=0){
		printf("error deleting file\n");  //remove old file
	}
	if(rename("temp.txt", file)!=0){
		printf("error renaming file\n");  //rename new file as old file
	}
	printf("Done");
	return 0;
}

void replaceAll(char *str, const char *oldWord, const char *newWord){
    char *pos, temp[BUFFER_SIZE];
    int index = 0;
    int owlen;

    owlen = strlen(oldWord);

    //If oldWord and newWord are same it goes to infinite loop so return from here
    if (!strcmp(oldWord, newWord)) {
        return;
    }


    /*
     * Repeat till all occurrences are replaced. 
     */
    while ((pos = strstr(str, oldWord)) != NULL)
    {
        // Backup current line
        strcpy(temp, str);

        // Index of current found word
        index = pos - str;

        // Terminate str after word found index
        str[index] = '\0';

        // Concatenate str with new word 
        strcat(str, newWord);
        
        // Concatenate str with remaining words after 
        // oldword found index.
        strcat(str, temp + index + owlen);
    }
}


