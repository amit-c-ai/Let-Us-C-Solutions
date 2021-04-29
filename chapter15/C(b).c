#include<stdio.h>
int main(){
	char isbn[10];
	int check_sum=0, i;
	printf("Enter 10-digit ISBN: ");
	scanf("%s", &isbn);
	
	for(i=0; isbn[i]!='\0'; i++){
		if(isbn[i]!='X')
			check_sum = check_sum + (10-i)*(isbn[i]-48);
					
		else
			check_sum = check_sum + (10-i)*(isbn[i]-78);		
	}
	
	if(check_sum %11 == 0)
		printf("\nchecksum: %d   Corrent", check_sum);
	else
		printf("\nchecksum: %d   Incorrect", check_sum);
		
	return 0;
}
