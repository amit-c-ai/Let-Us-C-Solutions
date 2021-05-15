#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
int total;
struct blood{
	char name[20];
	char address[40];
	int age;
	int blood_type;
}arr[10];

void add_info(struct blood);
void display(char*);
void lessthen25(char*);

int main(){
	int i;
	printf("Enter number of records: ");
	scanf("%d", &total);
	printf("\nEnter data:\n");
	for(i=0; i<total; i++){
		fflush(stdin);
		printf("\tName: ");
		gets(arr[i].name); 
		printf("\tAddress: ");
		gets(arr[i].address);  fflush(stdin);
		printf("\tAge: ");
		scanf("%d", &arr[i].age);
		printf("\tBlood type: ");
		scanf("%d", &arr[i].blood_type); fflush(stdin);
		
		add_info(arr[i]);
	}
	
	lessthen25("donor.DAT");
	return 0;
}

void add_info(struct blood data){
	FILE *fp;
	fp = fopen("donor.DAT", "r+");
	if(fp == NULL)
		fp = fopen("donor.DAT", "w");
	fseek(fp, 0, SEEK_END);
	fprintf(fp, "%-20s", data.name);
	fprintf(fp, "%-40s ", data.address);
	fprintf(fp, "%-2d ", data.age);
	fprintf(fp, "%d\n", data.blood_type);
	fclose(fp);
}

void display(char *file){
	FILE *fp;
	fp = fopen(file, "r");
	char str[20];
	while(fgets(str, 19, fp) != NULL)
		printf("%s", str);
	fclose(fp);
}

void lessthen25(char *file){
	FILE *fp;
	struct blood data;
	int age;
	char str[68];
	fp = fopen(file, "r");
	while(fgets(str, 67, fp) != NULL){
		age = (str[61] - 48) * 10 + (str[62] - 48);
		if (age < 25)
			if(str[64]=='2')
				printf("\n%s", str);
	}
	fclose(fp);
}
