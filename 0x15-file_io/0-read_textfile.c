#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

/**
 * read_textfile - a function that reads a text file
 * and prints it to the POSIX STDO
 * @filename: filename
 * @letters: bytes of letters to be printed
 *
 * Return: (1 on success or -1 for error)
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff = malloc(letters);
	int num_read;
	int num_written;
	int fd;

	if (buff == NULL || filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	num_read = read(fd, buff, letters);

	if (num_read == -1)
		return (0);
	buff[num_read] = '\0';
	close(fd);

	num_written = write(STDOUT_FILENO, buff, num_read);

	if (num_written == -1)
		return (0);
	free(buff);

	return (num_read);
}

