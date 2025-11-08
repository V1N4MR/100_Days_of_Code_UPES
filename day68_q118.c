/* 
Write a program to take an input array of size n containing integers from 0 to n except one.
Find and print the missing number.
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements (numbers from 0 to %d, one missing):\n", n, n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;
    for (int i = 0; i < n; i++)
        actualSum += arr[i];

    int missing = expectedSum - actualSum;
    printf("\nMissing number = %d\n", missing);

    return 0;
}

