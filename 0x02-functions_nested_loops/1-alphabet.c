#include "main.h"

/**
 * main - prints all alphabets in lowercase using ASCII code
 * print_alphabet - calling in the function using prototype
 *
 * Return: Always 0
 */

void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}
/**
 * print_alphabet - check description
 * Description - its prints the alphabet in lowercase
 * followed by a newline
 *
 * Return: Nothing
 */
void print_alphabet(void)
{
	char letter;

	int putchar(int c);

	for (letter = 97; letter <= 122; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
