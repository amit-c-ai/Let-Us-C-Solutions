#include<stdio.h>
#include<conio.h>

#define MAX 10

void lAdd(int *l, int *q, int *r, int num);
void rAdd(int *l, int *q, int *r, int num);
void show(int *q, int *rside);
int rFetch(int *l, int *q, int *r);
int lFetch(int *l, int *q, int *r);

int main()
	{
int que[MAX];
int left, right;
left = right = -1;

rAdd(&left, que, &right, 10);
rAdd(&left, que, &right, 20);
rAdd(&left, que, &right, 30);
show(que, &right);

lAdd(&left, que, &right, 5);
show(que, &right);

lFetch(&left, que, &right);
show(que, &right);

rFetch(&left, que, &right);
show(que, &right);

_getch();
return 0;
}

/*Insertion from right*/
void rAdd(int *lside, int *q, int *rside, int num)
{
if (*rside == MAX - 1)
{
	printf("\nDequeue is full, no more insertion is possible.\n");
	return;
}

if (*rside == -1)
	*rside = 0;
else
	(*rside)++;
q[*rside] = num;
}

/*Insertion from left*/
void lAdd(int *lside, int *q, int *rside, int num)
{
int i;

if (*rside == MAX - 1)
{
	printf("\nDequeue is full, no more insertion is possible.\n");
	return;
}

for (i = *rside; i >= 0; i--)
	q[i+1] = q[i];

q[0] = num;

if (*lside == -1)
	*lside = 0;
(*rside)++;
}

/*Dislays the list*/
void show(int *q, int *rside)
{
int i;

printf("\n\nList\n");
for (i = 0; i <= *rside; i++)
	printf("%d\t", q[i]);
printf("\n\n");
}

/*Retrieval from left*/
int lFetch(int *lside, int *q, int *rside)
{
int item = q[0], i;
if (*rside == -1)
{
	printf("\nList is empty.\n");
	return NULL;
}

for (i = 0; i < *rside; i++)
	q[i] = q[i + 1];

(*rside)--;
return item;
}

/*Retrieval from right*/
int rFetch(int *lside, int *q, int *rside)
{
if (*rside == -1)
{
	printf("\nList is empty.\n");
	return NULL;
}
int item = q[*rside];
(*rside)--;
return item;
}
