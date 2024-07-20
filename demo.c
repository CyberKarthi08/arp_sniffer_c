#include <stdio.h>

// Function to calculate factorial using iterative approach
unsigned long long factorial(int n) {
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int num = 10;
    unsigned long long fact = factorial(num);
    printf("Factorial of %d is %llu\n", num, fact);
    return 0;
}