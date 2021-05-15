#include<stdio.h>
#include"interest.h"
int main(){
	float p, r, t, si, amount;
	printf("Enter principal value, rate and time : ");
	scanf("%f %f %f", &p, &r, &t);
	si = SI(p,r,t);
	amount = AMOUNT(p,si);
	printf("\nSimple interest: %0.2f\nAmount: %0.2f", si, amount);
	return 0;
}
