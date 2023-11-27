#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: text file to be read
 * @letters: where letters is the number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t char_read, char_write;
	int file_dp;
	char *buffer;

	if (filename == NULL)
		return (0);
	file_dp = open(filename, O_RDONLY);
	if (file_dp == -1)
		return (0);
	buffer = malloc(letters + 1);
	if (buffer == -1)
	{
		close(file_dp);
		return (0);
	}
	char_read = read(file_dp, buffer, letters);

	if (char_num == -1)
	{
		free(buffer);
		close(file_dp);
		return (0);
	}
	buffer[char_read] = '\0';

	char_write = write(STDOUT_FILENO, buffer, letters);
	if (char_write == -1)
	{
		free(buffer);
		close(file_dp);
		return (0);
	}

	free(buffer);
	close(file_dp);
	return (char_read);
}
