#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int len(int p[], int); 
bool isEmpty(int);
void retrieve_left(int p[], int, int);
void retrieve_right(int p[], int, int);
void insert_left(int p[], int, int, int);
void insert_right(int p[], int , int , int);
bool isFull(int, int);
void show(int p[], int, int);
int max;
int main(){
	int *p, i, n, chose, value;
	char stop;
	printf("Enter the maximum size of dequeue: ");
	scanf("%d", &max);
	p = (int *) malloc(max * sizeof(int));
	for(i=0; i<max; i++){
		p[i]=0;
	}
	
	while(true){
		printf("1. Retrieve left\n2. Retrieve right\n3. Insert left\n4. Insert right\n5. Show\nChoose: ");
		scanf("%d", &chose);
	
		switch(chose){
			case 1:
				retrieve_left(p, len(p, max), max);
				break;
			case 2:
				retrieve_right(p, len(p, max), max);
				break;
			case 3:
				printf("Enter value: ");
				scanf("%d", &value);
				insert_left(p, len(p, max), max, value);
				break;
			case 4:
				printf("Enter value: ");
				scanf("%d", &value);
				insert_right(p, len(p, max), max, value);
				break;
			case 5:
				show(p, len(p, max), max);
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
}

int len(int p[], int max){
	int i, count=0;
	for(i=0; i<max; i++){
		if(p[i]==0){
			count++;
		}
	}
	return max-count;
}

bool isEmpty(int length){
	if(length==0){
		return true;
	}
	return false;
}

bool isFull(int length, int max){
	printf("length: %d  max: %d\n", length, max);
	if(length==max){
		return true;
	}
	return false;
}

void show(int p[], int length, int max){
	int i, j;
	printf("show length: %d\n", length);
	if(length==0){
		printf("Empty array");
	}
	else{ 
		for(i=0; i<length; i++){
			if(p[i]!=0)
				break;
		}
		for(j=i; j<max; j++){
			if(p[j]!=0)
				printf("%d  ", p[j]);
		}		
		printf("\nfull: ");
		for(i=0; i<max; i++){
				printf("%d  ", p[i]);
		}
	}
}

void retrieve_left(int p[], int length, int max){
	int i;
	if(!isEmpty(length)){
		for(i=0; i<max; i++){
			if(p[i]!=0)
				break;
		}
		p[i]=0;
	}
	else{
		printf("/nDequeue Empty");
	}
}

void retrieve_right(int p[], int length, int max){
	int i;
	if(!isEmpty(length)){
		for(i=max-1; i>=0; i--){
			if(p[i]!=0)
				break;
		}
		p[i]=0;
	}
	else{
		printf("/nDequeue Empty");
	}
}

void insert_left(int p[], int length, int max, int value){
	printf("\ninsert length: %d\n", length);
	if(!isFull(length, max)){
		int i;
		for(i=max; i>0; i--){
//			k=p[i];
			p[i]=p[i-1];
		}
		p[0]=value;
	}
	else{
		printf("\nDequeue Full");
	}
}

void insert_right(int p[], int length, int max, int value){
	int i;
	if(!isFull(length, max)){
		for(i=max; i>=0; i--){
			if(p[i]!=0)
				break;
		}
		p[i+1]=value;
	}
	else{
		printf("\nDequeue Full");
	}
}

