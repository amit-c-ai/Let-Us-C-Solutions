#include<stdio.h>
#include<stdbool.h>
#define _BV(x) (1<<x)
typedef unsigned char uc;
typedef unsigned int ui;
void showbits(uc n);
bool checkbits(ui x, ui p, ui n);
int main(void){
	ui x, p, n;
	printf("Enter value of x,p and n : ");
	scanf("%u %u %u", &x, &p, &n);
	if(checkbits(x, p, n))
		printf("true");
	else
		printf("false");
	return 0;
}

bool checkbits(ui x, ui p, ui n){
	int i;
	for(i=p; i>p-n; i--){
		if((x&_BV(i))!=_BV(i))
			return false;
	}
	return true;
}

void showbits(uc n){
	int i;
	uc k;
	for(i=7; i>=0; i--){
		k = n & _BV(i);
		k==0?printf("0"):printf("1");
	}
}
