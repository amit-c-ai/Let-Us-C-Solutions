#include<stdio.h>
#define _BV(x) (1<<x)
typedef unsigned char uc;
void showbits(uc n);
int main(void){
	int n;
	printf("Enter 8-bit number : ");
	scanf("%d", &n);
	showbits(n);
	return 0;
}

void showbits(uc n){
	int i;
	uc k, andmask;
	for(i=7; i>=0; i--){
		andmask = _BV(i);
		k = n & andmask;
		k==0?printf("0"):printf("1");
	}
}
