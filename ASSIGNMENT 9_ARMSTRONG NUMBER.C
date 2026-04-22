#include <stdio.h>

int main() {
    int num, original, digit;
    int sum = 0;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    original = num;

    
    while(num > 0) {
        digit = num % 10;          // get last digit
        sum += digit * digit * digit; // cube of digit
        num = num / 10;            // remove last digit
    }

    
    if(sum == original) {
        printf("It is an Armstrong number.\n");
    } else {
        printf("It is not an Armstrong number.\n");
    }

    return 0;
}
