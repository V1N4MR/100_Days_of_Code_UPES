/* 
Write a program to take an array of integers as input and calculate the pivot index.
The pivot index is where the sum of elements to the left equals the sum to the right.
Print the leftmost pivot index, or -1 if no such index exists.
*/

#include <stdio.h>

int main() {
    int n;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int totalSum = 0;
    for (int i = 0; i < n; i++)
        totalSum += arr[i];

    int leftSum = 0, pivot = -1;
    for (int i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum - arr[i];
        if (leftSum == rightSum) {
            pivot = i;
            break;
        }
        leftSum += arr[i];
    }

    printf("\nPivot index = %d\n", pivot);

    return 0;
}