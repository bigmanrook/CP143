#include <stdio.h>
#include <stdlib.h>

int main()
{
    float investment;
    int year;

    scanf("%f", &investment); // Input handled by CodeRunner

    for (year = 1; year <= 10; year++) {

              if (year <=4) {

                    investment = investment*1.07;
                    investment = investment+1000;

                }
              if (year>4&&year<=10) {

                    investment = investment*1.07;
                    investment = investment+1500;

                }

    }

    printf("After 10 years, your investment will be worth R%.2f.", investment);

    return 0;
}
