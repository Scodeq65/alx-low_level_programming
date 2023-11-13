#include <stdio.h>
#include <stdlib.h>

/**
 * void_opcodes - It prints the upcodes of the program
 * @a:print the address of the new function
 * @n: number of bytes to return
 * Return: void
 */
int void_opcodes(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
	printf("%.2hhx", a[i]);
	if (i < n - 1)
		printf(" ");
	}
	printf("\n");
}

/**
 * main - prints the opcodes of the own main func.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	void_opcodes((char *)&main, n);
	return (0);
}
