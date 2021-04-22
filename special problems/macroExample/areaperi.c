#include<stdio.h>
#include"areaperi.h"                           //if header file included in " " , then compiler first searches for header file in current directory and then in specified list of directories  
int main(){
//	int base, height;
	float side1, side2, side3, base, height, side, radius;
	
	printf("Enter the sides of triangle: ");
	scanf("%f %f %f", &side1, &side2, &side3);	
	printf("Perimeter of triangle: %f", PTRIANGLE(side1, side2, side3));	
	
	printf("\n\nEnter base and height of triangle: ");
	scanf("%f %f", &base, &height);
	printf("Area of triangle: %f", ATRIANGLE(base, height));
	
	printf("\n\nEnter side of square: ");
	scanf("%f", &side);
	printf("Perimeter of square: %f\nArea of square: %f", PSQUARE(side), ASQUARE(side));
	
	printf("\n\nEnter radius of circle: ");
	scanf("%f", &radius);
	printf("Perimeter of circle: %f\nArea of circle: %f", PCIRCLE(radius), ACIRCLE(radius));
	return 0;
}
