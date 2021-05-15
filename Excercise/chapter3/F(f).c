#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	float x1, y1, x2, y2, x3, y3, slope12, slope23;
	printf("Enter coordinates of 1st point : ");
	scanf("%f %f", &x1, &y1);
	printf("Enter coordinates of 2nd point : ");
	scanf("%f %f", &x2, &y2);
	printf("Enter coordinates of 3rd point : ");
	scanf("%f %f", &x3, &y3);
	
	slope12 = (y2-y1)/(x2-x1);
	slope23 = (y3-y2)/(x3-x2);
	
	if(slope12 == slope23)
	    printf("All three coordinates fall on same line.");
	else
	    printf("All three coordinates doesn't fall on same line");
	
	getch();
	return 0;
}
