#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	long int decimal, num, octal=0, reverse=0;
	int  digit;
	printf("Enter an integer : ");
	scanf("%ld", &decimal);
	num=decimal;
	num=abs(num);
	printf("num : %d\n",num);
	while(num!=0){
		digit=num%8;
		num=num/8;
		octal=octal*10+digit;
		printf("%d",digit);
	}
	printf("\noctal:%d",octal);
	printf("\n");
	while(octal!=0){
		digit=octal%10;
		octal=octal/10;
		reverse = 10*reverse + digit;
	}
	if(decimal>=0)
		printf("%d", reverse);
	else
		printf("%d", reverse*-1);
	getch();
	return 0;
}
