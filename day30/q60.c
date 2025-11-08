/* 
Write a program to count positive, negative, and zero elements in an array.
*/

#include <stdio.h>

int main() {
    int n, positive = 0, negative = 0, zero = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("\nEnter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0)
            positive++;
        else if (arr[i] < 0)
            negative++;
        else
            zero++;
    }

    printf("\nPositive elements = %d", positive);
    printf("\nNegative elements = %d", negative);
    printf("\nZero elements = %d\n", zero);

    return 0;
}