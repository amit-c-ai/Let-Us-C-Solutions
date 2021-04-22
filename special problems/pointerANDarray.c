#include<stdio.h>
void display1(int *, int);
void display2(int [], int);
int main(){
	int num[] = {24, 34, 12, 44, 56, 17};
	display1(&num[0], 6);
	printf("\n");
	display2(&num[0], 6);                          //in place of &num[0] we can also pass num
	return 0;
}

void display1(int *j, int n){
	int i;
	for(i=0; i<n; i++){
		printf("element: %d ", *j);
		j++;  //increment poonter to point next element
	}	
}

void display2(int j[], int n){
	int i;
	for(i=0; i<n; i++){
		printf("element: %d ", j[i]);
	}	
}

/* special note: we know that we can use 'num' to pass base address of array i.e. num == &num[0].
   so *num will give value at num[0], also *(num+0) will give the same.
   
   so *(num+1) will refer 1st element of array. Same thing happens in for loop when we say, num[i],
   the C compiler internally converts it to *(num+i).
   
   so the interesting thing:
		num[i]
	   *(num+i)
	   *(i+num)   
	   i[num]
	these are all same, i.e. num[i]==i[num] .............strange ;)     */

