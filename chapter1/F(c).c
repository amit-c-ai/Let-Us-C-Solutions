#include<stdio.h>
#include<conio.h>
int main(){
	int la0= 1189, ba0= 841, la1, ba1, la2, ba2, la3, ba3, la4, ba4, la5, ba5, la6, ba6, la7, ba7, la8, ba8;
	la1= ba0; ba1= la0/2;
	la2= ba1; ba2= la1/2;
	la3= ba2; ba3= la2/2;
	la4= ba3; ba4= la3/2;
	la5= ba4; ba5= la4/2;
	la6= ba5; ba6= la5/2;
	la7= ba6; ba7= la6/2;
	la8= ba7; ba8= la7/2;
    printf("dimensions of A0 : %d X %d\n" 
	       "dimensions of A1 : %d X %d\n"
		   "dimensions of A2 : %d X %d\n"
		   "dimensions of A3 : %d X %d\n"
		   "dimensions of A4 : %d X %d\n"
		   "dimensions of A5 : %d X %d\n"
		   "dimensions of A6 : %d X %d\n"
		   "dimensions of A7 : %d X %d\n"
		   "dimensions of A8 : %d X %d\n", la0, ba0, la1, ba1, la2, ba2, la3, ba3, la4, ba4, la5, ba5, la6, ba6, la7, ba7, la8, ba8); 
			
	getch();
	return 0;
}
