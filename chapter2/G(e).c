#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	float theta, s , c, t, co, se, coth;
	printf("Enter the value of theta : ");
	scanf("%f", &theta);
	s=sin(theta);
	c=cos(theta);
	t=s/c;
	co=1/s;
	se=1/c;
	coth=1/t;
	printf("Trignometric ratios :\n");
	printf("\tsin : %f\n\tcos : %f\n\ttan : %f"
	       "\n\tcosec : %f\n\tsec : %f\n\tcot : %f", s, c, t, co, se, coth);
	getch();
	return 0;
}
