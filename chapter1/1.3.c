#include<stdio.h>
#include<conio.h>
int main(){
	float m1,m2,m3,m4,m5,aggregate;
	printf("Enter marks in 5 subjects : ");
	scanf("%f %f %f %f %f",&m1,&m2,&m3,&m4,&m5);
	aggregate=m1+m2+m3+m4+m5;
	printf("Aggregate marks : %0.1f \n Percentage obtained : %0.3f",aggregate,aggregate*0.2);
	getch();
	return 0;
}
