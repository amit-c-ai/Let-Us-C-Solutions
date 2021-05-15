#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	float l1, l2, g1, g2, D;
	printf("Enter latitude of two places : ");
	scanf("%f %f",&l1 ,&l2);
	printf("\nEnter longitude of two places : ");
	scanf("\n%f %f", &g1, &g2);
	D = 3963 * acos( sin(l1)*sin(l2) + cos(l1)*cos(l2) * cos(g2-g1));
	printf("Distance between these two points in nautical miles : %f",D);
	getch();
	return 0;
}
