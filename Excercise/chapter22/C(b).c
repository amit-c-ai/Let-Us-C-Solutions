#include<stdio.h>
#define MAX 2
int main(void){
	enum sex {male, female};
	enum level {minor, major};
	typedef struct people{
		enum sex gender;
		enum level age_level;
		char policy_name[10];
		unsigned int duration_in_year;
	}PEOPLE;
	PEOPLE p[MAX];
	int i, enm;
	for (i = 0; i < MAX; i++){
		printf("\nEnter the gender (male = 0 or female = 1) : ");
		scanf("%d", &enm);
		enm ? (p[i].gender = female) : (p[i].gender = male);
		printf("\nEnter the age status (major = 0 or minor = 1) : ");
		scanf("%d", &enm);
		enm ? (p[i].age_level = minor) : (p[i].age_level = major);

		//Clearing input stream
		while (getchar() != '\n');

		printf("\nEnter name of the customer : ");
		gets(p[i].policy_name);
		printf("\nEnter the duration (in years) : ");
		scanf("%d", &p[i].duration_in_year);
	}
	system("cls");
	for (i = 0; i < MAX; i++){
		printf("\n%d\t%d", p[i].gender, p[i].age_level);
		printf("\t%s\t%d", p[i].policy_name, p[i].duration_in_year);
	}
	_getch();
	return 0;
}
