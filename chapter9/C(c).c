#include<stdio.h>
#include<conio.h>
#include<math.h>
void Area(float, float, float, float, float, float, float *);
int check(float, float, float, float, float, float, float );
int main(){
	float x1, y1, x2, y2, x3, y3, area;
	int ans;
	printf("Enter coordinates of A(x1, y1) : ");
	scanf("%f %f", &x1, &y1);
	printf("\nEnter coordinates of B(x2, y2) : ");
	scanf("%f %f", &x2, &y2);
	printf("\nEnter coordinates of C(x3, y3) : ");
	scanf("%f %f", &x3, &y3);
	Area(x1, y1, x2, y2, x3, y3, &area);
	printf("\n\nArea : %f", area);
	ans = check(x1, y1, x2, y2, x3, y3, area);
	printf("\n%d returned", ans);
	getch();
	return 0;
}

float distance(float x, float y, float X, float Y){
	return (sqrt(pow(X-x, 2) + pow(Y-y, 2)));
}

void Area(float x1, float y1, float x2, float y2, float x3, float y3, float *area){
	float side1, side2, side3, S;
	side1 = distance(x1, y1, x2, y2);
	side2 = distance(x2, y2, x3, y3);
	side3 = distance(x3, y3, x1, y1);
	 
	S = (side1+side2+side3)/2;
	*area = sqrt(S*(S-side1)*(S-side2)*(S-side3)); 
}

int check(float x1, float y1, float x2, float y2, float x3, float y3,float area){
	float A1, A2, A3, x, y;
	printf("\nEnter coordinates of point(P) to check: ");
	scanf("%f %f", &x, &y);
	/*sum of area of triangles PAB,PAC and PBC should be equal to area of ABC	*/
	Area(x1, y1, x, y, x2, y2, &A1);
	Area(x1, y1, x, y, x3, y3, &A2);
	Area(x2, y2, x, y, x3, y3, &A3);
	if(round(A1+A2+A3) == area)
		return 1;
	else
		return 0;
}

