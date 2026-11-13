/**
 * @file calculator.c
 * @brief Implemen\tation of the calulator library.
 */
#include "calculator.h"

int add(int a, int b)      { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }

int divide(int a, int b)
{
    if (b == 0) {
        return 0; /* avoid div by zero */
    }
    return a / b;
}
