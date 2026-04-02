int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

int factorialRec(int n) {
    if(n == 0 || n == 1)
        return 1;
    else
        return n * factorialRec(n - 1);
}

#include <stdio.h>

int factorial(int n);
int factorialRec(int n);

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorial (without recursion) = %d\n", factorial(num));
    printf("Factorial (with recursion) = %d\n", factorialRec(num));

    return 0;
