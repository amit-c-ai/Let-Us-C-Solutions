#include<stdio.h>
#include<conio.h>
int main(){
	float hardness, carbon, tStrength;
	int cH=0, cC=0, cS=0, grade;
	printf("Provide Hardness, Carbon Content and Tensile Srength : ");
	scanf("%f %f %f",&hardness, &carbon, &tStrength);
	
	if(hardness>50)
	    cH = 1;
	if(carbon<0.7)
		cC = 1;
	if(tStrength>5600)
		cS = 1;
		
	if(cH==1 && cC==1 && cS==1)
	    grade = 10;
	else if(cH==1 && cC==1 && cS==0)	
	    grade = 9;	        	
	else if(cH==0 && cC==1 && cS==1)	
	    grade = 8;
	else if(cH==1 && cC==0 && cS==1)	
	    grade = 7;
	else if((cH==1 && cC==0 && cS==0) || (cH==0 && cC==1 && cS==0) || (cH==0 && cC==0 && cS==1))	
	    grade = 6;
	else if(cH==0 && cC==0 && cS==0)	
	    grade = 5;
	printf("\nGrade of the given steel is %d", grade);
	
	getch();
	return 0;

}
