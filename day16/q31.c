/*Write a program to take a number as input and print its equivalent binary representation.*/

#include <stdio.h>

int main() {
    int num;
    int binary[32], i = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    int original = num;

    if (num == 0) {
        printf("\nBinary of 0 = 0\n");
        return 0;
    }

    while (num > 0) {
        binary[i] = num % 2;
        num /= 2;
        i++;
    }

    printf("\nBinary of %d = ", original);
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}