#include <stdio.h>
#include <stdlib.h>

int collatzconjecture(unsigned long long n) {
    int steps = 0;

    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
            steps=steps+1;
        } else {
            // Check if 3 * n + 1 would overflow
            if (n > (ULLONG_MAX - 1) / 3) {
                printf("Overflow would occur at n = %llu\n", n);
                break;
            }
            n = 3ULL * n + 1ULL;
            steps=steps+1;
        }
        printf("%llu\n", n);
    }

    return steps;
}

int main() {
    int steps = 0, max_steps = 0;
    int iter, max_iter = 1;

    /* printf("Please enter how many times the algorithm should iterate:\n");
    scanf("%d", &iter);

    for (int i = 1; i <= iter; i++) {
        //steps = collatzconjecture(i);


        if (steps > max_steps) {
            max_steps = steps;
            max_iter = i;
        }

        //printf("Iteration %d complete: input = %d, steps: %d\n", i, i, steps);
    } */
    steps = collatzconjecture(35655);
    printf("Longest sequence was for input: 35655, with %d steps.\n",steps);

    return 0;
}

