#include <stdio.h>


int factorial(int n) {
    int i, fact = 1;
    for(i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int choice;
    double x, y, result;

    printf("Simple Calculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Power (x^y)\n");
    printf("6. Factorial (x!)\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &x, &y);
            result = x + y;
            printf("Result = %.2lf\n", result);
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &x, &y);
            result = x - y;
            printf("Result = %.2lf\n", result);
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &x, &y);
            result = x * y;
            printf("Result = %.2lf\n", result);
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &x, &y);
            if(y != 0)
                printf("Result = %.2lf\n", x / y);
            else
                printf("Division by zero is not allowed.\n");
            break;

        case 5:
            printf("Enter base and exponent: ");
            scanf("%lf %lf", &x, &y);
            result = 1;
            for(int i = 1; i <= y; i++) {
                result *= x;
            }
            printf("Result = %.2lf\n", result);
            break;

        case 6:
            printf("Enter a number: ");
            scanf("%lf", &x);
            if(x >= 0)
                printf("Factorial = %d\n", factorial((int)x));
            else
                printf("Factorial not defined for negative numbers.\n");
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
