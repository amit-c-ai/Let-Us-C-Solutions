#include<stdio.h>
#include<conio.h>
int main(){
	float weight, height, BMI;
	printf("Enter your weight(kgs) and height(m) : ");
	scanf("%f %f", &weight, &height);
	BMI = weight/(height*height);
	if(BMI<15)
	    printf("\nYour BMI(%0.2f) category : Starvation", BMI);
	else if(BMI>=15.1 && BMI<=17.5)
	    printf("\nYour BMI(%0.2f) category : Anorexic", BMI);
	else if(BMI>=17.6 && BMI<=18.5)
	    printf("\nYour BMI(%0.2f) category : Underweight", BMI);
	else if(BMI>=18.6 && BMI<=24.9)
	    printf("\nYour BMI(%0.2f) category : Ideal", BMI);
	else if(BMI>=25 && BMI<=25.9)
	    printf("\nYour BMI(%0.2f) category : Overweight", BMI);
	else if(BMI>=30 && BMI<=30.9)
	    printf("\nYour BMI(%0.2f) category : Obese", BMI);
	else if(BMI>=40)
	    printf("\nYour BMI category : Morbidly obese");
	getch();
	return 0;
}
