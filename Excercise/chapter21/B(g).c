#include<stdio.h>
#define _BV(x) (1<<x)
typedef unsigned char uc;
typedef unsigned int ui;
void showbits(uc n);
int main(void){
	ui n, left, right;
	printf("Enter 8-bit unsigned integer : ");
	scanf("%u", &n);
	printf("original n: ");showbits(n);printf("\n");
	/* to set odd bits to 1 we must OR it with 01010101 i.e. 85 */
	n = n|85;
	printf("Modified n: ");showbits(n);
	return 0;
}

void showbits(uc n){
	int i;
	for(i=7; i>=0; i--){
		(n&_BV(i))==0?printf("0"):printf("1");
	}
}
