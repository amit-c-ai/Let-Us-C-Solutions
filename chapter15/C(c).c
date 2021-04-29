#include<stdio.h>
#include<string.h>
int main(){
	char str[20], str1[10], str2[10];
	int i, j, k, sum=0, sum2=0;
	printf("Enter Credit Card number: ");
	gets(str);
	puts(str);
	for(i=0, j=0, k=-1; str[i]!='\0'; i++, j++, k++){
		if(i%2==0){
			str1[j/2] = 2*(str[i]-48);
		}
		else{
			str2[k/2] = (str[i]-48);
		}			
	}
	
	str2[8]='\0';
	str1[8]='\0';
	
	for(i=0; str1[i]!='\0'; i++){
		printf("%d ", str1[i]);
	}
	printf("\n");
	for(i=0; str1[i]!='\0'; i++){
		printf("%d ", str2[i]);
	}
		
	for(i=0; str1[i]!='\0'; i++){
		if(str1[i]>=10){
			str1[i] = str1[i]-9;
		}
		sum = sum + str1[i];
		sum2 = sum2 + str2[i];
	}
	printf("sum: %d  sum2: %d", sum, sum2);
	
	if((sum+sum2)%10==0)
		printf("\nValid");
	else
		printf("\nInvalid");
		
	return 0;
	
}
