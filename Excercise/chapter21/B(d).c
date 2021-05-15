#include<stdio.h>
#define _BV(x) (1<<x)
typedef unsigned char uc;
void showbits(uc n);
int main(void){
	int n;
	printf("Enter 8-bit number : ");
	scanf("%d", &n);
	printf("bits: ");showbits(n);printf("\n");
	if((n&_BV(2))==_BV(2))
		printf("\n3rd bit is ON");
	else
		printf("\n3rd bit is OFF");
	if((n&_BV(5))==_BV(5))
		printf("\n6th bit is ON");
	else
		printf("\n6th bit is OFF");
	if((n&_BV(6))==_BV(6))
		printf("\n7th bit is ON");
	else
		printf("\n7th bit is OFF");
}

void showbits(uc n){
	int i;
	for(i=7; i>=0; i--){
		(n&_BV(i))==0?printf("0"):printf("1");
	}
}
