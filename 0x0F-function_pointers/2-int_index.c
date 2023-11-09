#include "function_pointers.h"

/**
 * int_index - search for an int
 * @array: target array hoilding int
 * @size: size of the array
 * cmp: is the pointer to the function to be used
 *
 * Return: int element match, -1 if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
