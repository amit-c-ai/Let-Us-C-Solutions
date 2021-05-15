#include<stdio.h>
#include<stdlib.h>
#define FORI for(i=0; i<max; i++)
#define FORJ for(j=0; j<max; j++)
int main(){
	int *matrix, *matrixT, i, max, j, check=1;
	printf("Enter size of square matrix: ");
	scanf("%d", &max);
	
	matrix = (int *) malloc(max * max*sizeof(int));
	matrixT = (int *) malloc(max * max*sizeof(int));
	printf("\nEnter numbers of matrix: ");
	
	FORI{
		FORJ{
			scanf("%d", (matrix + i*max + j));           //input to matrix
		}
	}
	
	FORI
		FORJ
			*(matrixT + j*max +i) = *(matrix + i*max + j);   //creating transpose of matrix i.e. matrixT
	
	
	FORI
		FORJ{
			if(*(matrixT + i*max +j) != *(matrix + i*max + j))
				check++;printf("check: %d ", check);
		}	
	
	
	if(check==1)
		printf("\nSymmetric Matrix");
	else
		printf("\nAsymmetric Matrix");
	
	return 0;
}
