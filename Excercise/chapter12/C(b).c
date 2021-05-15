#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MEAN(a,b) ((a+b)/2.0)
#define ABSOLUTE(c) (abs(c))
#define LOWER(d) (d+32)
#define BIGGEST(l,m,n) (l>m?(l>n?l:n):(m>n?m:n))
int main(){
	int a, b, c, d, l, m, n;
	printf("Enter value of a and b for arithmetic mean: ");
	scanf("%d %d", &a, &b);
	printf("\nMean: %f", MEAN(a,b));
	
	printf("\n\nEnter value of c for absolute value: ");
	scanf("%d", &c);
	printf("\nAbsolute value: %d", ABSOLUTE(c));
	
	fflush(stdin);                                      //for removing any buffer character
	printf("\n\nEnter a capital alphabet to find it's lower: ");
	scanf("%c", &d);
	printf("\nLower: %c", LOWER(d));
	
	printf("\n\nEnter three numbers to find biggest of three: ");
	scanf("%d %d %d", &l, &m, &n);
	printf("\nbiggest: %d", BIGGEST(l,m,n));
	
	return 0;
}
