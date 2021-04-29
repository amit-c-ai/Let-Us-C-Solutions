#include<stdio.h>
#include<string.h>
#define isThe (line[i]=='T'&&line[i+1]=='h'&&line[i+2]=='e')||(line[i]=='t'\
				&&line[i+1]=='h'&&line[i+2]=='e')
		
int main(){	
	char line[80];
	int i, j;
	printf("Enter the sentence: ");
	gets(line);
	
	for(i=0; i<strlen(line); i++){
		if(isThe){
			for(j=i; j<strlen(line); j++){
				line[j]=line[j+3];
			}
		}
	}
	
	printf("\nRemoved the: %s", line);
	getch();
	return 0;
}
