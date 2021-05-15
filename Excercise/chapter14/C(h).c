#include<stdio.h>
void shift(int *, int *);
int main(){
	int arr[5], shiftarr[5], i;
	printf("Enter 5 values of array: ");
	for(i=0; i<5; i++){
		scanf("%d", &arr[i]);
	}
	shift(arr, shiftarr);
	printf("After shifting:\n");
	for(i=0; i<5; i++){
		printf("%d ", *(shiftarr+i));
	}	
	return 0;	
}

void shift(int *a, int *p){
	int first, second, i;
	first = *a;
	second = *(a+1);
	for(i=0; i<3; i++){
		*(p+i) = *(a+2+i);
	}
	
	*(p+3) = first;
	*(p+4) = second; 

}
