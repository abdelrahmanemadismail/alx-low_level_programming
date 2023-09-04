#include "main.h"
#define BUF_SIZE 1024

/**
 * error_exit - Prints an error message and exits the program
 * @msg: The error message to print
 * @code: The exit code
 */
void error_exit(char *msg, int code)
{
	dprintf(STDERR_FILENO, "%s\n", msg);
	exit(code);
}

/**
 * cp_file - Copies the content of one file to another file
 * @file_from: The name of the source file
 * @file_to: The name of the destination file
 */
void cp_file(char *file_from, char *file_to)
{
	int fd_from, fd_to, rd, wr;
	char buffer[BUF_SIZE];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		error_exit("Error: Can't read from file", 98);

	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
		error_exit("Error: Can't write to", 99);

	while ((rd = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
		wr = write(fd_to, buffer, rd);
		if (wr == -1)
			error_exit("Error: Can't write to", 99);
	}

	if (rd == -1)
		error_exit("Error: Can't read from file", 98);

	if (close(fd_from) == -1)
		error_exit("Error: Can't close fd", 100);

	if (close(fd_to) == -1)
		error_exit("Error: Can't close fd", 100);
}

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 * Return: 0 on success, 97-100 on failure
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
		error_exit("Usage: cp file_from file_to", 97);

	cp_file(argv[1], argv[2]);

	return (0);
}
