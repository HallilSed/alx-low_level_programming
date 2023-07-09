#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the miltiplication of two arguments numbers
 * @argc: arg count
 * @argv: arg vector
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	int num = 0, num1 = 0;

	if (argc == 3)
	{
		num = atoi(argv[1]);
		num1 = atoi(argv[2]);
		printf("%d\n", num * num1);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
