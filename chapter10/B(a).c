#include <stdio.h>
#include <math.h>
long decimalToBinary(int);                          //(1)without using recursion
long decimalToBinaryRecursive(int);                 //(2)using recursion
int main()
{
    int decimalnum;
    printf("Enter a Decimal Number: ");
    scanf("%d", &decimalnum);
    printf("Equivalent Binary Number is: %ld     (without recursive)", decimalToBinary(decimalnum));
    printf("\nEquivalent Binary Number is: %ld     (with recursive)", decimalToBinaryRecursive(decimalnum));
	return 0;
}

long decimalToBinary(int decimalnum)
{
    long binarynum = 0;
    int rem, temp = 1;

    while (decimalnum!=0)
    {
        rem = decimalnum%2;
        decimalnum = decimalnum / 2;
        binarynum = binarynum + rem*temp;
        temp = temp * 10;
    }
    return binarynum;
}

long decimalToBinaryRecursive(decimalnum){
	int binarynum;
	if(decimalnum==0)
		binarynum=0;
	else
		binarynum = decimalnum%2 + 10 * decimalToBinaryRecursive(decimalnum/2); 
		
	return binarynum;
}

