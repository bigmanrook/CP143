#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Input, r;
    float v, i;

    while (Input!=4) {

        printf("Menu Options: \n1. Resistance Calculations\n2. Voltage Calculations\n3. Current Calculations\n4. Exit Program\n");
    printf("Please enter your choice: ");
    scanf("%d", &Input);

        if (Input==4)
        {
            printf("Quitting...");
        }

        if (Input==1)
        {

            printf("Please enter the applied voltage (V): ");
            scanf("%f", &v);
            printf("Please enter the current (mA): ");
            scanf("%f", &i);

            if (i<0||v<0) {
                printf("You cannot enter in a negative value!");
            }
            if (i==0||v==0) {
                printf("You cannot enter in a negative value!");
            }

            r = (v/(i/1000));
            printf("The resistance is: %d", r);

        }

        if (Input==2)
        {

            printf("Please enter the resistance (ohms): ");
            scanf("%i", &r);
            printf("Please enter the current (mA): ");
            scanf("%f", &i);


            if (i<0||r<0) {
                printf("You cannot enter in a negative value!");
            }
            if (i==0||r==0) {
                printf("You cannot enter in a negative value!");
            }

            v = (i/1000)*r;
            printf(printf("The Voltage is: %f\n", v));
        }
        if (Input==3)
        {

            printf("Please enter the resistance (ohms): ");
            scanf("%i", &r);
            printf("Please enter the applied voltage (V):");
            scanf("%f", &v);

            if (v<0||r<0) {
                printf("You cannot enter in a negative value!");
            }
            if (v==0||r==0) {
                printf("You cannot enter in a negative value!");
            }

            i = v/r;
            printf("The current is: %f", i);




        }
        if (Input<=0||Input>5) {
            printf("An invalid menu option.");
        }

        }



    return 0;
}
