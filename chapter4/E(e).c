#include<stdio.h>
#include<conio.h>
int main(){
	float sal;
	
	printf("Enter the salary :");
	scanf("%f", &sal);
	(sal>=25000&&sal<=40000)? printf("Manager\n") : (sal>=15000&&sal<25000 ? printf("Accountant\n") : printf("Clerk\n"));
	getch();
	return 0;
}
