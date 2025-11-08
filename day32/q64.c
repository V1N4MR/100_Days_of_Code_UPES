/* 
Write a program to find the digit that occurs the most times in an integer number.
*/

#include <stdio.h>

int main() {
    int num, temp, digit;
    int count[10] = {0};
    int maxCount = 0, maxDigit = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num < 0)
        num = -num;

    temp = num;

    while (temp > 0) {
        digit = temp % 10;
        count[digit]++;
        temp /= 10;
    }

    for (int i = 0; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    printf("\nDigit that occurs the most times: %d", maxDigit);
    printf("\nNumber of occurrences: %d\n", maxCount);

    return 0;
}