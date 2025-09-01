#include <stdio.h>
#include <stdlib.h>

int diceRoll(void);
int playerTurn(void);

int main()
{
    unsigned seed; // random number generator seed
    scanf("%u", &seed); // input is handled by CodeRunner
    srand(seed);

    printf("\nPlayer score: %d\n", playerTurn());

    return 0;
}

int diceRoll(void) {
    int roll = 1 + rand() % 6;
    printf("%d ", roll);
    return roll;
}

// MISSING CODE - YOUR CODE WILL BE INSERTED HERE

int playerTurn(void){

    int score, n1, n2, dif;
    n1 = diceRoll();
    n2 = diceRoll();
    dif = n2-n1;
    score =  n1 + n2;

      if (dif<0)
     {
        dif = dif*-1;
     }
    if (((dif==0)||(dif==5)))
     {
        return score + playerTurn();
     }

     return score;

}
