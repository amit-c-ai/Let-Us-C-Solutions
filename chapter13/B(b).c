#include<stdio.h>
int main(){
	int arr[100], n, i;
	printf("Enter size of array: ");
	scanf("%d", &n);
	printf("Enter %d elements: ", n);
	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
    }

	for(i=0; i<n; i++){
		printf("%d", arr[i]);
    }
		
	for(i=0; i<n; i++){
		if(arr[i]==arr[n-(i+1)])
			printf("\narr[%d] is equal to arr[%d]", i, n-(i+1));
		else
			printf("\narr[%d] is equal to arr[%d]", i, n-(i+1));
	}
	
	return 0;
}
