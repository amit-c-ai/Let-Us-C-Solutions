#include<stdio.h>
#include<conio.h>
int main(){
	int i=3;
	int *j;
	int **k;
	j=&i;
	k=&j;
	printf("value of i : %d		(given by i)\n", i);
	printf("value of i : %d		(given by *j)\n", *j);
	printf("value of i : %d		(given by **k)\n", **k);
	printf("address of i : %u	(given by &i)\n", &i);
	printf("address of i : %u	(given by j)\n", j);
	printf("adress of i : %u	(given by *k)\n", *k);
	printf("value of j : %d	(given by j)\n", j);
	printf("value of j : %d	(given by *k)\n", *k);
	printf("address of j : %u	(given by &j)\n", &j);
	printf("address of j : %u	(given by k)\n", k);
	printf("value of k : %d	(given by k)\n", k);
	printf("address of k : %u	(given by &k)", &k);
	getch();
	return 0;
}
