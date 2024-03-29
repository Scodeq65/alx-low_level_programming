#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the minimum number of coin to make a change for an amount
 * @argv: array that holds the command line arg
 * @argc: number of command line arg.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int cents, coin = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		if (cents >= 10)
			cents -= 10;
		if (cents >= 5)
			cents -= 5;
		if (cents >= 2)
			cents -= 2;
		if (cents >= 1)
			cents -= 1;
		coin += 1;
	}
	printf("%d\n", coin);
	return (0);
}
