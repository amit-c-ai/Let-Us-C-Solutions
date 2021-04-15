#include<stdio.h>
#include<conio.h>
int main(){
	int a, b, c, d, e, f, res;
	printf("Enter values of a, b, c : ");
	scanf("%d%d%d", &a, &b, &c);
	res = circular_shift(a, b, c);
	d = res/(a*b);
	e = res/(b*c);
	f = res/(a*c);
	printf("Before:\n\ta: %d b: %d c: %d\nAfter:\n\ta: %d b: %d c: %d", a, b, c, d, e, f);
	getch();
	return 0;
}
int circular_shift(int a, int b, int c){
	int temp = c;
	c=b;
	b=a;
	a=temp;
	return (a*b*c);
}
