#include<stdio.h>
#define _BV(x) (1<<x)
void check(unsigned char n, char *p[]);
int main(void){
	int games;
	char *p[] = {"cricket", "basketball", "football", "hockey", "lawn tennis", "table tennis", "carom", "chess"};
	printf("Enter number which represents the bit pattern of games won : ");
	scanf("%d", &games);
	check(games, p);
	return 0;
}

void check(unsigned char n, char *p[]){
	int i, count=0;
	unsigned char k;
	for(i=7; i>=0; i--){
		k = n & _BV(i);
		if(k == _BV(i)){
			printf("%s ", p[i]);
			count++;
		}
	}
	if(count>=5)
		printf("\nWon the Champions trophy");
	else
		printf("\nNot won Champions trophy");
}
