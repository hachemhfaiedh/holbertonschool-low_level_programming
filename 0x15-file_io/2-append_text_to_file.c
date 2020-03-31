#include "holberton.h"
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the fil
 * @text_content: string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0;
	ssize_t E;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[i] != '\0')
			i++;
		E = write(fd, text_content, i);
	}
	if (E == -1)
		return (-1);
	return (1);
}
