#include<stdio.h>
#include<conio.h>
void fibo(int, int, int);
int main(){
	int old=1, current=1, terms=23;
	printf("%d\n%d\n", old, current);
	fibo(old, current, terms);
	getch();
	return 0;
}
void fibo(old, current, terms){
	int newterm;
	if(terms>=1){
		newterm = old + current;
		printf("%d\n", newterm);
		terms--;
		fibo(current, newterm, terms);
	}
}
