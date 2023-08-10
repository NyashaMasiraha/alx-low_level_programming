#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - reads a text file and prints to standard output
 * @letters: the number of letters it should read and print
 * @filename: name of the file to be read
 * Return: the actual number of letters it could read and print
 * else , return 0 if the file can not be opened or read.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd = open(filename, O_RDONLY);
	char *buffer = malloc(sizeof(char) * letters);
	ssize_t r = read(fd, buffer, letters);
	ssize_t w = write(STDOUT_FILENO, buffer, r);

	if (filename == NULL)
	{
		return (0);
	}

	if (fd == -1)
	{
		return (0);
	}
	free(buffer);
	close(fd);
	return (w);
}
