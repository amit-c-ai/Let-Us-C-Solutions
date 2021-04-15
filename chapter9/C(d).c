#include<stdio.h>
#include<conio.h>
void GCD(int *, int *);
int main(){
	int J, K;
	printf("Enter value of J and K : ");
	scanf("%d %d", &J, &K);
	while(K!=0){
		GCD(&J, &K);
	}
	getch();
	return 0;
}
void GCD(int *J, int *K){
	int j, k;
	int remainder = *J / *K;
	j=*J; k=*K;
	*J=k; *K= j-remainder*k;
	if(*K==0)
		printf("\nGreatest common divisor is %d", k);
}
