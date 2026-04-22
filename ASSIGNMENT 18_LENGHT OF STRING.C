#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[100];

    // Input strings
    printf("Enter a string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter another string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters
    str1[strcspn(str1, "\n")] = 0;
    str2[strcspn(str2, "\n")] = 0;

    // i. Length of string
    printf("\nLength of string = %lu\n", strlen(str1));

    // ii. String reversal
    strcpy(temp, str1);
    strrev(temp);   // may not work in all compilers
    printf("Reversed string = %s\n", temp);

    // iii. Equality check
    if(strcmp(str1, str2) == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");

    // iv. Palindrome check
    strcpy(temp, str1);
    strrev(temp);
    if(strcmp(str1, temp) == 0)
        printf("String is a Palindrome\n");
    else
        printf("String is not a Palindrome\n");

    // v. Substring check
    if(strstr(str1, str2) != NULL)
        printf("Second string is a substring of first string\n");
    else
        printf("Second string is NOT a substring of first string\n");

    return 0;
}
