#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
char Player() {

	char player;
	printf("1.Press 'R'= Rock\n2.Press 'P'= Paper\n3.Press 'S'= Scissors\n");
	scanf_s("%c", &player);
	return player;
}
char Opponent(){

	int OP;
	OP = rand() % 3;
	char o[] = {'R','P','S'};
	return o[OP];

}
void VS() {
	srand(time(NULL));
	char P = Player();
	char O = Opponent();
	
		printf("Player : %c Opponent : %c \n", P, O);
				
			if (P == O) {

				printf("..We have a tie..\n");

			}
			else {
				if (P == 'R' && O == 'S') {
					printf("You won!!!\n");
				}
				else if (P == 'P' && O == 'R') {
					printf("You won!!!\n");
				}
				else if (P == 'S' && O == 'P') {
					printf("You won!!!\n");
				}
				else {
					printf("You lose....\n");
				}

			}
			
	
	

	}


int main() {

	
	VS();


	return  0;

}