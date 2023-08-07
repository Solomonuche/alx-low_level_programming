#include "main.h"
#include <unistd.h>
#include <stdlib.h>

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: filename
 * @text_content: bytes of string to be written
 *
 * Return: (1 on success or -1 for error)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0, i, nb_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
		{
			len++;
		}
		nb_written = write(fd, text_content, len);
		if (nb_written == -1)
		{
			close(fd);
			return (-1);
		}

	}
	close(fd);

	return (1);
}
