#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it as POSIX stdout
 * @filename: a pointer to the name of a file
 * @letters: the number of letters to read and print
 *
 * Return: if function fails or filename is NULL - 0
 * O/w - the actual number of byte the function should read and print
 */
int read_textfile(const char *filename, size_t letters)
{
	ssize_t o, w, r;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (w);
}
