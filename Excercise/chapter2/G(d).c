#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	float t, v, wcf;
	printf("Enter temperature and velocity of wind : ");
	scanf("%f %f", &t, &v);
	wcf = 35.74 + 0.6215*t + (0.4275*t-35.75) * pow(v,0.16);
	printf("Wind Chill Factor : %f", wcf);
	getch();
	return 0;
}
