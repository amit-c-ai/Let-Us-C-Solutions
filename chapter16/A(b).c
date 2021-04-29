#include<stdio.h>
#include<string.h>
#define isVowel novowel[i]=='a'||novowel[i]=='e'||novowel[i]=='i'||\
		novowel[i]=='o'||novowel[i]=='u'||novowel[i]=='A'||novowel[i]=='E'||\
		novowel[i]=='I'||novowel[i]=='O'||novowel[i]=='U'
		
int main(){	
	char novowel[80];
	int i, j;
	printf("Enter the sentence: ");
	gets(novowel);
	
	for(i=0; i<strlen(novowel); i++){
		if(isVowel){
			for(j=i; j<strlen(novowel); j++){
				novowel[j]=novowel[j+1];
			}
		}
	}
	
	printf("\nRemoved vowels: %s", novowel);
	getch();
	return 0;
}
