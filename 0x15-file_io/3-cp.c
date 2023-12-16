#include "main.h"
#include <stdio.h>

/**
 * error_f - checks if file can be opened.
 * @f_from: file_from.
 * @f_to: file_to.
 * @argv: arguments vector.
 * Return: no return.
 */
void error_f(int f_from, int f_to, char *argv[])
{
	if (f_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (f_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - check code for Holberton School students.
 * @argc: arguments.
 * @argv: arguments v
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int f_from, f_to, err_cl;
	ssize_t nch, nwr;
	char _buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	f_from = open(argv[1], O_RDONLY);
	f_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_f(f_from, f_to, argv);

	nch = 1024;
	while (nch == 1024)
	{
		nch = read(f_from, _buf, 1024);
		if (nch == -1)
			error_f(-1, 0, argv);
		nwr = write(f_to, _buf, nch);
		if (nwr == -1)
			error_f(0, -1, argv);
	}

	err_cl = close(f_from);
	if (err_cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_from);
		exit(100);
	}

	err_cl = close(f_to);
	if (err_cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_from);
		exit(100);
	}
	return
}
