#include<stdio.h>
#include<conio.h>
int main(){
	char input;
	printf("Enter the character : ");
	scanf("%c", &input);
	if(input>='a' && input<='z')
		printf("\nEntered character is lower case.");
	else if((input>=0 && input<=48) || (input>57 && input<65) || (input>90 && input<97) || (input>122)) 
		printf("\nEntered character is special symbol.");
	else
		printf("\nEntered character is neither lower case alphabet nor special symbol.");
		
	getch();
	return 0;
}
