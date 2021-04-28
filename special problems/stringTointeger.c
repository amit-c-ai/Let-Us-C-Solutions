#include<stdio.h>
#include<string.h>
int main(){
	char str[10];
	int i, num=0;
	printf("Enter string containing only numbers: ");
	scanf("%s", &str);
	
	for(i=0; str[i]!='\0'; i++){
		if(str[i]>=48 && str[i]<=57){
			num = num*10 + str[i]-48;
		}
		else
			printf("\nNot a valid string");
	}
	
	printf("Number: %d", num);
	return 0;
}
