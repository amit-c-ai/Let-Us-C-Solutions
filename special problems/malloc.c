/*Flexible array size*/
#include<stdio.h>
#include<stdlib.h>
int main(){
	int max, *p, i;
	printf("Enter size of array: ");
	scanf("%d", &max);
	p = (int *) malloc(max * sizeof(int));
	printf("p: %d")
	for(i=0; i<7; i++){
		p[i] = i*i;
		printf("%d ", p[i]);
	}
	printf("\nsize: %d", sizeof(p));
	return 0;
}
