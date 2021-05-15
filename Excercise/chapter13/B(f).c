#include<stdio.h>
#include<math.h>
#define MEAN(arr) for(i=0; i<length; i++){sum=sum+arr[i];}
int main(){
	int arr[] = {-6,-12,8,13,11,6,7,2,-6,-9,-10,11,10,9,2}, i, sum=0, sum2=0, length;
	float mean, sDeviation;
	length = sizeof(arr)/sizeof(int);
	MEAN(arr);
	mean = sum/15.0;
	for(i=0; i<length; i++){
		sum2 = sum2 + pow(arr[i]-mean, 2);
	}
	sDeviation = sqrt(sum2/15.0);
	printf("Mean: %f\nStandard Deviation: %f", mean, sDeviation);
	return 0;
}
