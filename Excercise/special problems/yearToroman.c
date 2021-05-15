#include<stdio.h>
#include<conio.h>
int yearToroman(int, int, char);
int main(){
	int year;
	printf("Enter year : ");
	scanf("%d", &year);
	year = yearToroman(year, 1000, 'm');
	year = yearToroman(year, 500, 'd');
	year = yearToroman(year, 100, 'c');
	year = yearToroman(year, 50, 'l');
	year = yearToroman(year, 10, 'x');
	year = yearToroman(year, 5, 'v');
	year = yearToroman(year, 1, 'i');
	getch();
	return 0;
}

int yearToroman(int yr, int k, char c){
	int i;
	int j=yr/k;
	for(i=1; i<=j; i++){
		printf("%c", c);
	}
	return yr-j*k;
}


