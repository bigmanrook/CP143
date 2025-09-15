#include <stdio.h>
#include <stdlib.h>

enum CoinTossResult {HEADS, TAILS};

enum CoinTossResult coinToss(void);
int playGame(void);

int main()
{
    unsigned seed; // random number generator seed
    scanf("%u", &seed); // input is handled by CodeRunner
    srand(seed);

    printf("\nPayoff: R%d\n", playGame());

    return 0;
}

enum CoinTossResult coinToss(void) {
    enum CoinTossResult result = (enum CoinTossResult) (rand() % 2);
    if (result == HEADS) {
        printf("H ");
    }
    else {
        printf("T ");
    }
    return result;
}

// MISSING CODE - YOUR CODE WILL BE INSERTED HERE
int playGame(void){

float payoff, count=0;

    if ((!coinToss())){
    payoff = playGame();
        if (payoff==0){
        return 1;
        }

    return 2*payoff;
    }
    return 0;
}
