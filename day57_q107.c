/* 
Write a program to find the previous greater element for each element in an array using brute force.
If no greater element exists on the left, print -1.
Output should be printed in a comma separated format.
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("\nPrevious greater elements: ");
    for (int i = 0; i < n; i++) {
        int prev = -1;
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prev = arr[j];
                break;
            }
        }
        printf("%d", prev);
        if (i != n - 1)
            printf(", ");
    }

    printf("\n");

    return 0;
}