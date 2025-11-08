/* 
Write a program to take an integer array as input.
Exactly one element is repeated. Find and print the repeated element in a single iteration.
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

    int xorAll = 0;
    for (int i = 0; i < n; i++)
        xorAll ^= arr[i];

    for (int i = 1; i <= n - 1; i++)
        xorAll ^= i;

    printf("\nRepeated element = %d\n", xorAll);

    return 0;
}