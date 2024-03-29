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
	int i, v = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	sss = malloc(sizeof(char) * (i + 1));

	if (sss == NULL)
		return (NULL);

	for (v = 0; str[v]; v++)
		sss[v] = str[v];
	return (sss);
}
