#include "main.h"
#define BUFF 1024
/**
 * main - check the code
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 success. -1 fail
 */
int main(int argc, char **argv)
{
	int fd_to, fd_from, bytes_read;
	long int bytes_wr;
	char buffer[BUFF];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[2]);
		exit(99);
	}

	bytes_read = BUFF;
	while (bytes_read == 1024)
	{
		bytes_read = read(fd_from, buffer, BUFF);
		if (bytes_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		bytes_wr = write(fd_to, buffer, bytes_read);
		if (bytes_wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[2]);
			exit(99);
		}
	}

	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
