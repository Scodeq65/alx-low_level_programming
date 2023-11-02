#include <stdio.h>

/**
 * main - print all arguments it receives
 * @argc: the number of command line arguments
 * @argv: array that contains the program command line arg.
 * Return: (0) if successful.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
