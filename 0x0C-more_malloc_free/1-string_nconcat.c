#include "main.h"

/**
 * string_nconcat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: the no of bytes from s2 to concatenate
 *
 * Return: Pointer to the concatenated string
 * NULL if memory allocation fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0;
	char *result;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	result = malloc(sizeof(char) * (len1 + (n < len2 ? n : len2) + 1));
	if (result == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		result[i] = s1[i];

	for (j = 0; j < n && j < len2; j++)
		result[i + j] = s2[j];

	result[i + j] = '\0';

	return (result);
}
