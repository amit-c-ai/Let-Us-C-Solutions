#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct stud{
	char name[10];
	int age;
}arr[8];

int main(){
	FILE *fp;
	int i;
	char source[10];
	printf("Enter name of file: ");
	scanf("%s", source);
	fp = fopen(source, "rb");
	if(fp==NULL){
		printf("\nCan't open file");
		exit(0);
	}
	for(i=0; fread(&arr[i], sizeof(struct stud), 1, fp) == 1; i++){
		printf("%s %d\n", arr[i].name, arr[i].age);
	}	
	fclose(fp);
}
