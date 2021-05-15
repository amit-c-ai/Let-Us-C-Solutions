#include<stdio.h>
#include<string.h>
int max;
char currDate[12];

struct employee{
	int code;
	char name[20];
	int date_oj[3];
};

typedef struct employee employee;

void tenureEmployees(employee arr[], int currDate[]){
	int i;
	for(i=0; i<max; i++){
		if(currDate[2]-arr[i].date_oj[2] >= 3){
			if(currDate[2]-arr[i].date_oj[2]>3){
				printf("%s\n", arr[i].name);
			}
			else{
				if(arr[i].date_oj[1]-currDate[1]<=0){
					if(arr[i].date_oj[1]-currDate[1]<0){
						printf("%s\n", arr[i].name);
					}
					else{
						if(arr[i].date_oj[0]-currDate[0]<=0)
							printf("%s\n", arr[i].name);
					}
				}
				
			}
		}
	}
}

int main(){
	employee arr[20];
	int i, currDate[3];
	printf("Enter number of employee: ");
	scanf("%d", &max);
	
	for(i=0; i<max; i++){
		printf("\nEnter detail: ");
		printf("\n\tCode: ");
		scanf("%d", &arr[i].code);
		fflush(stdin);
		printf("\tName: ");
		gets(arr[i].name);
		printf("\tDate(dd mm yyyy): ");
		scanf("%d %d %d", &arr[i].date_oj[0], &arr[i].date_oj[1], &arr[i].date_oj[2]);
	}
	
	printf("\nEnter current date(dd mm yyyy): ");
	scanf("%d %d %d", &currDate[0], &currDate[1], &currDate[2]);
	
	tenureEmployees(arr, currDate);

	return 0;
}
