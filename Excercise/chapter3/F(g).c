#include<stdio.h>
#include<conio.h>
int main(){
	float x, y, radius, cx, cy, dis;
	printf("Enter coordinates of center of circle : ");
	scanf("%f %f", &cx, &cy);
	printf("\nRadius of circle : ");
	scanf("%f", &radius);
	printf("\nEnter coordinates of point to check : ");
	scanf("%f %f", &x, &y);
	dis = sqrt((pow(x-cx,2)) + (pow(y-cy,2)));
	if(dis<radius)
	    printf("\nPoint lies inside the circle.");
	else if(dis>radius)
	    printf("\nPoint lies outside the circle.");
    else
        printf("\nPoint lies on the circle.");
    getch();
    return 0;
}
