#include<stdio.h>
void smallest(int *, int, int *);
int main(){
	int arr[25], i, min;
	printf("Enter 25 integers to find it's smallest: ");
	for(i=0; i<25; i++){
		scanf("%d", &arr[i]);
	}
	min = arr[0];
	smallest(&(arr[0]), 25, &min);
	printf("Smallest number in array: %d", min);
	
	return 0;
}

void smallest(int *ptr,int n,int *min){
	int i;
	ptr++;                                         //to start from second element of array
	for(i=0; i<n; i++, ptr++){
		if(*ptr < *min)
			*min = *ptr;
	}
}

