/* 
Write a program to count even and odd numbers in an array.
*/

#include <stdio.h>

int main() {
    int n, evenCount = 0, oddCount = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("\nEnter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    printf("\nNumber of even elements = %d", evenCount);
    printf("\nNumber of odd elements = %d\n", oddCount);

    return 0;
}

