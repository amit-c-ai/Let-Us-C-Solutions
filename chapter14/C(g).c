#include<stdio.h>
#define FORi for(i=0; i<max; i++)
#define FORj for(j=0; j<max; j++)
#define MULTIPLY(arr,brr,final) FORi{FORj{final[i][j]=arr[i][j]*brr[i][j];}}
#define PRINT(crr) FORi{FORj{printf("%d ", crr[i][j]);}printf("\n");}
int main(){
	int arr[3][3]={{1,2,3}, {4,5,6}, {7,8,9}},
		brr[3][3]={{2,3,4}, {5,6,7}, {8,9,0}},
		crr[3][3]={{3,4,5}, {6,7,8}, {9,0,1}},
		drr[3][3]={{2,3,4}, {6,5,4}, {5,4,3}},
		final[3][3];
	int choice, i, j, max=3;
	printf("1. arr * brr\n2. arr * crr\n3. arr * drr\n4. brr * crr\n5. brr * drr\n6. crr * drr\n");
	printf("Enter choice to multiply any two 3x3 matrices: ");
	scanf("%d", &choice);
	switch(choice){
		case 1:
			MULTIPLY(arr, brr, final);
			PRINT(arr); printf("\n");
			PRINT(brr); printf("\n");
			PRINT(final);
			break;
		case 2:
			MULTIPLY(arr, crr, final);
			PRINT(arr); printf("\n");
			PRINT(crr); printf("\n");
			PRINT(final);
			break;
		case 3:
			MULTIPLY(arr, drr, final);
			PRINT(arr); printf("\n");
			PRINT(drr); printf("\n");
			PRINT(final);			
			break;
		case 4:
			MULTIPLY(brr, crr, final);
			PRINT(brr); printf("\n");
			PRINT(crr); printf("\n");
			PRINT(final);
			break;
		case 5:
			MULTIPLY(brr, drr, final);
			PRINT(brr); printf("\n");
			PRINT(drr); printf("\n");
			PRINT(final);
			break;
		case 6:
			MULTIPLY(crr, drr, final);
			PRINT(crr); printf("\n");
			PRINT(drr); printf("\n");
			PRINT(final);
			break;
		default:
			printf("\nEnter valid input.\n");
	}
}
