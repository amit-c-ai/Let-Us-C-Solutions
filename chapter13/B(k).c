#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
void insert_left(int *l, int *q, int *r, int num);
void insert_right(int *l, int *q, int *r, int num);
void show(int *q, int *rside);
int retrieve_right(int *l, int *q, int *r);
int retrieve_left(int *l, int *q, int *r);
int MAX;
int main(){
	int *que, left, right, value, chose;
	char stop;
	left = right = -1;
	
	printf("Enter size of queue: ");
	scanf("%d", &MAX);
	
	que = (int *) malloc(MAX * sizeof(int));
	
	while(true){
		printf("1. Retrieve left\n2. Retrieve right\n3. Insert left\n4. Insert right\n5. Show\nChoose: ");
		scanf("%d", &chose);
	
		switch(chose){
			case 1:
				retrieve_left(&left, que, &right);
				break;
			case 2:
				retrieve_right(&left, que, &right);
				break;
			case 3:
				printf("Enter value: ");
				scanf("%d", &value);
				insert_left(&left, que, &right, value);
				break;
			case 4:
				printf("Enter value: ");
				scanf("%d", &value);
				insert_right(&left, que, &right, value);
				break;
			case 5:
				show(que, &right);
				break;
			default:
				printf("\nWrong Choice\n");
		}
		printf("\nShow option (y/n): ");
		fflush(stdin);
		scanf("%c", &stop);
		if(stop=='n')
			break;
	}

	return 0;
}

/*Insertion from right*/
void insert_right(int *lside, int *q, int *rside, int num){
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
void insert_left(int *lside, int *q, int *rside, int num){
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
void show(int *q, int *rside){
	int i;

	printf("\nList: \n");
	for (i = 0; i <= *rside; i++)
		printf("%d ", q[i]);
	printf("\n");
}

/*Retrieval from left*/
int retrieve_left(int *lside, int *q, int *rside){
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
int retrieve_right(int *lside, int *q, int *rside){
	if (*rside == -1)
	{
		printf("\nList is empty.\n");
		return NULL;
	}
	int item = q[*rside];
	(*rside)--;
	return item;
}
