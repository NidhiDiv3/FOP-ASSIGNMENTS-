#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, n, num;

    printf("How many random numbers you want? ");
    scanf("%d", &n);

    // Seed the random number generator
    srand(time(0));

    printf("\nPseudo-random numbers are:\n");

    for(i = 0; i < n; i++) {
        num = rand();   // generates random number
        printf("%d\n", num);
    }

    return 0;
}
