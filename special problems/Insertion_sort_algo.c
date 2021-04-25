#include<stdio.h>
void insertionSort(int [], int);
void swap(int *, int *);
int main(){
	int arr[25], i;
	printf("Enter 25 integers as an input to Insertion Sort Algorithm: ");
	for(i=0; i<25; i++){
		scanf("%d", &arr[i]);
	}
	
	insertionSort(&(arr[0]), 25);
	
	for(i=0; i<25; i++){
		printf("%d ", arr[i]);
	}	
}

void swap(int *a, int *b){
	int t;
	t = *a;
	*a = *b;
	*b = t;
}

void insertionSort(int array[], int n){
	int  i, j;
	
	for(i=1; i<n; i++){
		for(j=0; j<i; j++){
			if(array[i]<array[j]){
				swap(&array[i], &array[j]);
			}
		}
	}
}


