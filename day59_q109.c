/* 
Write a program to take an integer array arr and an integer k as inputs.
Print the maximum sum of all the subarrays of size k.
*/

#include <stdio.h>

int main() {
    int n, k;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter subarray size k: ");
    scanf("%d", &k);

    int maxSum = 0;

    for (int i = 0; i < k; i++)
        maxSum += arr[i];

    int currentSum = maxSum;

    for (int i = k; i < n; i++) {
        currentSum = currentSum + arr[i] - arr[i - k];
        if (currentSum > maxSum)
            maxSum = currentSum;
    }

    printf("\nMaximum sum of subarrays of size %d = %d\n", k, maxSum);

    return 0;
}