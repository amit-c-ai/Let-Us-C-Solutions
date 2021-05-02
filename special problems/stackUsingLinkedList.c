#include<stdio.h>
#include<stdlib.h>
struct node{
	int data; struct node *next;
};

typedef struct node * nodePtr;

nodePtr getnode(){
	nodePtr new;
	new = (nodePtr) malloc(sizeof(struct node));
	return new;
}

nodePtr push(nodePtr first, int value){
	nodePtr temp;
	temp = getnode();
	temp->data = value;
	temp->next = first;
	return temp;
}

nodePtr pop(nodePtr first){
	nodePtr temp;
	if(first==NULL){
		printf("Empty Stack.");
		return first;
	}
	temp = first;
	temp = temp->next;
	printf("element popped: %d\n", temp->data);
	free(temp);
	return first;
}

void display(nodePtr first){
	nodePtr temp;
	if(first==NULL){
		printf("Empty Stack.\n");
		return;
	}
	temp = first;
	printf("\n\n");
	while(temp!=NULL){
		printf("%d\n", temp->data);
		temp = temp->next;
	}
	printf("\n");
}

int main(){
	nodePtr first=NULL;
	int choice, value;
	while(1){
		printf("1. push\n2. pop\n3. display\n4. exit\n");
		scanf("%d", &choice);
		
		switch (choice){
			case 1:
				printf("Enter value to push: ");
				scanf("%d", &value);
				first = push(first, value);
				break;
			case 2:
				first = pop(first);
				break;
			case 3:
				display(first);
				break;
			case 4:
				exit(1);
			default:
				printf("Wrong choice");
		}
	}
}
