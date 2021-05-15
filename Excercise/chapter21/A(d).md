## A(d)

   code
   
   
    #include<stdio.h>
    #define _BV(x) (1<<x)
	typedef unsigned char uc;
	int main(void){
		int i=32, j=65, k, l, m, n, o, p;
		printf("i : ");showbits(i);printf("\n");
		printf("j : ");showbits(j);printf("\n");
		printf("35 : ");showbits(35);printf("\n");
		k = i|35; l=~k; m=i&j;
		n=j^32; o=j<<2; p=i>>5;
		printf("k = %d l = %d m = %d\n", k, l, m);
		printf("n = %d o = %d p = %d\n", n, o, p);
		return 0;
	}
	
   output
   
    k = 35 l = -36 m = 0
	n = 97 o = 260 p = 1
	
   Explanation
   
    k : bitwise or of 32(i) and 35 is 35
	l : k is 00100011 so ~k i.e. l is 11011100. Now since msb of l is 1 ans is negative and it is represented in 2's compliment.
	m : bitwise and of i(32) and j(65) gives all bites zero so the answer
	n : bitwise or of j(65) and 32 gives the answer
	o : j is 01000001, left shifting by 2 gives 0000000100000100(16-bit representation) which is 260
	p : i is 00100000, right shiftng by 5 gives 00000001 which is 1