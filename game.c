#include <stdio.h>

int winner_game(int x,int y){
	int winner=0;
	//CASES

	if(x==1 && y==1)
		winner=0;
	if(x==2 && y==2)
		winner=0;
	if(x==3 && y==3)
		winner=0;
	if(x==1 && y==2)
		winner=2;
	if(x==1 && y==3)
		winner=1;
	if(y==1 && x==2)
		winner=1;
	if(y==1 && x==3)
		winner=2;
	return winner;
}

int main(){

	int round,player1=0,player2=0,winner=0,player1_counter=0,player2_counter=0;

	printf("*This is the game of rock, paper, scissors*\n");
	printf("*Input 1 for rock, 2 for paper and 3 for scissors*\n");

    for(round=1; round<=3; round++)
    {
	printf("\nROUND %d\n",round);

	printf("\nPlayer one's turn: "); scanf("%d", &player1);
	printf("Player two's turn: "); scanf("%d", &player2);
	winner=winner_game(player1,player2);
	if(winner==1){
		printf("*Player1 Won*\n");
		player1_counter++;
		}
	if(winner==2){
		printf("*Player2 Won*\n");
		player2_counter++;
		}
	if(winner==0) printf("*Tables*\n");
    }

	if(player1_counter==1 && player2_counter==0){
		printf("**Player1 is the absolute winner**\n");
		return 0;}
	if(player2_counter==1 && player1_counter==0){
                printf("**Player2 is the absolute winner**\n");
                return 0;}
	if(player1_counter==0 && player2_counter==0){
		printf("Nobody won, play again\n");
		return 0;}
}
