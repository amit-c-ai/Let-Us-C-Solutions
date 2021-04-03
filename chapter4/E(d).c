#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	float angle, radian;
	printf("Enter the angle in degrees : ");
	scanf("%f", &angle);
	radian = angle * 3.14/180;
	pow(sin(radian),2) + pow(cos(radian), 2)==1 ? printf("\nYes") : printf("\nNo");
	getch();
	return 0;
}
