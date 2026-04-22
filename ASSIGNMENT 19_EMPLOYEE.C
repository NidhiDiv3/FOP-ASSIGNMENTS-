#include <stdio.h>
#include <string.h>

#define MAX 100

// Structure definition
struct EMPLOYEE {
    char name[50];
    char designation[50];
    char gender;              // M / F
    char doj[15];             // Date of Joining (dd/mm/yyyy)
    float salary;
};

// Function prototypes
void input(struct EMPLOYEE e[], int n);
void display(struct EMPLOYEE e[], int n);
void countGender(struct EMPLOYEE e[], int n);
void salaryAbove10000(struct EMPLOYEE e[], int n);
void asstManager(struct EMPLOYEE e[], int n);

int main() {
    struct EMPLOYEE emp[MAX];
    int n;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    input(emp, n);

    printf("\n--- Employee Details ---\n");
    display(emp, n);

    printf("\nTotal number of employees = %d\n", n);

    countGender(emp, n);
    salaryAbove10000(emp, n);
    asstManager(emp, n);

    return 0;
}

// Function to input employee details
void input(struct EMPLOYEE e[], int n) {
    for(int i = 0; i < n; i++) {
        printf("\nEnter details of employee %d\n", i+1);

        printf("Name: ");
        scanf("%s", e[i].name);

        printf("Designation: ");
        scanf("%s", e[i].designation);

        printf("Gender (M/F): ");
        scanf(" %c", &e[i].gender);

        printf("Date of Joining (dd/mm/yyyy): ");
        scanf("%s", e[i].doj);

        printf("Salary: ");
        scanf("%f", &e[i].salary);
    }
}

// Function to display employees
void display(struct EMPLOYEE e[], int n) {
    for(int i = 0; i < n; i++) {
        printf("\nName: %s", e[i].name);
        printf("\nDesignation: %s", e[i].designation);
        printf("\nGender: %c", e[i].gender);
        printf("\nDate of Joining: %s", e[i].doj);
        printf("\nSalary: %.2f\n", e[i].salary);
    }
}

// Function to count male and female employees
void countGender(struct EMPLOYEE e[], int n) {
    int male = 0, female = 0;

    for(int i = 0; i < n; i++) {
        if(e[i].gender == 'M' || e[i].gender == 'm')
            male++;
        else if(e[i].gender == 'F' || e[i].gender == 'f')
            female++;
    }

    printf("\nMale Employees = %d", male);
    printf("\nFemale Employees = %d\n", female);
}

// Function to display employees with salary > 10000
void salaryAbove10000(struct EMPLOYEE e[], int n) {
    printf("\nEmployees with salary > 10000:\n");

    for(int i = 0; i < n; i++) {
        if(e[i].salary > 10000) {
            printf("%s (%0.2f)\n", e[i].name, e[i].salary);
        }
    }
}

// Function to display employees with designation "Asst Manager"
void asstManager(struct EMPLOYEE e[], int n) {
    printf("\nEmployees with designation 'Asst Manager':\n");

    for(int i = 0; i < n; i++) {
        if(strcmp(e[i].designation, "Asst Manager") == 0) {
            printf("%s\n", e[i].name);
        }
    }
}
