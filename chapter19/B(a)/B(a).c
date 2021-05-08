#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct stud{
	char name[10];
	int age;
}arr[8];
int i=0;

int compare(const void * a, const void * b){
	struct stud *temp_a = (struct stud *)a;
	struct stud *temp_b	= (struct stud *)b;
	return strcmp(temp_a->name, temp_b->name);
}

int main(){
	FILE *fp;
	int k=0;
	char source[10];
	printf("Enter name of file: ");
	scanf("%s", source);
	fp = fopen(source, "r");
	if(fp==NULL){
		printf("\nCan't open file");
		exit(0);
	}
	
	while(fscanf(fp,"%s %d", arr[i].name, &arr[i].age)!=EOF){
		i++;
	}
	fclose(fp);
	
	qsort(arr, i, sizeof(struct stud), compare);

	for(k=0; k<i; k++){
		printf("%s %d\n", arr[k].name, arr[k].age);
	}
	return 0;	
}
