#include<stdio.h>
#include<conio.h>
int main(){
	int hours, minutes, seconds;
	printf("12:0:0 Midnight\n");

	for(hours=0; hours<12; hours++){
		for(minutes=0; minutes<=60; minutes++){
			for(seconds=1; seconds<=60; seconds++){
				if(seconds==60){
					minutes++;
					if(minutes==60){
						hours++;
						if(hours==12)
							break;
						else{
							printf("%d:0:0 AM\n", hours);
							hours--;	
						}		
					}
					else{
						printf("%d:%d:0 AM\n", hours, minutes);
						minutes--;
					}	
				}

				else
					printf("%d:%d:%d AM\n", hours, minutes, seconds);
			}
			if(hours==12)
				break;
		}
		if(hours==12)
			break;
	}
	printf("12:0:0 Noon\n");
	getch();
	return 0;
}
