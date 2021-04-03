#include<stdio.h>
#include<conio.h>
int main(){
	int year, flag=0;
	printf("Enter year to check : ");
	scanf("%d", &year);
	((year%400==0) ? printf("\nLeap year") : ((year%100==0) ? printf("\nNot leap year") : ((year%4==0) ? printf("\nLeap year") : printf("\nNot leap year"))));
	getch();
	return 0;	
}
