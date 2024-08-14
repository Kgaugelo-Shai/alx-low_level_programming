#include "main.h"

/**
 * read_textfile - reads a text file and prints to the POSIX stdout.
 * @filename: name of the read file
 * @letters: number of letters that should be printed
 * Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t numCharsRead, numCharsWrite;
	int file_dep;
	char *buffer;

	if (filename == NULL)
		return (0);

	file_dep = open(filename, O_RDONLY);

	if (file_dep == NULL)
		return (0);

	buffer = (char *)malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		fclose(file_dep);
		return (0);
	}

	numCharsRead = read(file_dep, buffer, letters);

	if (numCharsRead == -1)
	{
		free(buffer);
		fclose(file_dep);
		return (0);
	}

	numCharsWrote = write(STDOUT_FILENO, buffer, numCharsRead);
	if (numCharsWrote == -1)
	{
		free(buffee);
		close(file_dep);
		return (0);
	}

	free(buffer);
	close(file_dep);
	return (numCharsWrote);
}
