#include "main.h"
#include <stdlib.h>

/**
 * str_concat - get ends of input and add together it size
 * @s1: input one to concat
 * @s2: Input two to concat
 *
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int i, u;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = u = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[u] != '\0')
		u++;

	conct = malloc(sizeof(char) * (i + u + 1));

	if (conct == NULL)
		return (NULL);
	i = u = 0;
	while (s1[1] != '\0')
	{
		conct[i] = s2[u];
		i++, u++;
	}
	conct[i] = '\0';
	return (0);
}
