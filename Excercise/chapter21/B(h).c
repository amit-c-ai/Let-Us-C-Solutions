#include<stdio.h>
#define _BV(x) (1<<x)
typedef unsigned char uc;
typedef unsigned int ui;
void showbits(uc n);
int main(void){
	ui n, left, right;
	printf("Enter 8-bit unsigned integer : ");
	scanf("%u", &n);
	if((n&_BV(2))==_BV(2)){
		printf("3rd bit is ON :  ");showbits(n);printf("\n");
		n = n & ~_BV(2);
		printf("putted OFF :     ");showbits(n);printf("\n");
	}
	else{
		printf("3rd bit is OFF : ");
		showbits(n);printf("\n");
	}
	if((n&_BV(4))==_BV(4)){
		printf("5th bit is ON :  ");showbits(n);printf("\n");
		n = n & ~_BV(4);
		printf("putted OFF :     ");showbits(n);printf("\n");
	}
	else{
		printf("5th bit is OFF : ");
		showbits(n);printf("\n");
	}
	return 0;
}

void showbits(uc n){
	int i;
	for(i=7; i>=0; i--){
		(n&_BV(i))==0?printf("0"):printf("1");
	}
}
