#include<stdio.h>
#include<stdlib.h>
struct batsman{
	char name[20];
	int age;
	int matches;
	int avgRuns;
};

typedef struct batsman batsman;

batsman arr[20];

int comparator(const void * a, const void * b){
	return (*(int *)a - *(int *)b);
}

int main(){
	int total, i;
	printf("Enter number of batsman: ");
	scanf("%d", &total);
	
	for(i=0; i<total; i++){
		printf("\nEnter detail: ");
		printf("\n\tName: ");
		fflush(stdin);
		gets(arr[i].name);
		printf("\tAge: ");
		scanf("%d", &arr[i].age);
		printf("\tMatches played: ");
		scanf("%d", &arr[i].matches);
		printf("\tAverage runs: ");
		scanf("%d", &arr[i].avgRuns);	
	}
	
	
	qsort(arr, total, sizeof(batsman), comparator);
	
	printf("\nSorted detail: ");
	
	for(i=0; i<total; i++){

		printf("\n\tName: %s", arr[i].name);
		printf("\tAge: %d", arr[i].age);
		printf("\tMatches played: %d", arr[i].matches);
		printf("\tAverage runs: %d", arr[i].avgRuns);	
	}
	
	return 0;
}
