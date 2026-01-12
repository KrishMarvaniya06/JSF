#include <stdio.h>

int main() {
    int n, sum = 0, m;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    // Loop until the number becomes 0
    while(n > 0) {
        m = n % 10;    // Get the last digit
        sum = sum + m; // Add digit to sum
        n = n / 10;    // Remove the last digit
    }
    
    printf("Sum of digits = %d\n", sum);
    return 0;
}