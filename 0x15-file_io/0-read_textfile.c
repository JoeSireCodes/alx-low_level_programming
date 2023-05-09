#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
	{
		return (0);
	}
	fp = fopen(filename, 0_RDONLY);

	if (fp == NULL)
	{
		return (0);
	}

	char buffer[letters];
	ssize_t bytes_read = fread(buffer, sizeof(char), letters, fp);
	ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	fclose(fp);

	return (bytes_written);
}
