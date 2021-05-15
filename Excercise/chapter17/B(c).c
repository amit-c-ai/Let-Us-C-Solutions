#include<stdio.h>
#include<string.h>

struct engine{
	char serial[4];
	int yom;
	char material[20];
	int quantity;
};

void recieve(struct engine maruti[], char *, char *);

int main(){
	struct engine maruti[30] = {"AA0", 2005, "Iron", 20,
								"AA1", 2007, "Steel", 13,
								"AA2", 1992, "Aluminium", 57,
								"AA3", 2005, "Stainless Steel", 7,
								"AA8", 2007, "Steel", 34,
								"AA9", 2010, "Steel", 14,
								"BB1", 2005, "Iron", 20,
								"BB2", 2007, "Steel", 13,
								"BB3", 1992, "Aluminium", 57,
								"BB4", 2005, "Stainless Steel", 7,
								"BB5", 2007, "Steel", 34,
								"BB6", 2010, "Steel", 14,
								"BB7", 2005, "Iron", 20,
								"BB8", 2007, "Steel", 13,
								"BB9", 1992, "Aluminium", 57,
								"CC1", 2005, "Stainless Steel", 7,
								"CC2", 2007, "Steel", 34,
								"CC3", 2010, "Steel", 14,
								"CC4", 2005, "Iron", 20,
								"CC5", 2007, "Steel", 13,
								"CC6", 1992, "Aluminium", 57,
								"CC7", 2005, "Stainless Steel", 7,
								"CC8", 2007, "Steel", 34,
								"DD1", 2010, "Steel", 14
							};
	char from[4]= "BB1", to[4]= "CC6";
	
	recieve(maruti, from, to);
}

void recieve(struct engine maruti[], char *from, char *to){
	int i;
	for(i=0; strcmp(maruti[i].serial, from)!=0; i++);
	i++;
	while(strcmp(maruti[i].serial, to)!=0){
		printf("\nInformation %s: ", maruti[i].serial);
		printf("\n\tYear of manufacture: %d", maruti[i].yom);
		printf("\n\tMaterial used: %s", maruti[i].material);
		printf("\n\tQuantity: %d", maruti[i].quantity);
		i++;
	}
}
