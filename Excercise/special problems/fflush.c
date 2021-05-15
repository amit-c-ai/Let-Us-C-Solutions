#include<stdio.h>
#include<conio.h>
int main(){
	char another;
	int num;
	do{
		printf("Enter a number : ");
		scanf("%d", &num);
		printf("Sqrare of %d is %d\n", num, num*num);
		printf("Want to enter another number (y/n): ");
		fflush(stdin);
		
		/* After supplying a number when we hit the enter key, scanf assigns 
		the number to variable num and keeps the enter key unread in the 
		keyboard buffer. So when supplying y/n scanf will read enter key.
		fflush() removes any data remaining in the buffer. argument to 
		fflush() must be the buffer which is to be flushed, here it is 
		stdin i.e. standard input device keyboard. */
		
		scanf("%c", &another);  //scanf(" %c", &another);  will also work without using fflush
	}while(another=='y');
	getch();
	return 0;
}
