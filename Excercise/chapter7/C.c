#include<stdio.h>
#include<conio.h>
int main(){
	int _class, failed, grace=0;
	printf("First class : 1\nSecond class : 2\nThird class : 3\n");
	printf("Enter the class obtained by student : ");
	scanf("%d", &_class);
	printf("\nEnter the no. of subjects failed : ");
	scanf("%d", &failed);
	switch (_class){
		case 1:
			if(failed<=3)
				grace += 5*failed;
			printf("Total grace obtained are %d.", grace);
			break;
		case 2:
			if(failed<=2)
				grace += 4*failed;
			printf("Total grace obtained are %d.", grace);
			break;
		case 3:
			if(failed==1)
				grace += 5;
			printf("Total grace obtained are %d.", grace);
			break;
		default:
			printf("\nWrong class\n");
	}
	 
	getch();
	return 0;
}
