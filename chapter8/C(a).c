#include<stdio.h>
#include<conio.h>
void check(int);
int main(){
	int year;
	printf("Enter year : ");
	scanf("%d", year);
	check(year);
//	getch();
	return 0;
}
void check(int year){
	printf("hello");
	if(year%400==0)
		printf("\nLeap Year");
	else if(year%100==0)
		printf("nNot a leap year");
	else if(year%4==0)
		printf("\nLeap Year");
	else
		printf("\nNot a leap year");
}
