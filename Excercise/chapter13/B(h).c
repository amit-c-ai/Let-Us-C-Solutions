#include<stdio.h>
#include<math.h>
#define SIGMA_XY(xrr, yrr) for(i=0; i<11; i++){sum_xy = sum_xy + xrr[i]*yrr[i];}
#define SIGMA_X(xrr) for(i=0; i<11; i++){sum_x = sum_x + xrr[i];}
#define SIGMA_Y(yrr) for(i=0; i<11; i++){sum_y = sum_y + yrr[i];}
#define SIGMA_X2(xrr) for(i=0; i<11; i++){sum_x2 = sum_x2 + xrr[i]*xrr[i];}
#define SIGMA_Y2(yrr) for(i=0; i<11; i++){sum_y2 = sum_y2 + yrr[i]*yrr[i];}

int main(){
	float xrr[] = {34.22, 39.87, 41.85, 43.23, 40.06, 53.29, 53.29, 54.14, 49.12, 40.71, 55.15},
		  yrr[] = {102.43, 100.93, 97.43, 97.81, 98.32, 98.32, 100.07, 97.08, 91.59, 94.85, 94.65},
		  r;
	
	int n=11, i;
	float sum_xy=0, sum_x=0, sum_y=0, sum_x2=0, sum_y2=0;
	
	SIGMA_XY(xrr, yrr); SIGMA_X(xrr); SIGMA_Y(yrr); SIGMA_X2(xrr); SIGMA_Y2(yrr); //gives all required summitions
	printf("SIGMA_XY: %f\nSIGMA_X: %f\nSIGMA_Y: %f\nSIGMA_X2: %f\nSIGMA_Y2: %f\nneumerator: %f\n", sum_xy, sum_x, sum_y, sum_x2, sum_y2, (sum_xy - sum_x*sum_y));
	r = (sum_xy - sum_x*sum_y)/sqrt( (n*sum_x2- pow(sum_x, 2)) * (n*sum_y2- pow(sum_y, 2)) );
	
	printf("r: %f", (sum_xy - sum_x*sum_y)/sqrt( (n*sum_x2- pow(sum_x, 2)) * (n*sum_y2- pow(sum_y, 2)) ));
	printf("Correlation coefficient(r) : %f", r);
	
	return 0;
}
