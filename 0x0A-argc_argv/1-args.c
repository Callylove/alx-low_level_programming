#include "main.h"

/**
 * main - prints number of argument passed into it
 * @argc: argument counter
 * @argv: array of pointer to strings
 *
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__ ((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
