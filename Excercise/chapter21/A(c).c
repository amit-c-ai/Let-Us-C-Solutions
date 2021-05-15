#include<stdio.h>
#define _BV(x) (1<<x)
void showbits(signed char n);
int main(void){
	int data[] = {273, 548, 786, 1096}, i, k;
	char *y[] = {"1st year", "2nd Year", "3rd year", "4th Year", "Mechanical", "Chemical", "Electronics", "Information Technology"};
	unsigned char temp;
	for(i=0; i<4; i++){
		printf("%d : ", data[i]);showbits(data[i]);printf("\n");
		for(k=0; k<7; k++){
			if((data[i] & _BV(k)) == _BV(k)){
				printf("%s\n", y[k]);
			}
		}
		temp = data[i]>>8;
		printf("room no. : %d\n", temp); printf("\n");
	} 

}

void showbits(signed char n){
	int i;
	signed char and_mask, k;
	for(i=7; i>=0; i--){
		and_mask = _BV(i);
		k = n & and_mask;
		(k==0)?printf("0"):printf("1");
	}
}
