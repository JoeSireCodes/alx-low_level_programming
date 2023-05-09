#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	if (filename == NULL)
	{
		return (-1);
	}

	mode_t mode = S_IWUSR;
	int flags = O_WRONLY | O_APPEND;

	int fd = open(filename, flags, mode);

	if (fd == -1)
	{
		return (-1);
	}

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
