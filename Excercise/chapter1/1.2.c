#include<stdio.h>
#include<conio.h>
int main(){
	float distance;
	printf("Enter distance between two cities : ");
	scanf("%f",&distance);
	printf("\nDistance in meters : %0.2f m\nDistance in feet : %0.2f feet\nDistance in inches : %0.2f inches\nDistance in centimeters : %0.2f cm\n", 1000*distance,3280.84*distance,39370.1*distance,1000*100*distance);
	getch();
	return 0;
}
