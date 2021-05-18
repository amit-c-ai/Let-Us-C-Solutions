#include<stdio.h>
typedef struct employee{
	unsigned d : 5;
	unsigned m : 4;
	unsigned y : 12;
}emp;
void swap(emp *, emp *);
int main(void){
	int i, j;
	emp e[10], a[10];
	e[0].y = 2010; e[0].m = 12; e[0].d = 10;
	e[1].y = 1990; e[1].m = 3; e[1].d = 23;
	e[2].y = 1995; e[2].m = 4; e[2].d = 13;
	e[3].y = 2001; e[3].m = 1; e[3].d = 13;
	e[4].y = 1990; e[4].m = 3; e[4].d = 20;
	e[5].y = 1992; e[5].m = 6; e[5].d = 19;
	e[6].y = 2010; e[6].m = 12; e[6].d = 10;
	e[7].y = 1990; e[7].m = 3; e[7].d = 23;
	e[8].y = 1995; e[8].m = 4; e[8].d = 13;
	e[9].y = 2001; e[9].m = 1; e[9].d = 13;


	for (i = 0; i < 10; i++)
		a[i] = e[i];

	for (i = 0; i < 10; i++){
		for (j = i + 1; j < 10; j++){
			if (a[j].y < a[i].y)
				swap(&a[i], &a[j]);
			if (a[j].y == a[i].y){
				if (a[j].m < a[i].m)
					swap(&a[i], &a[j]);
				if (a[j].m == a[i].m)
					if (a[j].d < a[i].d)
						swap(&a[i], &a[j]);
			}
		}
	}

	for(i=0; i<10; i++){
		printf("%2d %-3d%4d\n", a[i].d, a[i].m, a[i].y);
	}
	return 0;
}
void swap(emp *a, emp *b){
	emp temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
