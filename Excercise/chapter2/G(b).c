#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	float x, y;
	double r, theta;
	printf("Enter Cartesian co-ordinates(x and y) : ");
	scanf("%f %f", &x, &y);
	r = sqrt(x*x + y*y);
	theta = atan(y/x);
	printf("Polar co-ordinates : %0.2f %0.2f", r, theta);
	getch();
	return 0;
}
