#include<stdio.h>
#include<math.h>
#define SUM_YX(yrr, xrr) for(i=0; i<n; i++){sum_yx = sum_yx + yrr[i]*xrr[i];}
#define SUM_X(xrr) for(i=0; i<n; i++){sum_x = sum_x + xrr[i];}
#define SUM_Y(yrr) for(i=0; i<n; i++){sum_y = sum_y + yrr[i];}
#define SUM_X2(xrr) for(i=0; i<n; i++){sum_x2 = sum_x2 + xrr[i]*xrr[i];}
int main(){
	float xrr[] = {3.0, 4.5, 5.5, 6.5, 7.5, 8.5, 8.0, 9.0, 9.5, 10.0},
		  yrr[] = {1.5, 2.0, 3.5, 5.0, 6.0, 7.5, 9.0, 10.5, 12.0, 14.0};
	float sum_yx=0, sum_x, sum_y, sum_x2, b, mean_x, mean_y, a;
	int i, n=sizeof(xrr)/sizeof(float);
	
	SUM_YX(yrr, xrr); SUM_X(xrr); SUM_Y(yrr); SUM_X2(xrr);
	
	b = (n*sum_yx - sum_x*sum_y)/(n*sum_x2 - pow(sum_x, 2));
	
	mean_x = sum_x/n;
	mean_y = sum_y/n;
	
	a = mean_y - b*mean_x;
	
	printf("equation of straight line:\n	y = %f + %fx", a, b);
	
	return 0;
}


