#include <stdio.h>
#include <math.h>

int main() {
    long int binary;
    int decimal = 0, i = 0, rem;

    printf("Enter a binary number: ");
    scanf("%ld", &binary);

    while(binary != 0) {
        rem = binary % 10;              // get last digit
        decimal += rem * pow(2, i);    // convert to decimal
        binary = binary / 10;          // remove last digit
        i++;
    }

    printf("Decimal equivalent = %d\n", decimal);

    return 0;
}
