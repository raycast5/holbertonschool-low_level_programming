#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <errno.h>
#include <string.h>

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: content of file
 * Return: 1 on success or -1 if it fails.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int len = strlen(text_content) + 1;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 00600);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		write(fd, text_content, len);
		if (errno)
			return (-1);
	}
	close(fd);
return (1);
}
