#include "main.h"
#define BUFF 1024

/**
 * check_error - checks for errors when opening files
 * @fd_from: from file
 * @fd_to: receiver file
 * @argv: pointer to arguments with filenames
 * Return: void
 */
void check_error(int fd_from, int fd_to, char **argv)
{
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}
}
/**
 * main - check the code
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 success. -1 fail
 */
int main(int argc, char **argv)
{
	int fd_to, fd_from, close_err;
	ssize_t bytes_wr, bytes_read;
	char buffer[BUFF];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	check_error(fd_from, fd_to, argv);

	bytes_read = BUFF;
	while (bytes_read == BUFF)
	{
		bytes_read = read(fd_from, buffer, BUFF);
		if (bytes_read == -1)
			check_error(-1, 0, argv);
		bytes_wr = write(fd_to, buffer, bytes_read);
		if (bytes_wr == -1)
			check_error(0, -1, argv);
	}
	close_err = close(fd_from);
	if (close_err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	close_err = close(fd_to);
	if (close_err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
