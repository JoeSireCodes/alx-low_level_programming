#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	if (filename == NULL)
		return (-1);

	int flags = O_CREAT | O_RDWR | O_TRUNC;

	int fd = open(filename, flags);

	if (fd == -1 || w == -1)
		return (-1);

	size_t len = 0;

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	ssize_t bytes_written = write(fd, text_content, len);

	if (bytes_written == -1 || bytes_written != (ssize_t)len)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
