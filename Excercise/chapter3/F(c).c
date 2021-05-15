#include<stdio.h>
#include<conio.h>
int main(){
	float a, b, c, sum;
	printf("Enter the angles of the traingle : ");
	scanf("%f %f %f", &a, &b, &c);
	sum = a+b+c;
	if(sum==180){
		printf("Valid triangle");
	}
	else
	    printf("Invalid triangle");
	getch();
	return 0;	    
}
