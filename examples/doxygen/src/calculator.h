/**
 * @file calculator.h
 * @brief Simple calculator library used to demonstrate Doxygen.
 * @author ROHITH BALAJI
 * @version 1.0
 * @date 2026
 */
#ifndef CALCULATOR_H
#define CALCULATOR_H

/**
 * @brief Adds two integers.
 * @param a First operand.
 * @param b Second operand.
 * @return The sum of @p a and @p b.
 */
int add(int a, int b);

/**
 * @brief Subtracts @p b from @p a.
 * @param a Minuend.
 * @param b Subtrahend.
 * @return The difference a - b.
 */
int subtract(int a, int b);

/**
 * @brief Multiplies two integers.
 * @param a First factor.
 * @param b Second factor.
 * @return The product a * b.
 */
int multiply(int a, int b);

/**
 * @brief Divides @p a by @p b.
 * @param a Dividend.
 * @param b Divisor.
 * @return The quotient a / b.
 * @warning @p b must not be zero.
 * @note Integer division truncates toward zero.
 */
int divide(int a, int b);

#endif /* CALCULATOR_H */
