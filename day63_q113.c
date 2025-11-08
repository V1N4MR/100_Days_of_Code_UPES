/* 
Write a program to take an integer array arr and an integer k as inputs.
Find the kth smallest element in the array and print it.
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

    printf("Enter k: ");
    scanf("%d", &k);

    // Using simple bubble sort to sort the array
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    if (k >= 1 && k <= n)
        printf("\n%dth smallest element = %d\n", k, arr[k - 1]);
    else
        printf("\nInvalid k\n");

    return 0;
}