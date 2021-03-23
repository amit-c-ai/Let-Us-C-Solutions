#include<stdio.h>
#include<conio.h>
int main(){
	int a, _1st, _2nd, _3rd, _4th, _5th, sum;
	printf("Enter five digit no. : ");
	scanf("%d",&a);
	_5th = a%10;  a=a/10;
	_4th = a%10;  a=a/10;
	_3rd = a%10;  a=a/10;
	_2nd = a%10;  a=a/10;
	_1st = a%10;
	printf("%d\n",_1st);
	printf("%d\n",_2nd);
	printf("%d\n",_3rd);
	printf("%d\n",_4th);
	printf("%d\n",_5th);
	sum = _1st+_2nd+_3rd+_4th+_5th;
	printf("Sum of digits : %d",sum);
	getch();
	return 0;
}
