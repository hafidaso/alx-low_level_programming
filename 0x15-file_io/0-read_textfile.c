#include "main.h"

/**
 *read_textfile - reads a text file and prints to the posix output
 *@filename: the name of the file to read
 *@letters: the number of letters to read
 *Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t	write;
	ssize_t	w;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buffer = malloc(sizeof(char) * (letters + 1));
	if (!buffer)
		return (0);
	write = read(fd, buffer, letters);
	if (write < -1)
		return (0);
	buffer[letters] = '\0';
	w = write(STDOUT_FILENO, buffer, write);
	if (w < -1 || w != write)
		return (0);
	free(buffer);
	close(fd);
	return (write);
}
