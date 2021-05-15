#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
	int year, days, flag=0;
	printf("Enter year : ");
	scanf("%d", &year);
	if (year % 400 == 0) {
       flag=1;
    }

    else if (year % 100 == 0) {
       flag=0;
    }

    else if (year % 4 == 0) {
       flag=1;
    }

    else {
       flag=0;
    }

    if(flag==1)
	    days = abs(year-2001)*(366);
	else
	    days = abs(year-2001)*(365);
	
	if(days%7==0)
	    printf("\nMonday");
	else if(days%7==1)
	    printf("\nTuesday");
	else if(days%7==2)
	    printf("\nWednesday");
	else if(days%7==3)
	    printf("\nThursday");
	else if(days%7==4)
	    printf("\nFriday");
	else if(days%7==5)
	    printf("\nSaturday");
	else if(days%7==6)
	    printf("\nSunday");
	getch();
	return 0;
}
