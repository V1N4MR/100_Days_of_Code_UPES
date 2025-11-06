/*Write a program to check if a number is a palindrome.*/

#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    int original = num;

    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    if (original == reversed)
        printf("\n%d is a palindrome.\n", original);
    else
        printf("\n%d is not a palindrome.\n", original);

    return 0;
}