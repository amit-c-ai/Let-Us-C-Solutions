#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	float x, sum=0;
	int i;
	printf("Enter value of x : ");
	scanf("%f", &x);
	sum=sum+((x-1)/x);
	for(i=2; i<=7; i++){
		sum=sum+ (1/2)*pow((x-1)/x, i);
	}
	printf("%f", sum);
	getch();
	return 0;
}
