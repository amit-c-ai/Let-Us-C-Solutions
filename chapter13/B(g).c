#include<stdio.h>
#include<math.h>
int main(){
	float arr[] = {137.4, 80.9, 0.78, 155.2, 92.62, 0.89, 149.3, 97.93, 1.35, 160.0, 100.25, 9.00, 155.6, 68.95, 1.25, 149.7, 120.0, 1.75}, jrr[20];
	float max = 3908.707454, area;
	int i, count=0;
	
	for(i=0; i<19; i++){
		if(count==3){
			printf("i: %d\n", i);
			count=0;
			area = 0.5*jrr[i-3]*jrr[i-2]*sin(jrr[i-1]);
			printf("jrr[i-3]: %f, jrr[i-2]: %f, jrr[i-1]: %f, sin(jrr[i-1]): %f\n", jrr[i-3], jrr[i-2], jrr[i-1], sin(jrr[i-1]));
			printf("Area: %0.2f\n", area);
			if(area>max){
				max=area;
			}
			i--;                                                         //i is decreased so that this iteration doesn't go waste
		}
		else{
			printf("i: %d\n", i);
			jrr[i]=arr[i];
			count++;                                               //counter of 3 is set so that only 3 elements are checked in if statement
		}
	}
	
	printf("largest: %0.2f", max);
	return 0;	
}
