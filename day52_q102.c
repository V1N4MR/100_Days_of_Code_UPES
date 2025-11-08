/* 
Write a program to take a sorted array and an integer x as input.
Find the index of the smallest element in the array that is greater than or equal to x (ceil of x).
Print -1 if such an element does not exist.
*/

#include <stdio.h>

int main() {
    int n, x;

    printf("Enter number of elements in sorted array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements in sorted order:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter x: ");
    scanf("%d", &x);

    int index = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] >= x) {
            index = i;
            break;
        }
    }

    printf("\nIndex of ceil of %d = %d\n", x, index);

    return 0;
}

