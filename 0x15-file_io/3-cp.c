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
	int fileFrom, fileTo, closeFile;
	ssize_t writeFile, counter;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp filefFrom fileTo\n");
		exit(97);
	}
	fileFrom = open(argv[1], O_RDONLY);
	fileTo = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	checkErrors(fileFrom, fileTo, argv);
	while ((counter = read(fileFrom, buffer, 1024)) > 0)
	{
		writeFile = write(fileTo, buffer, counter);
		if (writeFile == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (counter == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	closeFile = close(fileFrom);
	if (closeFile == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileFrom);
		exit(100);
	}
	closeFile = close(fileTo);
	if (closeFile == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileTo);
		exit(100);
	}

	return (0);
}
