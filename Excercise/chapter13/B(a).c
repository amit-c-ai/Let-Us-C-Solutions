#include<stdio.h>
int main(){
	int arr[25], i, countP=0, countN=0, countE=0, countO=0;
	printf("Enter 25 numbers: ");
	for(i=0; i<25; i++){
		scanf("%d", &arr[i]);
	}
	
	for(i=0; i<25; i++){
		if(arr[i]>=0)
			countP++;
		else
			countN++;
			
		if(arr[i]%2==0)
			countE++;
		else
			countO++;
	}
	
	printf("Positive numbers: %d", countP);
	printf("\nNegative numbers: %d", countN);
	printf("\nEven numbers: %d", countE);
	printf("\nOdd numbers: %d", countO);
	
	getch();
	return 0;	
}
