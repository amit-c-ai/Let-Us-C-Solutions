#include<stdio.h>
#include<stdlib.h>
struct queue{
	int data; struct queue *next;
};

typedef struct queue * queuePtr;
queuePtr front, rear;

queuePtr getnode(){
	queuePtr new;
	new = (queuePtr) malloc(sizeof(struct queue));
	return new;
}

void push(int value){
	queuePtr temp;
	temp = getnode();
	temp->data = value;
	temp->next = NULL;
	if(rear==NULL){
		rear = temp; front = temp;
	}
	else{
		temp->next = rear;
		rear = temp;
	}
}

void pop(){
	int item;
	queuePtr temp = rear;
	
	if(front==NULL){
		printf("queue is empty\n");
		return -1;
	}
	else{
		if(front==rear){
			item = temp->data;
			front = rear = NULL;
			free(temp);
		}
		else{
			while(temp->next->next != NULL){
				temp = temp->next;
			}
			item = temp->next->data;
			free(temp->next);
			front = temp;
			temp->next = NULL;
		}
	}
	printf("popped: %d\n", item);
}

void display(){
	queuePtr temp;
	if(front==NULL){
		printf("empty queue\n");
		return;
	}
	temp = rear;
	printf("\n\n");
	while(temp->next != NULL){
		printf("%d\n", temp->data);
		temp = temp->next;
	}
	printf("\n");
}

int main(){
	int choice, value;
	rear=front=NULL;
	while(1){
		printf("1. push\n2. pop\n3. display\n4. exit\n");
		scanf("%d", &choice);
		
		switch (choice){
			case 1:
				printf("Enter value: ");
				scanf("%d", &value);
				push(value);
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(1);
			default:
				printf("wrong choice\n");
				
		}
	}
}
