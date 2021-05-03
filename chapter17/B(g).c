#include<stdio.h>
struct date{
	int day;
	int month;
	int year;
};

int compDate(struct date *date1, struct date *date2){
	if(date1->year==date2->year){
		if(date1->month==date2->month){
			if(date1->day==date2->day)
				return 1;
			return 0;
		}
		return 0;
	}
	return 0;
}

int main(){
	struct date date1, date2;
	int ans;
	printf("Enter date 1: ");
	scanf("%d %d %d", &date1.day, &date1.month, &date1.year);
	printf("\nEnter date 2: ");
	scanf("%d %d %d", &date2.day, &date2.month, &date2.year);
	ans = compDate(&date1, &date2);
	printf("\n%d", ans);
	return 0;
}
