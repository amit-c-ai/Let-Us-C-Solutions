#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	float side1, side2, side3, others1, others2, hypotenuse;
	printf("Enter length of sides of triangle : ");
	scanf("%f %f %f", &side1, &side2, &side3);

	if(side1>side2){
		if(side1>side3){
		    hypotenuse = side1;
		    others1 = side2;
		    others2 = side3;
	    }
		else{
		    hypotenuse = side3;
		    others1 = side1;
		    others2 = side2;
	    }
	}
	else{
	    hypotenuse = side2;
	    others1 = side1;
	    others2 = side3;
    }
	if(side1==side2&&side2==side3)
	    printf("\nIt is an Equilateral traingle.");
	    
	else if(side1==side2&&side2!=side3 || side2==side3&&side3!=side1 || side3==side1&&side1!=side2)
	    printf("\nIt is an Isosceles triangle.");
	    
	else if(side1!=side2!=side3)
	    printf("\nIt is a Scalene traingle.");
	else if(pow(hypotenuse,2) == pow(others1,2) + pow(others2,2))
	    printf("\nIt is a Right traingle.");
	    
	getch();
	return 0;
}
