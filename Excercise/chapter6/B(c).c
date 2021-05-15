#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	float p, r, q;
	int i, n;
	printf("formula : p(1 + r/q)^nq = a\n");
	
	for(i=0; i<10; i++){
		printf("\nEnter principal, rate per year, compound interest and years : ");
		scanf("%f%f%f%d", &p, &r, &q, &n);		
		printf("%0.2f(1 + %0.2f/%0.2f)^%0.2f = %0.2f\n", p, r, q, n*q, p*pow((1+r/q), n*q));
	}
	
	getch();
	return 0;
}
