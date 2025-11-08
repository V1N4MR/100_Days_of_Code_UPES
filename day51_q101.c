/* 
Write a program to take a sorted array and a target integer as input.
Print the first and last occurrence of the target and their indices.
Print -1, -1 if the target is not present.
*/

#include <stdio.h>

int main() {
    int n, target;

    printf("Enter number of elements in sorted array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d elements in sorted order:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    printf("Enter target value: ");
    scanf("%d", &target);

    int first = -1, last = -1;

    for (int i = 0; i < n; i++) {
        if (nums[i] == target) {
            first = i;
            break;
        }
    }

    for (int i = n - 1; i >= 0; i--) {
        if (nums[i] == target) {
            last = i;
            break;
        }
    }

    printf("\nFirst and last occurrence indices: %d, %d\n", first, last);

    return 0;
}

