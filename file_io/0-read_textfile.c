#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <errno.h>

/**
 * read_textfile - check the code
 * @filename: name of file
 * @letters: amount of leters
 * Return: Actual number of letters it could read and print
 * or 0 if it fails.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t count = 0;
	char *buf;
	int fd;

	if (!filename)
		return (0);
	buf = malloc(sizeof(char) * letters + 1);
	if (!buf)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	count += read(fd, buf, letters);

	write(STDOUT_FILENO, buf, count);
	if (errno)
		return (0);
	free(buf);
	close(fd);
	return (count);
}
