#include<stdio.h>
#define FORi for(i=0; i<max; i++)
#define FORj for(j=0; j<max; j++)
#define SCAN(arr) FORi{FORj{scanf("%d", &arr[i][j]);}}
#define ADD(arr,brr,crr) FORi{FORj{crr[i][j]=arr[i][j]+brr[i][j];}}
#define PRINT(crr) FORi{FORj{printf("%d ", crr[i][j]);}printf("\n");}
int main(){
	int arr[6][6], brr[6][6], crr[6][6];
	int i, j, max=6;
	
	printf("Enter elements of 6x6 matrix: ");
	SCAN(arr);
	fflush(stdin);
	printf("\nEnter elements of another 6x6 matrix: ");
	SCAN(brr);
	
	ADD(arr, brr, crr);
	
	PRINT(arr); printf("\n");
	PRINT(brr); printf("\n");
	PRINT(crr); printf("\n");
	
	return 0;
}
