#include<stdio.h>
#include<conio.h>
int main(){
	float l,b,r,Arec,Acir,Prec,Pcir;
	printf("Enter lenth and breath of rectangle : ");
	scanf("%f %f",&l,&b);
    printf("Enter radius of cirle : ");
    scanf("%f",&r);
    Arec = l*b;
	Prec= 2*(l+b);
	Acir= 3.14*r*r;
	Pcir= 2*3.14*r; 
    printf("Area of rectangle : %0.2f\nPerimeter of rectangle : %0.2f\nArea of circle : %0.2f\nCircumference of circle : %0.2f",Arec,Prec,Acir,Pcir);
    getch();
    return 0;
}
