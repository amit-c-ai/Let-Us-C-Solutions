#include<stdio.h>
#include<stdlib.h>
struct date{
	int d, m, y;
};
struct employee{
	int empcode[6];
	char empname[20];
	struct date join_date;
	float salary;
}arr[5];

int main(){
	FILE *record;
	int i;
	char source[15], target[15];
	printf("Enter source file name: ");
	scanf("%s", source);
	record = fopen(source, "r");
	for(i=0; i<5; i++){
		fscanf(record, "%d", &arr[i].empcode);
		fscanf(record, "%s", &arr[i].empname);
//		fgets(arr[i].empname, 20, record);
		fscanf(record, "%d%*c%d%*c%d", &arr[i].join_date.d, &arr[i].join_date.m, &arr[i].join_date.y);
		fscanf(record, "%f", &arr[i].salary);
	}
	fclose(record);
	for(i=0; i<5; i++){
		printf("code: %d  name: %s  date: %d/%d/%d  salary: %f\n", arr[i].empcode, arr[i].empname, arr[i].join_date.d, arr[i].join_date.m, arr[i].join_date.y, arr[i].salary);
	}
	return 0;
}
