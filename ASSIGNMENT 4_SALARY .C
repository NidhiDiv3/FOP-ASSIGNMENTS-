#include <stdio.h>

int main() {
    float basic, hra, ta, gross, tax, net;

    // Input basic salary
    printf("Enter Basic Pay: ");
    scanf("%f", &basic);

    // Calculate allowances
    hra = 0.10 * basic;   // 10% HRA
    ta  = 0.05 * basic;   // 5% TA

    // Gross salary
    gross = basic + hra + ta;

    // Professional tax (2% of gross salary)
    tax = 0.02 * gross;

    // Net salary
    net = gross - tax;

    // Output
    printf("\n--- Salary Details ---\n");
    printf("Basic Pay = %.2f\n", basic);
    printf("HRA (10%%) = %.2f\n", hra);
    printf("TA (5%%) = %.2f\n", ta);
    printf("Gross Salary = %.2f\n", gross);
    printf("Professional Tax (2%%) = %.2f\n", tax);
    printf("Net Salary = %.2f\n", net);

    return 0;
}
