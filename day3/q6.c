/*Write a program to swap two numbers using a third variable.*/

#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("\nBefore swapping:\n");
    printf("a = %d\nb = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("\nAfter swapping:\n");
    printf("a = %d\nb = %d\n", a, b);

    return 0;
}