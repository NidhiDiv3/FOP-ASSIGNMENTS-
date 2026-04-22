#include <stdio.h>

int main() {
    int marks[5];
    int i;
    float total = 0, percentage;
    int pass = 1;

  
    printf("Enter marks of 5 subjects:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
        
        if(marks[i] < 40) {
            pass = 0;
        }
        
        total += marks[i];
    }

    
    percentage = total / 5;

    if(pass == 0) {
        printf("Result: FAIL\n");
    } else {
        printf("Result: PASS\n");
        printf("Percentage: %.2f%%\n", percentage);

       
        if(percentage >= 75) {
            printf("Grade: Distinction\n");
        } 
        else if(percentage >= 60 && percentage < 75) {
            printf("Grade: First Division\n");
        } 
        else if(percentage >= 50 && percentage < 60) {
            printf("Grade: Second Division\n");
        } 
        else if(percentage >= 40 && percentage < 50) {
            printf("Grade: Third Division\n");
        }
    }

    return 0;
}
