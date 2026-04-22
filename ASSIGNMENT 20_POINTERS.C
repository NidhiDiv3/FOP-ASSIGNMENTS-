WITHOUT POINTERS 
#include <stdio.h>

void swap(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("Inside function (after swap): a = %d, b = %d\n", a, b);
}

int main() {
    int x = 10, y = 20;

    swap(x, y);

    printf("Outside function: x = %d, y = %d\n", x, y);

    return 0;
}


#include <stdio.h>

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
WITH POINTERS 
int main() {
    int x = 10, y = 20;

    swap(&x, &y);

    printf("After swap: x = %d, y = %d\n", x, y);

    return 0;
}
