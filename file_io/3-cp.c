#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <errno.h>
#include <string.h>

/**
 * copy_content - copy contents from file_from to file_to
 * @file_from: file to copy from
 * @file_to: file to copy to
 * Return: 0 if success.
 */

int copy_content(const char *file_from, const char *file_to)
{
	int fd1, fd2;
	char buf[1024];
	ssize_t count;

	if (!file_from)
		return (98);
	fd1 = open(file_from, O_RDONLY);
	if (fd1 == -1)
		return (98);
	fd2 = open(file_to, O_TRUNC | O_CREAT | O_WRONLY,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd2 == -1)
		return (99);
	while ((count = read(fd1, buf, sizeof(buf))) != 0)
	{
		if (count == -1)
			return (98);

		write(fd2, buf, count);
		if (errno == -1)
			return (99);
	}
	close(fd1);
	if (errno == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd1);
		exit(100);
	}
	close(fd2);
	if (errno == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd2);
		exit(100);
	}
return (0);
}

/**
 * main - checks the code
 * @argc: arg counter
 * @argv: arguments
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int res;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	res = copy_content(argv[1], argv[2]);
	if (res == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (res == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}
return (0);
}
