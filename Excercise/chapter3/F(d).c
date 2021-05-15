#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	float a,res;
	printf("Enter a number : ");
	scanf("%f",&a);
	res = abs(a);
	printf("Absolute value : %0.2f",res);
	getch();
	return 0;
}
