#include<stdio.h>
#define _BV(x) (1<<x)
void showbits(unsigned char n);
struct animal{
	char name[30];
	int type;
};
struct animal a={"OCELOT", 18};

int main(void){
	int t, i;
	unsigned char ty;
	char *p[]= {"canine", "feline", "cetacean", "marsupial"};
	for(i=0; i<=3; i++){
		if((a.type & _BV(i)) == _BV(i)){
			printf("\nType of %s : %s\n", a.name, p[i]);
		}
	}
	if(a.type>>4 == 1)
		printf("\nAnd it is Herbivorous");
	else
		printf("\nAnd it is Carnivorous");
}

void showbits(unsigned char n){
	int i;
	unsigned char k, andmask;
	for(i=7; i>=0; i--){
		andmask = _BV(i);
		k=n&andmask;
		k==0?printf("0"):printf("1");
	}
}
