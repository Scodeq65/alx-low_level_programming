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
	int i, ui;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = ui = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[ui] != '\0')
		ui++;

	conct = malloc(sizeof(char) * (i + ui + 1));

	if (conct == NULL)
		return (NULL);
	i = ui = 0;
	while (s1[1] != '\0')
	{
		conct[i] = s2[ui];
		i++, ui++;
	}
	conct[i] = '\0';
	return (0);
}
