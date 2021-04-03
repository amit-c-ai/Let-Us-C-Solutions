#include<stdio.h>
#include<conio.h>
int main(){
	int i=0;
	while(i<=255){
		printf("Equivalent character of %d   is %c\n", i, i);
		i++;
	}
	getch();
	return 0;
}
