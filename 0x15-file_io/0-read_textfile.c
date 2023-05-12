#include "main.h"

/**
 * read_textfile - reads text file and prints it to POSIX
 * @filename: file to read from
 *
 * @letters: size to read
 *
 * Return: result
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int i, j, fd;
	char *buffer;

	if (!filename)
		return (0);
	i = open(filename, O_RDONLY);
	if (i < 0)
		return (0);
	buffer = (char *) malloc(letters * sizeof(char));
	if (!buffer)
		return (0);
	fd = read(i, buffer, letters);
	if (fd < 0)
	{
		free(buffer);
		return (0);
	}
	buffer[fd] = '\0';
	j = write(STDOUT_FILENO, buffer, fd);
	if (j < 0)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(i);
	return (j);
}
