/* 
Write a program to take an integer array nums (positive integers) and an integer target.
Find two distinct indices i and j such that nums[i] + nums[j] = target.
Print the indices separated by a space, or "-1 -1" if no solution exists.
*/

#include <stdio.h>

int main() {
    int n, target;
    printf("Enter size of the array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d positive integers:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    printf("Enter target value: ");
    scanf("%d", &target);

    int found = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("\n%d %d\n", i, j);
                found = 1;
                break;
            }
        }
        if (found) break;
    }

    if (!found)
        printf("\n-1 -1\n");

    return 0;
}