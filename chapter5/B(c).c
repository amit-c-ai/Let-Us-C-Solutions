#include<stdio.h>
#include<conio.h>
int main(){
	int total_sticks=21, turn=0, pick, comp_pick;
	while(1){
		if(turn==0){
			printf("Matchsticks remaining : %d\n", total_sticks);
		
			if(total_sticks==1){		
				printf("\nYou lost the game.");
				break;
			}
		
			printf("Your turn...\n");
			rightpick:
			printf("Number of sticks you want to pick(1 or 2 or 3 or 4) : ");
			scanf("%d", &pick);
			if(!(pick>=1 && pick<=4)){
				printf("You picked wrong number of sticks.\n");
				goto rightpick;
			}
			total_sticks -= pick;
			turn = 1;
		}
	
		else if(turn==1){
			printf("\nMatchsticks remaining : %d\n", total_sticks);
		
			if(total_sticks==1){
				printf("\nComputer lost the game.");
				break;
			}
		
			printf("Computer's turn...\n");
			comp_pick = 5-pick;
			printf("Computer picked %d sticks\n\n", comp_pick);
			total_sticks -= comp_pick; 
			turn = 0;		
		}
	}
	getch();
	return 0;
}
