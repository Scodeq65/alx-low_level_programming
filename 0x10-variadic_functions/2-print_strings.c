#include "variadic_functions.h"

/**
 * print_strings - function that prints strings followed by a new line
 * @separator: string to be printed between strings
 * @n: number of strings passed to the func
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list prj;

	char *str;

	unsigned int d;

	va_start(prj, n);

	for (d = 0; d < n; d++)
	{
		str = va_arg(prj, char*);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (d != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(prj);
}
