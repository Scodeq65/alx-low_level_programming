#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters
 *
 * Return: sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list baff;

	unsigned int i;
	unsigned int sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(baff, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(baff, const unsigned int);
	}

	va_end(baff);

	return (sum);
}
