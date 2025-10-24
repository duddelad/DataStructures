#include <stdio.h>

/* Swap by value: only copies of 'a' and 'b' are swapped */
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("[Inside swapByValue]");
    printf(" a=%d, b=%d\n", a, b);
}

/* Swap by reference: addresses are passed */
void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("[Inside swapByReference]");
    printf(" *a=%d, *b=%d\n", *a, *b);
}

int main(void) {
    int x = 10, y = 20;

    printf("Before swapping: x=%d, y=%d\n", x, y);

    swapByValue(x, y);
    printf("After swapByValue:  x=%d, y=%d \n", x, y);

    swapByReference(&x, &y);
    printf("After swapByReference: x=%d, y=%d \n", x, y);

    return 0;
}
