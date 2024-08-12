#include "main.h"

/**
 * checkErrors - function to check for errors
 * @file_from: the value returned from file_from variable
 * @file_to: the value returned from file_to variable
 * @argv: argument value
 */

void checkErrors(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - Entry point
 * @argc: argument counter
 * @argv: argument value
 *
 * Return: (0) Success
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, closeFile;
	ssize_t writeFile, counter;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	checkErrors(file_from, file_to, argv);

	counter = 1024;
	while (counter == 1024)
	{
		counter = read(file_from, buffer, 1024);
		if (counter == -1)
			checkErrors(-1, 0, argv);
		writeFile = write(file_to, buffer, counter);
		if (writeFile == -1)
			checkErrors(0, -1, argv);
	}

	closeFile = close(file_from);
	if (closeFile == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	closeFile = close(file_to);
	if (closeFile == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}

	return (0);
}
