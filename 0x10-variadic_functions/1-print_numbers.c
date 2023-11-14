#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: seperates the string to be printed between numbers
 * @n: the number of integers passd to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list cod;
	unsigned int s;

	va_start(cod, n);

	for (s = 0; s < n; s++)
	{
		printf("%d", va_arg(cod, unsigned int));

		if (s < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(cod);
}
