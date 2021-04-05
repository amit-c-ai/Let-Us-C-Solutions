#include<stdio.h>
#include<conio.h>
int main(){
	int num, positive=0, negative=0, zero=0, flag;
	while(1){
		printf("Enter the number : ");
		scanf("%d", &num);
		if(num>0)
			positive++;
		else if(num<0)
			negative++;
		else
			zero++;
			
		printf("\nShow Results? (y/n) : ");
		scanf(" %c", &flag);
		if(flag=='y' || flag=='Y')
			break;
	}
	printf("\nPositive numbers : %d", positive);
	printf("\nNegative numbers : %d", negative);
	printf("\nZeros : %d", zero);
	
	getch();
	return 0;
}
