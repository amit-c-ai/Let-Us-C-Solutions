#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int len(int p[], int); 
bool isEmpty();
void retrieve_left();
void retrieve_right();
void insert_left();
void insert_right();
bool isFull();
void show();
int max;
int main(){
	char *l, *r, value, stop;
	int i, chose;
	printf("Enter size of dequeue: ");
	scanf("%d", &max);
	
	l = (char *) malloc(max * sizeof(char));
	r = l;
	for(i=0; i<5; i++){
		printf("%d ", l[i]);
	}
//	while(true){
//		
//		printf("1. Retrieve left\n2. Retrieve right\n3. Insert left\n4. Insert right\n5. Show\nChoose: ");
//		scanf("%d", &chose);
//	
//		switch(chose){
//			case 1:
//				retrieve_left();
//				break;
//			case 2:
//				retrieve_right();
//				break;
//			case 3:
//				printf("Enter value: ");
//				scanf("%c", &value);
//				insert_left();
//				break;
//			case 4:
//				printf("Enter value: ");
//				scanf("%c", &value);
//				insert_right();
//				break;
//			case 5:
//				show();
//				break;
//			default:
//				printf("\nWrong Choice\n");
//		}
//		printf("\nShow option (y/n): ");
//		fflush(stdin);
//		scanf("%c", &stop);
//		if(stop=='n')
//			break;
//	}
}
