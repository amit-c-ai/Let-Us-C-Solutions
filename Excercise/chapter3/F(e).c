#include<stdio.h>
#include<conio.h>
int main(){
	float len, breath, area, perimeter;
	printf("Enter length and breath : ");
	scanf("%f %f", &len, &breath);
	area = len*breath;
	perimeter = 2*(len+breath);
	if(area>perimeter)
	    printf("Yes. Area(%0.2f) is greater than perimeter(%0.2f).", area, perimeter);
	else if(perimeter>area)
	    printf("No. Perimeter(%0.2f) is greater than area(%0.2f).", perimeter, area);
	else
	    printf("Area(%0.2f) and Perimeter(%0.2f) both are equal.", area, perimeter);
		
	getch();
	return 0;		    
}
