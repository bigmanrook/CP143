#include <stdio.h>

int main()
{
    float target, investment;
    int year;

    scanf("%f", &target); // Input handled by CodeRunner

    investment = 10000.0;
    year = 0;
    while (investment < target) {

    	// MISSING CODE - YOUR CODE WILL BE INSERTED HERE
    	if (year<=4) {

                investment=investment*1.05;

    	}
    	else {

                investment=investment-100;
                investment=investment*1.05;

    	}
    	year++;

    }

    printf("You will take %d years to reach your target.\n", year);
    printf("Your investment will then be worth R%.2f.", investment);

    return 0;
}
