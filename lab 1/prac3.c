#include <stdio.h>

int main() {
    int i, n;
    unsigned long long fact = 1; // Using long long to hold larger results
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i; // Same as fact = fact * i;
        }
        printf("Factorial of %d = %llu\n", n, fact);
    }

    return 0;
}