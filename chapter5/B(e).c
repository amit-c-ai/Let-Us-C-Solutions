#include<stdio.h>
#include<conio.h>
#include<math.h>
long decimalToOctal(int);
int main()
{
    int decimalnum;
    printf("Enter a Decimal Number: ");
    scanf("%d", &decimalnum);
    printf("Equivalent Binary Number is: %ld", decimalToOctal(decimalnum));
    getch();
    return 0;
}
long decimalToOctal(int decimalnum)
{
    long octalnum = 0;
    int rem, temp = 1;

    while (decimalnum!=0)
    {
        rem = decimalnum%8;
        decimalnum = decimalnum / 8;
        octalnum = octalnum + rem*temp;
        temp = temp * 10;
    }
    return octalnum;
}
