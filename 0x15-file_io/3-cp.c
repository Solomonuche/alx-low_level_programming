#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]);

/**
 * main - entry point, a program that copis the content of a file
 * to another file
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: (1) on success
 */

int main(int argc, char *argv[])
{
	int fdsrc, fddest, nb_written, nb_read, close_src, close_dest;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fdsrc = open(argv[1], O_RDONLY);
	if (fdsrc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fddest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fddest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while ((nb_read = read(fdsrc, buff, 1024)) > 0)
	{
		nb_written = write(fddest, buff, nb_read);
		if (nb_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (nb_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	close_src = close(fdsrc);
	if (close_src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fdsrc);
		exit(100);
	}

	close_dest = close(fddest);
	if (close_dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fddest);
		exit(100);
	}
	return (0);
}
