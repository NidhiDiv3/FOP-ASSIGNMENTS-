int gcd(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("\nSmallest divisor of %d = %d\n", num1, smallestDivisor(num1));
    printf("Smallest divisor of %d = %d\n", num2, smallestDivisor(num2));

    printf("\nGCD of %d and %d = %d\n", num1, num2, gcd(num1, num2));

    return 0;
