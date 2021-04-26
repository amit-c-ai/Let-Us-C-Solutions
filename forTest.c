#include<stdio.h>
int main(){
//	unsigned int arr[3][3] = {{2,4,6}, {9,1,10}, {16,64,5}};
//	printf("arr: %u   *arr: %u   **arr: %u", arr, *arr, **arr);
//	printf("1. %d\n", **arr);
//	printf("2. %d\n", **arr<*(*arr+2));	
//	printf("3. %d\n", (int)*(arr+2)/(*(*arr+1)>**arr));
//	printf("4. %d\n", *(arr[1]+1) | arr[1][2]);
//	printf("5. %d\n", *(arr[0]) | *(arr[2]));
//	printf("6. %d\n", arr[1][1] < arr[0][1]);
//	printf("7. %d\n", arr[2][1] & arr[2][0]);
//	printf("8. %d\n", arr[2][2] | arr[0][1]);
//	printf("9. %d\n", arr[0][1] ^ arr[0][2]);
//	printf("10. %d\n", ++**arr + --arr[1][1]);
    int i=5;
//    printf("%x %x %d %u",&i, &i+1, sizeof(int), &i);
    printf("%x %d %x",&i, sizeof(long double), &i+1);
	return 0;
}
