#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	int i, digit, sum, temp_i;
	for(i=1; i<=500; i++){
		temp_i=i;
		sum = 0;
		while(temp_i != 0){
			digit = temp_i%10; 
			temp_i/=10;
			sum = sum + pow(digit, 3);
		}
		if(sum==i)
			printf("%d\n", i);
		/*else
			printf("\nnot armstrong.");*/           //else statement is not neccesary for if condition.
	}
	getch();
	return 0;
}
