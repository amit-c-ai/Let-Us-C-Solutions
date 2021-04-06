#include<stdio.h>
#include<conio.h>
int main(){
	int population=100000, i;
	for(i=1; i<11; i++){
		population += (0.1 * population);
		printf("population at the end of %d year of last decade : %d\n", i, population);
	}
	getch();
	return 0;
}
