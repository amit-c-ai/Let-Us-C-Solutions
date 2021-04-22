#include<stdio.h>
int main(){
	int arr[]={1,2,3,4,5};
	int *j;
	j=arr;
	printf("%d", *(j+3));
	return 0;
}
