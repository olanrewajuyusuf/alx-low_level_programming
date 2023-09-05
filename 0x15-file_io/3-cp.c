#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buff(char *file);
void close_file(int fd);

/**
 * create_buff - allocates 1024 bytes
 * @file: file name
 *
 * Return: pointer to the newly-allocated buffer.
 */
char *create_buff(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buf);
}

/**
 * close_file - Closes fd.
 * @fd: file descriptor to be closed.
 */
void close_file(int fd)
{
	int c;

	c = close(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the contents of a file to another file.
 * @argc: argument count
 * @argv:argument vector
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int f_from, f_to, r, w;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = create_buff(argv[2]);
	f_from = open(argv[1], O_RDONLY);
	r = read(f_from, buff, 1024);
	f_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (f_from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		w = write(f_to, buff, r);
		if (f_to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		r = read(f_from, buff, 1024);
		f_to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buff);
	close_file(f_from);
	close_file(f_to);

	return (0);
}
