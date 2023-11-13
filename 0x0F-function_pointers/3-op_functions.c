#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - sum up two numbers
 * @a: first number
 * @b: second number
 *
 * Return: the sum of a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - substract two numbers
 * @a: first number
 * @b: second number
 *
 * Return: difference of two numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two int
 * @a: first number
 * @b: second number
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: first number
 * @b: second number
 *
 * Return: result of the division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - reminder of the division of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: the reminder of division of two numbers
 */
int op_mod(int a, int b)
{
	return (a % b);
}
