#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<Windows.h>
#include<malloc.h>

#define Space 32

char* last_name(char *line){
	char temp[20], *p;
	int i, j, l = 0;
	for(i = j = 0; line[i] != '\0'; i++){
		if (line[i] == Space){
			temp[l] = line[j];  /*If Space is encounter so the first letter of the word will saved in the temp*/
			l++;
			temp[l] = Space;   /*after first leter we are giving a space*/
			l++;
			j = i + 1;
		}
	}
	if (line[i] == '\0')
	{
		for (; line[j] != '\0'; j++, l++)
			temp[l] = line[j];
		temp[l] = line[j];
	}
	
/*As if a pointer string cannot be assigned to a simple char variable so,
a pointer of char is made and then assign operation if performed*/

	p = (char*)malloc(sizeof(strlen(temp) + 1));   /*p getting size*/
	strcpy(p, temp);                               /*ading content on p*/
	return p;
}

int main(){
	char *name[10];
	int i = 0, j;
	char ans = 'y', *p, naam[50];
	while (ans != 'n')
	{
		printf("Enter the full name : ");
		gets(naam);
		p = (char*)malloc(sizeof(strlen(naam) + 1));
		strcpy(p, naam);
		name[i] = p;
		p = last_name(name[i]);
		printf("Hello! %s", p);
		printf("\n\nWant to enter another name (y/n) : ");
		fflush(stdin);
		scanf("%c", &ans);
		fflush(stdin);
	}

 	getch();
	return 0;
}
