#include <stdio.h>
#include "main.h"
/**
 * main - print the number of arg passed to the program
 * @argc: the number of arg
 * @argv: array of arg
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}
