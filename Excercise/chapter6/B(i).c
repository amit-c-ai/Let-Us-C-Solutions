#include<stdio.h>
#include<conio.h>
int main(){
	int i, j, num=1, k;                                                         
	for(i=1; i<=4; i++){                                        
		for(k=0; k<=(4-i); k++){                              
			printf("\t");                                     
		}
		for(j=1; j<=i; j++, num++){
			printf("%d\t\t", num);
		}
		printf("\n");
	}
}
