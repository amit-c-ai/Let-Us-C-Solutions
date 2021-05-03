#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Max 20

int compare(const void * a, const void * b);

struct cricketers
{
int avrun;
char name[30];
int age;
int notm;
}india[Max] = {
122, "Sachin Tendulkar", 30, 67,
97, "Virendra Sehwag", 35, 56,
66, "Irfan Pathan", 32, 45,
153, "Yusuf Pathan", 36, 21,
101, "Yuvaraj Singh", 32, 45,
};

int main()
{
int i;
qsort(india, 5, sizeof(struct cricketers), compare);

/*qsort() is a standard library function.

view the link below for more info

http://www.tutorialspoint.com/c_standard_library/c_function_qsort.htm

*/

for (i = 0; i < 5; i++)
{
	printf("Name : %s", india[i].name);
	printf("\nAge : %d", india[i].age);
	printf("\nTotal Test Matches played : %d", india[i].notm);
	printf("\nAverage Run : %d\n\n\n", india[i].avrun);
}
_getch();
return 0;
}

int compare(const void * a, const void * b)
{
return (*(int*)a - *(int*)b);
}
