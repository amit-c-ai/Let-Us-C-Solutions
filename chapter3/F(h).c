#include<stdio.h>
#include<conio.h>
int main(){
	float x, y;
	printf("Enter coordinates to check : ");
	scanf("%f %f", &x, &y);
	if(y==0 && x!=0)
	    printf("\nPoint lie on X-axis.");
	else if(y!=0 && x==0)
	    printf("\nPoint lie on Y-axis.");
	else if(y==0 && x==0)
	    printf("\nPoint lie on origin.");
	else
	    printf("\nPoint neither lie on any axis nor on origin.");
	getch();
	return 0;
}
