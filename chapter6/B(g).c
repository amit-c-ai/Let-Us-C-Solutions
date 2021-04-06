#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	float limit=2000, j=2, k, ways=0;
	int i;
	printf("It'll take time to check all digits upto limit\n");
	for(i=500; i<=limit; i++){
		ways=0;
		for(j=1; j<=i/2; j++){
			for(k=1; k<=i/2; k++){
				if(pow(j, 3) + pow(k, 3) == i){
					ways++;
				}
			}
		}
		
		if(ways>=3)
			printf("%d\n", i);
	}
	getch();
	return 0;
}
