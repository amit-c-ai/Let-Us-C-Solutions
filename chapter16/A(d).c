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
		/*If Sace if encounter so the first letter of the word will saved in the temp*/
			temp[l] = line[j];
			l++;
			temp[l] = Space;/*after first leter we are giving a space*/
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
a pointer
 of char is made and then assign peration if performed*/
	p = (char*)malloc(sizeof(strlen(temp) + 1));/*p getting size*/
	strcpy(p, temp);/*ading content on p*/
	return p;
/*assigning p to the name[i] in man function as this function returns char pointer*/
}

int main(){
	char *name[10];
	int i = 0, j;
	char ans = 'y', *p, naam[30];
	while (ans == 'y')
	{
		puts("\nEnter the full name : ");
		gets(naam);
		p = (char*)malloc(sizeof(strlen(naam) + 1));
		strcpy(p, naam);
		name[i] = p;
		name[i] = last_name(name[i]);
		printf("\nWant to enter another name (y/n) : ");
		scanf("%c", &ans);
		i++;
		while (getchar() != '\n');
		/*So that we can get the next name, otherwise 
		\n will be saved in the buffer. (fflush(stdin) don't woirk)*/
		if (i > 9)/*Names cannot be more than 10*/
			break;
	}
	if (i >= 10)/*If trying to enter names more than 10*/
		puts("\nNo more names can be entered");
		//system("cls");
	puts("\n\t\tName in the given format.");
	for (j = 0; j < i; j++)
			puts(name[j]);
 	getch();
	return 0;
}
