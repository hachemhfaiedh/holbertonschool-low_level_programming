#include "holberton.h"
/**
 * read_textfile -  reads a text file
 * @filename: file to read from
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, count;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		close(fd);
		return (0);
	}
	buffer = malloc(letters);
	count = read(fd, buffer, letters);
	if (count == -1)
	{
		close(fd);
		return (0);
	}
	count = write(STDOUT_FILENO, buffer, count);
	if (count == -1)
	{
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (count);
}
