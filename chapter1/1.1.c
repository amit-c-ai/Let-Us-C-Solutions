#include<stdio.h>
#include<conio.h>
int main(){
	float bsalary,printf;
	float Dallowance,Rallowance,gross;
	printf("Enter basic salary : ");
	scanf("%f",&bsalary);
	Dallowance=(40*bsalary)/100;
	Rallowance=(20*bsalary)/100;
	gross=bsalary+Dallowance+Rallowance;
	printf("Gross salary = %f",gross);
	getch();
	return 0;
}

