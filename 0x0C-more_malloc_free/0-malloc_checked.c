#include "main.h"

/**
 * malloc_checked - Allocate memory using malloc
 * @b: The amount of memory to be allocated
 *
 * Return: Pointer to the allocated memory
 * Exit with status 98 if fails
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
