#include<stdio.h>
#include<conio.h>
int add(int);
int main(){
	int num=25;
	printf("Sum of first 25 natural numbers are : %d", add(num));
	getch();
	return 0;
}
int add(sum){
	if(sum==1)
		return 1;
	else
		return sum + add(sum-1);
}
