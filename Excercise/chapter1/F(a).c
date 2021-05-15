#include<stdio.h>
#include<conio.h>
int main(){
	float f;
	printf("Enter the temperature in fahrenheit : ");
	scanf("%f",&f);
	float c=((f-32)*5)/9;
	printf("\nTemperature in Celsius : %f",c);
	getch();
	return 0;
}
