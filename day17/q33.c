/*Write a program to check if a number is an Armstrong number.*/

#include <stdio.h>
#include <math.h>

int main() {
    int num, original, remainder, digits = 0;
    long long sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    int temp = num;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, digits);
        temp /= 10;
    }

    if (sum == original)
        printf("\n%d is an Armstrong number.\n", original);
    else
        printf("\n%d is not an Armstrong number.\n", original);

    return 0;
}

