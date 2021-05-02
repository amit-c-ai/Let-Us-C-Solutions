#include<stdio.h>
#include<conio.h>
#include<Windows.h>

#define DEVC /*Uncomment this if using DevC++*/
//#define VS /*Uncomment this if using Visual Studio*/
//#define TC /*Uncomment this if using Turbo C++*/

#define LEAP (!(yr%4))/*Checing for leap year*/
#define UpArrowKey 72
#define DownArrowKey 80
#define LeftArrowKey 75
#define RightArrowKey 77
#define EscapeKey 27

int getkey()
{
int ch;
ch = _getch();
if (ch == 0)
{
	ch = _getch();
	return ch;
}
return ch;
}
void short_cal(int year, int month)
{
system("cls");
int j = 1, a = 7, i, x = 1, nod;
int yr, m, mon, curr, next = 0;
for (yr = 1900; yr <= year; yr++)/*Traversing years*/
{
if (yr < year)
	m = 12; /*It will traverse the all months if the year is not what user entered*/
else
	m = month;/*It will traverse till the month user want if the wanted year is encountered.*/
for (mon = 1; mon <= m; mon++)//traversing all months of the year
{
	if (mon == 2)/*If the feb is encountered*/
	{
		if (LEAP)
			nod = 29;
		else
			nod = 28;
	}
	else if (mon == 4 || mon == 6 || mon == 9 || mon == 11)/*Months with 30 days*/
		nod = 30;
	else/*Months with 31 days*/
		nod = 31;
	int i = 1;
	curr = next;/*Current month starts from this day*/
	while (i <= nod)/*This will find the day from which next month will start*/
	{
		next++;
		i++;
		if (next == 7)
		next = 0;
	}
	}
}


//x is dates

j = 1, a = 7, i, x = 1;
printf("\n\n\n\t\t\t\t");
if (month == 1)
	printf("January");
if (month == 2)
	printf("Febraury");
if (month == 3)
	printf("March");
if (month == 4)
	printf("April");
if (month == 5)
	printf("May");
if (month == 6)
	printf("June");
if (month == 7)
	printf("July");
if (month == 8)
	printf("August");
if (month == 9)
	printf("September");
if (month == 10)
	printf("October");
if (month == 11)
	printf("November");
if (month == 12)
	printf("December");
printf("\t %d\n\n", year);

printf("\n\n\n\t\t\t   Sun   Mon   Tue   Wed   Thu   Fri   Sat\n\n");

for (i = 1; x <= nod; i++)
{
	printf("\t\t\t");
	for (j = 1; j <= 7; j++, curr--)
	{
	if (x>9)//maintaining the structure of the calender
		printf("    ");
	else
	printf("     ");
	if (curr>0)//spacing for start the calender from the given day
			printf(" ");
	else//printing of dates begin.
	{
		printf("%d", x);
		if (x <= nod)
			x++;
		if (x>nod)
			break;
	}
	}
	printf("\n\n");//next week

	if (x>nod)
		break;
}
}

int main()
{
int year, month, key = 0;


/*yr is for traversing the year, andn year is the year given by the user.
mon is for traversing
the months and month is the month given by user.
curr contains the starting day of the current
month and next conatains the starting day of the next month.*/


printf("\nEnter the year : ");
scanf("%d", &year);
printf("\nEnter the month : ");
scanf("%d", &month);


#ifdef DEVC
	system("cls");/*clearing screen in DevC++.*/
#endif
#ifdef VS
	system("cls");/*clearing screen in Visual Studio.*/
#endif
#ifdef TC
	clrscr();/*clearing screen in TurboC++.*/
#endif

short_cal(year, month);
while (key != 27)
{
	//getchar();
	//while (getkey != '\0');
	fflush(stdin);
	//while (getch() != NULL);
	//getkey();
	key = getkey();

	if (key == EscapeKey)
		return 0;
	if (key == UpArrowKey)
		short_cal(++year, month);
	if (key == DownArrowKey)
		short_cal(--year, month);
	if (key == RightArrowKey)
	{
		if (month == 12)
		{
			month = 0;
			year++;
		}
		short_cal(year, ++month);
	}
	if (key == LeftArrowKey)
	{
		if (month == 1)
		{
			month = 13;
			year--;
		}
		short_cal(year, --month);
	}
}

_getch();
return 0;
}
