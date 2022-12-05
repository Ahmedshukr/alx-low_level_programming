#include "main.h"
#include <stdlib.h>

/*
 * read_textfile - Reads a text file
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters to be read
 * Return: If the function fails or filename is NULL - 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);

}
