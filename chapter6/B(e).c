#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	int i, j, k, largest, side1, side2;
	for(i=1; i<=30; i++){
		for(j=1; j<=30; j++){
			for(k=1; k<=30; k++){
				if(i>j){
					if(i>k){
						largest=i;
						side1=j;
						side2=k;
					}
					else{
						largest=k;
						side1=i;
						side2=j;
					}
				}
				else if(j<k){
					largest=k;
					side1=i;
					side2=k;
				}
				else{
					largest=j;
					side1=i;
					side2=k;
				}
				if(pow(largest,2)==pow(side1,2) + pow(side2,2))
					printf("%d %d %d\n",i, j, k);
			}
		}
	}
}
