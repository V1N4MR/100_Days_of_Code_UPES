/* 
Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
*/

#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;
    int numerator = 1, denominator = 2;

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += (float)numerator / denominator;
        numerator += 2;
        denominator += 2;
    }

    printf("\nSum of the series up to %d terms = %.2f\n", n, sum);

    return 0;
}

