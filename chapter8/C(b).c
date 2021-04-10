#include<stdio.h>
#include<conio.h>
int factors(int);
void isPrime(int);
int main(){
	int num;
	printf("Enter number : ");
	scanf("%d", &num);
	factors(num);
	getch();
	return 0;
}

int factors(int num){
	int i;
	for(i=2; i<=num; i++){
		if(num%i==0){
			if(i==2){
				printf(" %d", i);
				continue;
			}
			isPrime(i);
		}
	}
}

void isPrime(int var){
	int i, flag=0;
	for(i=2; i<var; i++){
		if(var%i==0){
			flag=1;
			break;
		}
	}
	if(flag==0)
		printf("  %d", var);
}
