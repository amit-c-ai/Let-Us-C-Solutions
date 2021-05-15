#include<stdio.h>
#define _BV(x) (1<<x)
typedef unsigned char uc;
typedef unsigned int ui;
void showbits(uc n);
int main(void){
	ui n, left, right;
	printf("Enter 8-bit integer : ");
	scanf("%d", &n);
	left = n>>4;
	printf("original n:      ");showbits(left);printf(" ");showbits(n);printf("\n");
//	showbits(left>>4);showbits(left);printf("\n");
	right = n<<4;
//	showbits(right>>4);showbits(right);printf("\n");
	n = left | right;
	printf("exchanged bytes: ");showbits(n>>4);printf(" ");showbits(n);
	return 0;
}

void showbits(uc n){
	int i;
	for(i=3; i>=0; i--){
		(n&_BV(i))==0?printf("0"):printf("1");
	}
}
