#include<stdio.h>
#include<conio.h>
int main(){
	int num, i;
	printf("Enter the number : ");
	scanf("%d", &num);
	printf("Multiplication table of %d : \n\n", num);
	for(i=1; i<=10; i++){
		printf("%d * %d = %d\n", num, i, num*i);
	}
	
	getch();
	return 0;
}
