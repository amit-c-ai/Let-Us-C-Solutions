#include<stdio.h>
#include<conio.h>
#include<math.h>
void Area(float, float, float, float *);
int main(){
	float a, b, c, area;
	printf("Enter the sides of the traingle: ");
	scanf("%f %f %f", &a, &b, &c);
	Area(a, b, c, &area);
	printf("Area: %f", area);
	getch();
	return 0;
}
void Area(float a, float b, float c, float *area){
	float S = (a+b+c)/2;
	*area=sqrt(S*(S-a)*(S-b)*(S-c));
}
