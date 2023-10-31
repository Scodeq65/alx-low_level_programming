#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string.
 * @str: the string to duplicate
 *
 * Return: A pointer to the duplicatae string, or NULL if not allocation fails
 */
char *_strdup(char *str)
{
	char *sss;
	int lenght, i = 0;

	if (str == NULL)
		return (NULL);
	while (str[lenght])
		lenght++;

	sss = (char *)malloc((lenght + 1) * sizeof(char));

	if (sss == NULL)
		return (NULL);
	while (i < lenght)

	{
		sss[i] = str[i];
		i++;
	}
	sss[i] = '\0';

	return (sss);
}
