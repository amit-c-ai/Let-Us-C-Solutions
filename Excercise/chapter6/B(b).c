#include<stdio.h>
#include<conio.h>
int main(){
	int y;
	float x, i;
	printf("\n\ny		x	=	i\n\n");
	for(y=1; y<=6; y++){
		for(x=5.5; x<=12.5; x+=0.5){
			printf("%d	%f    =    %f\n", y, x, 2+(y+0.5*x));
		}
		printf("\n");
	}
	getch();
	return 0;
}
