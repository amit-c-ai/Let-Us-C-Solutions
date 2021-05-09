#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int total_m, total_t;
struct stud{
	int roll;
	char name[30];
}arr[20];
struct trans{
	int roll;
	char code;
}brr[10];
typedef struct stud stud;

int compare(const void * a, const void * b){
	stud *temp_a = (stud *)a;
	stud *temp_b = (stud *)b;
	return temp_a->roll - temp_b->roll;
}

void add(int roll){
	char str[30];
	int i;
	fflush(stdin);
	printf("name of rollno %d: ", roll);
	gets(str);
	arr[total_m].roll = roll;
	strcpy(arr[total_m].name, str);
	total_m=total_m+1;
}

void del(int roll){
	int i;
	for(i=0; arr[i].roll!=roll; i++);
	for(i; i<total_m-1; i++){
		arr[i].roll = arr[i+1].roll;
		strcpy(arr[i].name, arr[i+1].name);
	}
	total_m=total_m-1;	
}

int main(){
	FILE *fm, *ft, *fu;
	int i;
	printf("Enter number of students in master file: ");
	scanf("%d", &total_m);
	fflush(stdin);
	fm = fopen("master.DAT", "r");
	if(fm==NULL){
		printf("can't open master file"); exit(0);
	}
	for(i=0; i<total_m; i++){
		fscanf(fm, "%d", &arr[i].roll);
		fseek(fm, 1, SEEK_CUR);
		fgets(arr[i].name, 30, fm);
		arr[i].name[strlen(arr[i].name)-1]='\0';
	}fclose(fm);

	printf("\nEnter number of students in transaction file: ");
	scanf("%d", &total_t);
	fflush(stdin);
	ft = fopen("transaction.DAT", "r");
	if(ft==NULL){
		printf("\ncan't open transaction file"); exit(1);
	}
	for(i=0; i<total_t; i++){
		fscanf(ft, "%d", &brr[i].roll);
		fseek(fm, 1, SEEK_CUR);
		brr[i].code = fgetc(ft);
		fgetc(ft);
		if(brr[i].code=='A')
			add(brr[i].roll);
		else if(brr[i].code=='D')
			del(brr[i].roll);
	}fclose(ft);	
	
	qsort(arr, total_m, sizeof(struct stud), compare);  //sorting by roll no. (see compare  function)
	
	fu = fopen("updated.DAT", "w+");
	for(i=0; i<total_m; i++){
		fprintf(fu, "%d ", arr[i].roll);
		fputs(arr[i].name, fu);fputc('\n', fu);
	}
	return 0;
}
