#include<stdio.h>
int main(){
	int a, b;
	printf("Enter values of a and b : ");
	scanf(" %d%d ",&a, &b);                  //space at end doesn't work as intended.
	printf("a = %d b= %d", a, b);            //after giving one more input then required it prints correctly
	getch();
	return 0;
}


