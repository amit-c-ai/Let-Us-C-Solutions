#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct customer{
	int accno;
	char name[30];
	float balance;
}arr[10];
int main(){
	FILE *fc;
	long int size;
	char cust[10];
	int i;
//	printf("Enter customer file name: ");
//	scanf("%s", &cust);
	fc = fopen("CUSTOMER.DAT", "r");
	if(fc==NULL){
		printf("\ncan't open customer file");
		exit(0);
	}
	fseek(fc, 0, SEEK_END);
	size = ftell(fc);
	rewind(fc);
	printf("size: %ld\n", size);
	for(i=0; i<21; i++){
		fscanf(fc, "%d", &arr[i].accno);         //reads only number, not able to read and '\n' (if used %s instead of %d then it can read '\n')
		fgetc(fc);                               //to skip new line characters
		fgets(arr[i].name, 29, fc);              // it also store '\n' at the end of name
		arr[i].name[strlen(arr[i].name)-1]='\0'; //to erase '\n' character
		fscanf(fc, "%f", &arr[i].balance);
		fgetc(fc);
	}
	fclose(fc);
	for(i=0; i<10; i++){
		printf("account: %d name: %s balance: %f\n", arr[i].accno, arr[i].name, arr[i].balance);
	}
	return 0;
}

//fgets() 
