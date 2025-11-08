/* 
Write a program to take an integer array arr as input.
Find the maximum sum of any contiguous subarray using Kadane's algorithm.
If all elements are negative, print the largest element.
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int maxSum = arr[0], currentSum = arr[0];

    for (int i = 1; i < n; i++) {
        if (currentSum < 0)
            currentSum = arr[i];
        else
            currentSum += arr[i];

        if (currentSum > maxSum)
            maxSum = currentSum;
    }

    printf("\nMaximum contiguous subarray sum = %d\n", maxSum);

    return 0;
}

