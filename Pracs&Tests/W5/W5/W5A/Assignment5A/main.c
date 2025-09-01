#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double round_to_5c(double amount);


int main()
{
    double amount;
    printf("Enter an amount of money: ");
    scanf("%lf", &amount);
    printf("The amount rounded to: %.2lf", round_to_5c(amount));

    return 0;
}

double round_to_5c(double amount){

    if (amount<0){

    return ceil(amount*20)/20; //multiply by 20 to get the number nearest to multiple of 5, round, then divide by 20 to get the nearest multiple of 5 in cents

    }
    else if (amount>0){

    return floor(amount*20)/20;

    }

}
