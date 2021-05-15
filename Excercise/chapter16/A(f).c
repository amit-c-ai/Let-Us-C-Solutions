#include<stdio.h>
void convert (long, char []);
char *one[] = {" ", " One"," Two"," Three"," Four"," Five", " Six"," Seven", "Eight"," Nine"," Ten", " Eleven"," Twelve"," Thirteen"," Fourteen", "Fifteen"," Sixteen"," Seventeen"," Eighteen", " Nineteen"};
char *ten[] = {" ", " ", " Twenty"," Thirty"," Forty"," Fifty", " Sixty", "Seventy"," Eighty"," Ninety"};

int main(){
	long num ;
	printf("Enter any Number (max 9 digits): ");
	scanf("%ld", &num);
	if(num <= 0)
		printf("No negative numbers please...\n");
	else{
		convert((num / 10000000), "Crore");
		convert(((num / 100000) % 100), "Lakh");
		convert(((num / 1000) % 100), "Thousand");
		convert(((num / 100) % 10), "Hundred");
		convert((num % 100), " ");
	}
}

void convert (long n, char *s){
	if(n > 19)
		printf(" %s %s", ten[n/10], one[n%10]);
	else
		printf(" %s", one[n]);
	if(n)
		printf(" %s", s) ;
}
