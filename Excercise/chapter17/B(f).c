#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct library{
	int acc_no;
	char title[10];
	char author[20];
	float price;
	int flag;
}arr[50];

typedef struct library library;
int books;

void display(library arr[]){
	int i;
	for(i=0; i<books; i++){
		printf("book %d", i+1);
		printf("\n\taccession number: %d", arr[i].acc_no);
		printf("\n\ttitle: %s", arr[i].title);
		printf("\n\tauthor: %s", arr[i].author);
		printf("\n\tprice: %f\n", arr[i].price);
	}
	getch();
}

void booksOfAuthor(library arr[], char *author){
	int i;
	printf("\nList of books of given author:");
	for(i=0; i<books; i++){
		if(strcmp(arr[i].author, author)==0){
			printf("\n\taccession number: %d", arr[i].acc_no);
			printf("\n\ttitle: %s", arr[i].title);
			printf("\n\tauthor: %s", arr[i].author);
			printf("\n\tprice: %f\n\n", arr[i].price);		
		}
	}
	getch();
}

void listTitle(library arr[], int acc_no){
	int i;
	for(i=0; i<books; i++){
		if(arr[i].acc_no==acc_no){
			printf("\n\taccession number: %d", arr[i].acc_no);
			printf("\n\ttitle: %s\n", arr[i].title);		
		}
	}
	getch();
}

int compare(const void * a, const void * b){
	return (*(int *)a - *(int *)b);
}
void inOrder(library arr[]){
	qsort(arr, books, sizeof(library), compare);
	display(arr);
}

int main(){
	int choice, acc_no; books=0;
	char author[20];
	while(1){
		printf("1. Add book information\n2. Display book information\n3. List all books of given author\n4. List the title of specified book\n5. List the count of books in the library\n6. List the books in the order of accession number\n7. Exit\n");
		scanf("%d", &choice);
		
		switch (choice){
			case 1:
				system("cls");
				printf("Enter information: ");
				printf("\n\taccession number: ");
				scanf("%d", &arr[books].acc_no);
				printf("\ttitle: ");
				fflush(stdin);
				gets(arr[books].title);
				printf("\tauthor: ");
				gets(arr[books].author);
				printf("\tprice: ");
				scanf("%f", &arr[books].price);
				books++;
				break;
			case 2:
				system("cls");
				display(arr);
				break;
			case 3:
				system("cls");
				fflush(stdin);
				printf("Enter author: ");
				gets(author);
				booksOfAuthor(arr, author);
				break;
			case 4:
				system("cls");
				printf("Enter accession number: ");
				scanf("%d", &acc_no);
				listTitle(arr, acc_no);
				break;
			case 5:
				system("cls");
				printf("Total books in library: %d\n", books);
				break;
			case 6:
				system("cls");
				printf("List in order: ");
				inOrder(arr);
				break;
			case 7:
				exit(1);
			default:
				printf("Wrong choice\n");
		}
	}
	return 0;	
}
