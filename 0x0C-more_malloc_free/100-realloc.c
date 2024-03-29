#include "main.h"

/**
 * _realloc - Reallocate a memory block using malloc and free
 * @ptr: Pointer to the memory previousely allocated with malloc
 * @old_size: size in bytes of the allocated space
 * @new_size: The new size in bytes of the new memory block
 *
 * Return: Pointer to the newly allocated memory block
 * Null if new_size is 0 and ptr is not NULL,
 * or if malloc fails
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int min_size;
	unsigned int i;

	if (ptr == NULL)
	return (malloc(new_size));

	if (new_size == old_size)
	return (ptr);

	min_size = (old_size < new_size) ? old_size : new_size;

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	return (NULL);

	for (i = 0; i < min_size; i++)
	((char *)new_ptr)[i] = ((char *)ptr)[i];

	free(ptr);

	return (new_ptr);
}
