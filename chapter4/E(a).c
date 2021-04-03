#include<stdio.h>
#include<conio.h>
int main(){
	char input;
	printf("Enter the character : ");
	scanf("%c", &input);
	(input>='a' && input<='z') ? printf("\nEntered character is lower case."):(((input>=0 && input<=48) || (input>57 && input<65) || (input>90 && input<97) || (input>122))?printf("\nEntered character is special symbol."):printf("\nEntered character is neither lowercase nor special symbol"));

		
	getch();
	return 0;
}
