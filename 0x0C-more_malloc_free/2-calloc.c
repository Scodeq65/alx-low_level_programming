#include "main.h"

/**
 * _calloc - Allocate memory for an array and initialize it to zero
 * @nmemb: Number of elements in an array
 * @size: size of each elements in bytes
 *
 * Return: Pointer to the allocated memory,
 * NULL if nmemb or size is 0, or if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;

	ptr = malloc(total_size);

	if (ptr == NULL)
		return (NULL);

	memset(ptr, 0, total_size);

	return (ptr);
}
