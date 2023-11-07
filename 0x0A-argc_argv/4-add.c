#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - sums up positive numbers.
 * @argv: array that contains the program command line arg,
 * @argc: number of command line arg.
 * Return: 0 when successful
 */
int main(int argc, char *argv[])
{
	int a, b, sum = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[a]);
	}
	printf("%d\n", sum);
	return (0);
}
