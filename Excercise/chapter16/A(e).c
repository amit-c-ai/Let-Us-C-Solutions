#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#define space 32
bool isVowel(char s){
	if(s=='a'||s=='e'||s=='i'||
	s=='o'||s=='u'||s=='A'||s=='E'||
	s=='I'||s=='O'||s=='U'){
		return true;
	}
	return false;
}		
#define condition isVowel(p[i]) && isVowel(p[i+1])

void count(char *p, int *add, char *occurances){
	int i, j;
	for(i=0, j=0; p[i]!='\0'; i++){
		if(condition){
			occurances[j] = p[i];
			occurances[j+1] = p[i+1];
			occurances[j+2] = space;
			j=j+3; 
		}
	}
	occurances[j-1]='\0';
}

int main(){
	char line[100], *p, occurances[50];
	int add=0;
	printf("Enter line: ");
	gets(line);
	p = (char *) malloc(strlen(line)+1);
	strcpy(p, line);
	count(p, &add, &occurances[0]);
	printf("count: %d\noccurances: %s", (strlen(occurances)+1)/3, occurances);
	return 0;
}


