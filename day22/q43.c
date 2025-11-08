/* 
Write a program to check if a number is a strong number.
*/

#include <stdio.h>

int main() {
    int num, original, remainder, factorial, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) {
        remainder = num % 10;

        factorial = 1;
        for (int i = 1; i <= remainder; i++)
            factorial *= i;

        sum += factorial;
        num /= 10;
    }

    if (sum == original)
        printf("\n%d is a Strong Number.\n", original);
    else
        printf("\n%d is not a Strong Number.\n", original);

    return 0;
}

