#include<stdio.h>
#include<conio.h>
#include<math.h>
void series(float, float *);
int main(){
	float x; float result;
	printf("Enter the value for x : ");
	scanf("%f", &x);
	series(x, &result);
	printf("sin(x) = %f", result);
	getch();
	return 0;				
}
int fact(x){
	int i, product=1;
	for(i=2; i<=x; i++){
		product = product * i;
	}
	return product;
}
void series(float x, float *res){
	int i, j;
	for(i=1, j=2; i<=9, j<=6; i+=2, j++){
		*res = *res + pow(-1, j) * (pow(x, i)/fact(i));
	}
}
