#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: string to write to file
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int file;
	int numCharsWR;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		numCharsWR = write(file, text_content, strlen(text_content));
		if (numCharsWR == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
