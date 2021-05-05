## [A]

   (a)

    d
    D

   (b)
   
        2	2.537	Life is like that

   (c)

    the person who wins is the one who thinks he can!            (\b does backspace and \r erases everything and go to start of line)

   (d)

    The sixth sick sheikh's sixth ship is sick

## [B]

   (a)

    'a' is an arry which is initialized during declaration, so it can't be modified 
    therefore a++ is illegal.

   (b)

    No error.   (it will output 0)

   (c)

    [Error] n used in scanf undeclared. But if it is printing mistake and
    if we consider there ival then:

    there will be no error but as \n is used in scanf, while giving input pressing
    "enter" after interger value will do nothing, we have to enter another character
    to see output.

   (d)

    input: 27/5/2001                          (%*c ignores the character)
    output: 27-5-2001

   (e)

    [Warning] passing argument 1 of 'sprintf' makes pointer from integer without a cast
    There is no error but it output (null)

   (f)

    No error

## [C]

   (a)

    1. scanf cannot store multi word string
    3. getchar(str) is wrong syntax, str=gettchar() is right, still it can't be used.
    4. same reason as of 3

    2. gets(str) is the perfect option

   (b)

    1. scanf()

   (c)

    All the four options.

   (d)

    Field width specifiers are used to specify the way of displaying an integer, floating point number etc,.

   (e)

    For first column : %-26s
    For second column : %-18s
    For third column : %3.2lf

    #include<stdio.h>
    void main(){
	printf("%-26s\t%-16s\t%3.2f\n", "Discovery of India", "Jawaharlal Nehru", 425.50);
        printf("%-26s\t%-16s\t%3.2f\n", "My Experiments with Truth", "Mahatma Gandhi", 375.50);
	printf("%-26s\t%-16s\t%3.2f\n", "Sunny Days", "Sunil Gavaskar", 95.50);
	printf("%-26s\t%-16s\t%3.2f\n", "One More Over", "Erapalli Prasanna", 85.00);
    }

    
    
    