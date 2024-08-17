#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int len = 0;
	int char_wr;
	int file_dp;

	if (filename == NULL)
		return (-1);

	file_dp = open(filename, O_WRONLY | O_APPEND);

	if (file_dp == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(file_dp);
		return (1);
	}
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
		char_wr = write(file_dp, text_content, len);
		if (char_wr == -1)
		{
			close(file_dp);
			return (-1);
		}
	}
	close(file_dp);
	return (1);
}
