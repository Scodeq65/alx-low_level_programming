#include "variadic_functions.h"

/**
 * print_all - a function that prints anything
 * @format: list of types of arguments passed to the function
 *
 */
void print_all(const char * const format, ...)
{
	int j = 0;
	char *str, *ask = "";

	va_list all;

	va_start(all, format);

	if (format)
	{
		while (format[j])
		{
			switch (format[j])
			{
				case 'c':
				printf("%s%c", ask, va_arg(all, int));
				break;
				case 'i':
				printf("%s%d", ask, va_arg(all, int));
				break;
				case 'f':
				printf("%s%f", ask, va_arg(all, double));
				break;
				case 's':
				str = va_arg(all, char*);
				if (!str)
					str = "(nil)";
				printf("%s%s", ask, str);
				break;
				default:
				j++;
				continue;
			}
			ask = " ";
			j++;
		}
	}
	printf("\n");
	va_end(all);
}
