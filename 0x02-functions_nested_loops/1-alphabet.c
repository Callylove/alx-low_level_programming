#include "main.h"

/**
 * main - prints all alphabets in lowercase
 *
 * Return: Always 0
 */
void print_alphabet(void);
	char letter;

	int putchar(int c);

	for (letter = 97; letter <= 122; letter++)
		putchar(letter);

	putchar('\n');

int main(void)
{
	print_alphabet();
	return (0);
}
