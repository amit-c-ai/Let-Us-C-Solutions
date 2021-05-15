#include<stdio.h>
#include<conio.h>
int main(){
	int ram, shyam, ajay;
	while(1){
	printf("\nEnter ages of Ram, Shyam, Ajay : ");
	scanf("%d %d %d", &ram, &shyam, &ajay);
	if(ram<shyam){
		if(ram<ajay){
			printf("\nRam is youngest. %dyrs",ram);
		}
		else
		    printf("nAjay is youngest. %dyrs",ajay);
	}
	else
	    printf("\nShyam is youngest. %dyrs",shyam);
}
	getch();
	return 0;
}
