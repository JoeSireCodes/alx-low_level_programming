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
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
	return (0);
	}
	char buffer[letters];
	ssize_t bytes_read = 0;
	ssize_t total_bytes_read = 0;
	ssize_t bytes_written = 0;

	while ((bytes_read = read(fd, buffer, letters)) > 0)
	{
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	if (bytes_written <= 0 || bytes_written != bytes_read)
	{
	close(fd);
	return (0);
	}

	total_bytes_read += bytes_read;

	if (total_bytes_read >= letters)
	{
	break;
	}
	}

	close(fd);
	return (total_bytes_read);
}
