#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct date{
	int d, m, y;
};
struct employee{
	int empcode[6];
	char empname[20];
	struct date join_date;
	float salary;
}arr[5];

int compareY(const void * a, const void * b){
	struct employee *temp_a = (struct employee *)a;
	struct employee *temp_b = (struct employee *)b;
	return temp_a->join_date.y - temp_b->join_date.y;
}


int main(){
	FILE *record;
	int i;
	char source[15], target[15];
	printf("Enter source file name: ");
	scanf("%s", source);
	record = fopen(source, "r");
	for(i=0; i<5; i++){
		fscanf(record, "%d", &arr[i].empcode); fgetc(record);
//		fscanf(record, "%s", &arr[i].empname);
		fgets(arr[i].empname, 20, record); arr[i].empname[strlen(arr[i].empname)-1]='\0';
		fscanf(record, "%d%*c%d%*c%d", &arr[i].join_date.d, &arr[i].join_date.m, &arr[i].join_date.y); fgetc(record);
		fscanf(record, "%f", &arr[i].salary); fgetc(record);
	}
	fclose(record);
	for(i=0; i<5; i++){
		printf("code: %d  name: %s  date: %d/%d/%d  salary: %f\n", arr[i].empcode, arr[i].empname, arr[i].join_date.d, arr[i].join_date.m, arr[i].join_date.y, arr[i].salary);
	}
	
	qsort(arr, 5, sizeof(struct employee), compareY);printf("In sorted order by year of joining\n\n");
	
	for(i=0; i<5; i++){
		printf("code: %d  name: %s  date: %d/%d/%d  salary: %f\n", arr[i].empcode, arr[i].empname, arr[i].join_date.d, arr[i].join_date.m, arr[i].join_date.y, arr[i].salary);
	}
	
	record = fopen(source, "w");
	for(i=0; i<5; i++){
		fprintf(record, "%d", arr[i].empcode); fputs("\n", record);
		fputs(arr[i].empname, record); fputs("\n", record);
		fprintf(record, "%d/%d%/%d", arr[i].join_date.d, arr[i].join_date.m, arr[i].join_date.y); fputs("\n", record);
		fprintf(record, "%f", arr[i].salary); fputs("\n", record);
	}
	fclose(record);
	return 0;
}
