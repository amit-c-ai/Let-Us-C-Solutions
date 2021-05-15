#include<stdio.h>
#include<conio.h>
int main(){
	int a, _1st, _2nd, _3rd, _4th, _5th, temp, number;
	printf("Enter a five digit no. : ");
	scanf("%d", &a);
	temp = a;
	_5th = a%10; a=a/10;
	_4th = a%10; a=a/10;
	_3rd = a%10; a=a/10;
	_2nd = a%10; a=a/10;
	_1st = a%10; a=a/10;
	
	number = _5th*10000 + _4th*1000 + _3rd*100 + _2nd*10 + _1st*1;
	printf("original : %d", temp);
	printf("\nreversed : %d", number);
	if(temp==number)
	    printf("\nOriginal and reversed are equal.");
	else
	    printf("\nOriginal and reversed are unequal.");
	getch();
	return 0;
}
