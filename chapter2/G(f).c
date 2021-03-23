#include<stdio.h>
#include<conio.h>
int main(){
	int a, b, c;
	printf("Enter values of A and B : ");
	scanf("%d %d", &a, &b);
	printf("\nBefore swapping : A=%d , B=%d", a, b);
	c = a;
	a = b;
	b = c;
	printf("\nAfter swapping : A=%d , B=%d", a, b);
	getch();
	return 0;
}
