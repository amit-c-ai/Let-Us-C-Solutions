#include<stdio.h>
#include<conio.h>
int main(){
	float a, b, c;
	printf("Enter three numbers : ");
	scanf("%f %f %f", &a, &b, &c);
	(a>b ? (a>c ? printf("greatest : %f", a) : printf("greatest : %f", c)) : (b>c ? printf("greatest : %f", b) : printf("greatest : %f", c)));
	getch();
	return 0;
}
