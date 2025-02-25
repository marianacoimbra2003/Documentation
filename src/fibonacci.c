/// @file fibonacci.c
/// @version 1.0
/// @date 2025-02-25
/// @brief This is an example header file. // vai aparecer no files list
/// @authors Person1, Person2 
/// @details This is an example header file that demonstrates how to use Doxygen to document C++ code.
/// @note This is a note.
/// @warning This is a warning.


#include <stdio.h>

// Function to sum two numbers
int sum(int a, int b) {
    return a + b;
}

// Function to calculate Fibonacci sequence up to n terms
void fibonacci(int n) {
    int a = 0, b = 1, next;
    printf("Fibonacci Sequence: %d %d ", a, b);
    
    for (int i = 2; i < n; i++) {
        next = sum(a, b); // Using sum function
        printf("%d ", next);
        a = b;
        b = next;
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    if (n < 2) {
        printf("Enter a number greater than or equal to 2.\n");
        return 1;
    }
    
    fibonacci(n);
    return 0;
}
