#include<stdio.h>
#include<string.h>
#include<conio.h>
#define inBank for(i=0; i<total; i++)
struct bank{
	char account_no[10];
	char name[30];
	float balance;
};

typedef struct bank bank;

void below_100(bank arr[], int total){
	int i;
	printf("\n");
	fflush(stdin);
	for(i=0; i<total; i++){
		if(arr[i].balance < 100){
			printf("info: ");
			printf("\n\tAccount Number: %s", arr[i].account_no);
			printf("\n\tName: %s", arr[i].name);
		}
		printf("\n");
	}
	printf("press enter");
	getch();
}

void deposit(bank arr[], int total, char *accnt, float amnt){
	int i;
	inBank{
		if(arr[i].account_no == accnt){
			arr[i].balance += amnt;
			printf("\nDeposited. Your balance: %f", arr[i].balance);
		}
	}
}

void withdraw(bank arr[], int total, char *accnt, float amnt){
	int i;

	inBank{
		if((strcmp(arr[i].account_no, accnt))==0){
			printf("hello there this is bank");
			arr[i].balance -= amnt;
			if(arr[i].balance>=100)
				printf("\nDone. Your balance: %f", arr[i].balance);
			else
				printf("\ninsufficient for the specitied withdrawal");
		}
	}
}

int main(){
	int i, total, code;
	float amnt;
	char accnt[10];
	bank  arr[200];
	
	printf("Enter number of customers: ");
	scanf("%d", &total);
	
	for(i=0; i<total; i++){
		printf("Enter data: ");
		printf("\n\tAccount no. : ");
		scanf("%s", arr[i].account_no);
//		printf("%s", arr[i].account_no);
		fflush(stdin);
		printf("\tName: ");
		gets(arr[i].name);
		printf("\tBalance: ");
		scanf("%f", &arr[i].balance);
	}
	system("cls");
	
	below_100(arr, total);   //1.
	
	system("cls");
	
	printf("Form for withdrawal: ");
	printf("\n\tAcct. no. : ");
	scanf("%s", accnt);
	printf("\tamount: ");
	scanf("%f", &amnt);
	printf("\tcode(1/0): ");
	scanf("%d", &code);
	
	if(code == 1)
		deposit(arr, total, accnt, amnt);
	else if(code==0)
		withdraw(arr, total, accnt, amnt);
}
