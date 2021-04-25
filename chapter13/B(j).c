#include<stdio.h>
#include<math.h>
#define FOR_LOOP for(i=0; i<10; i++)
int main(){
	float xrr[10], yrr[10], distance, sum=0; 
	int i, count=0;
	
	printf("Enter x-coordinates of 10 points: ");
	FOR_LOOP{
		scanf("%f", &xrr[i]);
	}
	
	printf("Enter y-coordinates of 10 points: ");
	FOR_LOOP{
		scanf("%f", &yrr[i]);
	}
	
	FOR_LOOP{
		if(i!=0){
			distance = sqrt(pow(xrr[i]-xrr[i-1], 2) + pow(yrr[i]-yrr[i-1], 2));
			printf("Points:\n	y2: %f y1: %f, x2: %f x1: %f\ndistance: %f\n",yrr[i-1], yrr[i-2], xrr[i-1], xrr[i-2], distance);
			sum = sum + distance;
		}
	}
	
	printf("\nDistance b/w first and last point(sum of distances b/w consecutive points): %f", sum);
	return 0;
}
