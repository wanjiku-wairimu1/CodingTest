#include <stdio.h>

// Recursive Approach
int fibonacciRecursive(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else if (n == 2) {
        return 2;
    } else {
        return fibonacciRecursive(n - 3) + fibonacciRecursive(n - 2);
    }
}

// Dynamic Programming: Memoization
#define MAX_SIZE 100
int memo[MAX_SIZE];

int fibonacciMemoization(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else if (n == 2) {
        return 2;
    }

    if (memo[n] != -1) {
        return memo[n];
    } else {
        memo[n] = fibonacciMemoization(n - 3) + fibonacciMemoization(n - 2);
        return memo[n];
    }
}

// Dynamic Programming: Tabulation
int fibonacciTabulation(int n) {
    int fib[n + 1];
    fib[0] = 0;
    fib[1] = 1;
    fib[2] = 2;

    for (int i = 3; i <= n; i++) {
        fib[i] = fib[i - 3] + fib[i - 2];
    }

    return fib[n];
}

int main() {
    int n = 10; // Example value of n

    // Recursive Approach
    int recursiveResult = fibonacciRecursive(n);
    printf("F(%d) [Recursive Approach] = %d\n", n, recursiveResult);

    // Dynamic Programming: Memoization
    for (int i = 0; i < MAX_SIZE; i++) {
        memo[i] = -1;
    }
    int memoizationResult = fibonacciMemoization(n);
    printf("F(%d) [Memoization] = %d\n", n, memoizationResult);

    // Dynamic Programming: Tabulation
    int tabulationResult = fibonacciTabulation(n);
    printf("F(%d) [Tabulation] = %d\n", n, tabulationResult);

    return 0;
}

//Differences between the three approaches:

/*Recursive Approach:

Advantage: Simple and straightforward implementation.
Disadvantage: Inefficient for large values of n due to repeated function calls, resulting in high time complexity.
Dynamic Programming with Memoization:

Advantage: Improved performance compared to the recursive approach by avoiding redundant calculations through memoization.
Disadvantage: Requires additional memory for memoization table, limiting the maximum value of n that can be calculated.
Dynamic Programming with Tabulation:

Advantage: Efficient and scalable approach that calculates values iteratively, eliminating the need for recursion and memoization.
Disadvantage: Requires an array of size MAX_SIZE for tabulation, which limits the maximum value of n that can be calculated.*/