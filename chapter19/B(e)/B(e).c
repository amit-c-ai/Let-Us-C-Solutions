#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct customer{
	int accno;
	char name[30];
	float balance;
}arr[10];

struct trans{
	int accno;
	char tran_type;
	float amount;
}arr2[10];

void deposit(int account, float amnt){
	FILE *fc;
	int i;
	long int pos;
	fc = fopen("CUSTOMER.DAT", "r+");
	if(fc==NULL){
		printf("\ncan't open customer file");
		exit(1);
	}
	for(i=0; i<10; i++){
		fscanf(fc, "%d", &arr[i].accno);         //reads only number, not able to read and '\n' (if used %s instead of %d then it can read '\n')
		fgetc(fc);								//to skip new line characters                              
		fgets(arr[i].name, 29, fc);              // it also store '\n' at the end of name
		arr[i].name[strlen(arr[i].name)-1]='\0'; //to erase '\n' character
		pos = ftell(fc);
		fscanf(fc, "%f", &arr[i].balance);
		fgetc(fc);
		if(arr[i].accno==account){
			fseek(fc, -1*(ftell(fc)-pos), SEEK_CUR);
			fprintf(fc, "%0.2f", arr[i].balance+amnt); 
			break;
		} 		
	}
	fclose(fc);
}

void withdraw(int account, float amnt){
	FILE *fc;
	int i;
	long int pos;
	fc = fopen("CUSTOMER.DAT", "r+");
	if(fc==NULL){
		printf("\ncan't open transaction file");
		exit(1);
	}
	for(i=0; i<10; i++){
		fscanf(fc, "%d", &arr[i].accno);         //reads only number, not able to read and '\n' (if used %s instead of %d then it can read '\n')
		fgetc(fc);								//to skip new line characters                              
		fgets(arr[i].name, 29, fc);              // it also store '\n' at the end of name
		arr[i].name[strlen(arr[i].name)-1]='\0'; //to erase '\n' character
		pos = ftell(fc);
		fscanf(fc, "%f", &arr[i].balance);
		fgetc(fc);
		if(arr[i].accno==account){
			if(arr[i].balance-amnt>100){
				fseek(fc, -1*(ftell(fc)-pos), SEEK_CUR);
				fprintf(fc, "%0.2f", arr[i].balance-amnt);
				break;				
			}
			else{
				printf("\n%s: Not enough money to withdraw", arr[i].name);
				break;
			}
		} 		
	}
	fclose(fc);
}

int main(){
	FILE *fc, *ft;
	long int size;
	char cust[10];
	int i, total_trans;
	printf("\nEnter number of transactions: ");
	scanf("%d", &total_trans);
	ft = fopen("TRANSACTION.DAT", "r");
	if(fc==NULL){
		printf("\ncan't open transaction file");
		exit(0);
	}		
	for(i=0; i<total_trans; i++){
		fscanf(ft, "%d", &arr2[i].accno); fgetc(ft);
		arr2[i].tran_type = fgetc(ft); //fgetc(ft);
		fscanf(ft, "%f", &arr2[i].amount); //fgetc(ft);
	}
	fclose(ft);
	for(i=0; i<total_trans; i++){
		if(arr2[i].tran_type=='D')
			deposit(arr2[i].accno, arr2[i].amount);
		else if(arr2[i].tran_type=='W')
			withdraw(arr2[i].accno, arr2[i].amount);
	}

	return 0;
}


