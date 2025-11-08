/* 
Write a program to swap the first and last digit of a number.
*/

#include <stdio.h>
#include <math.h>

int main() {
    int num, digits, first, last, middle, swapped;

    printf("Enter a number: ");
    scanf("%d", &num);

    digits = (int)log10(num) + 1;

    first = num / pow(10, digits - 1);
    last = num % 10;

    middle = (num % (int)pow(10, digits - 1)) / 10;

    swapped = last * pow(10, digits - 1) + middle * 10 + first;

    printf("\nNumber after swapping first and last digits: %d\n", swapped);

    return 0;
}