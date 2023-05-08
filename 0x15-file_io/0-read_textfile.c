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

	FILE *fp = fopen(filename, "r");
	if (fp == NULL)
	{
		return (0);
	}

	char *buffer = (char*) malloc(letters + 1);
	if (buffer == NULL) {
		fclose(fp);
		return (0);
	}

	ssize_t bytes_read = fread(buffer, sizeof(char), letters, fp);
	if (bytes_read <= 0 || bytes_read != letters)
	{
		free(buffer);
		fclose(fp);
		return 0(;)
	}

	ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	free(buffer);
	fclose(fp);

	if (bytes_written <= 0 || bytes_written != bytes_read)
	{
		return (0);
	}

	return (bytes_written);
}
