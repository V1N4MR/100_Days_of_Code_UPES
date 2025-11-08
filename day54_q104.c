/* 
Write a program to take a positive integer n as input, and find the pivot integer x such that
the sum of all elements from 1 to x equals the sum of all elements from x to n.
Print the pivot integer x, or -1 if it does not exist.
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    int totalSum = n * (n + 1) / 2;
    int leftSum = 0, pivot = -1;

    for (int x = 1; x <= n; x++) {
        leftSum += x;
        int rightSum = totalSum - (leftSum - x);
        if (leftSum == rightSum) {
            pivot = x;
            break;
        }
    }

    printf("\nPivot integer = %d\n", pivot);

    return 0;
}