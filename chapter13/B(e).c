#include<stdio.h>
void modify(int []);
int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9,0}, i;
	modify(arr);
	for(i=0; i<10; i++){
		printf("%d ", arr[i]);
	}
}

void modify(int arr[]){
	int i, n=10;
	for(i=0; i<n; i++){
		arr[i]*=3;
	}
}
