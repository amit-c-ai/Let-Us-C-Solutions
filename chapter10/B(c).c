#include<stdio.h>
#include<conio.h>
void three_pegs_game(int, char, char, char);
int main(){
	int disks=6;
	three_pegs_game(disks, 'A', 'C', 'B');
	getch();
	return 0;
}

void three_pegs_game(int disks, char from, char to, char aux){
	if(disks==1){
		printf("Move disk %d from peg %c to peg %c\n", disks, from, to);
	}
	else{
		three_pegs_game(disks-1, from, aux, to);
		printf("Move disk %d from peg %c to peg %c\n", disks, from, to);
		three_pegs_game(disks-1, aux, to, from);
	}
}
