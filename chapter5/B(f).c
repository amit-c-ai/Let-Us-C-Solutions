#include<stdio.h>
#include<conio.h>
int main(){
	int length, i;
	float max, min, num, range;
	
	printf("How many numbers you will enter : ");
	scanf("%d", &length);
	
	printf("\nEnter the number : ");
	scanf("%f", &num);
	
	max=num; min=num;
	
	for(i=1; i<length; i++){
		printf("\nEnter the number : ");
		scanf("%f", &num);
		if(num>=max)
			max=num;
		else if(num<=min)
			min=num;
	} 
	
	range=max-min;
	printf("%f", range);
	getch();
	return 0;
}
