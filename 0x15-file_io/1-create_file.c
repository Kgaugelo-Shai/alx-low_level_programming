#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file_dp;
	int char_wr;

	if (filename == NULL)
		return (-1);

	file_dp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_dp == -1)
		return (-1);

	if (text_content != NULL)
	{
		text_content = "";
	}
	char_wr = write(file_dp, text_content, strlen(text_content));
	if (char_wr == -1)
	{
		close(file_dp);
		return (-1);
	}

	close(file_dp);
	return (1);
}
