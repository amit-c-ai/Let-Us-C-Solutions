#include<stdio.h>
#include<string.h>
#include<conio.h>
struct student{
		int roll_no, yoJoining; 
		char name[25], department[20], course[10];
	};
	
void print(struct student arr[], int total, int year){
	int i;
	printf("\n");
	for(i=0; i<total; i++){
		if(arr[i].yoJoining == year){
			printf("%s\n", arr[i].name);
		}
	}
}

void dataset(struct student arr[], int total, int roll){
	int i;
	printf("\n");
	for(i=0; i<total; i++){
		if(arr[i].roll_no == roll){
			printf("Data: ");
			printf("\n\tName: %s", arr[i].name);
			printf("\n\tDepartment: %s", arr[i].department);
			printf("\n\tCourse: %s", arr[i].course);
			printf("\n\tYear of Joining: %d", arr[i].yoJoining);
		}
	}
}
int main(){
	int i, total_students, year, roll;
	struct student arr[450];
	
	printf("Enter number of students: ");
	scanf("%d", &total_students);
	
	for(i=0; i<total_students; i++){
		printf("Enter data: ");
		printf("\n\tRoll no. and Year of joining: ");
		scanf("%d %d", &arr[i].roll_no, &arr[i].yoJoining);
		fflush(stdin);
		printf("\tName: ");
		gets(arr[i].name);
		printf("\tDepartment: ");
		gets(arr[i].department);
		printf("\tCourse: ");
		gets(arr[i].course);
	}
	
	system("cls");
	
	printf("Enter year: ");
	scanf("%d", &year);
	print(arr, total_students, year);     //1.
	
	printf("\nEnter roll no. : ");
	scanf("%d", &roll);
	dataset(arr, total_students, roll);   //2.
	
	return 0;
}
