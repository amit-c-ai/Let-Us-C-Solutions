#include<stdio.h>
#include<conio.h>
int main(){
	float R, G, B, C, M, Y, K, White;
	printf("Enter RGB values : ");
	scanf("%f %f %f", &R, &G, &B);
	if(R==0 && G==0 && B==0){
		C=0; M=0; Y=0; K=1;
	}
	else{
		if(R/255 > G/255){
			if(R/255 > B/255)
		    	White = R/255;
			else
		    	White = B/255;
		}
		else
	    	White = G/255;
	    
		C = (White - (R/255))/White;
		M = (White - (G/255))/White;
		Y = (White - (B/255))/White;
		K = 1 - White;
	}
	
	printf("CMYK values are : %f, %f, %f, %f", C, M, Y, K);
	getch();
	return 0;
}
