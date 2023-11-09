#include "function_pointers.h"

/**
 * array_iterator - iterate through an array
 * @array: target array
 * @size: sizeof the array
 * @action: function pointer to array
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(*array);
		array++;
	}
}
