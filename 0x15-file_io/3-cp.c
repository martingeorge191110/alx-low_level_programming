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
	int fileFrom, fileTo, readFile, writeFile;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp filefFrom fileTo\n");
		exit(97);
	}
	fileFrom = open(argv[1], O_RDONLY);
	fileTo = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	checkErrors(fileFrom, fileTo, argv);

	readFile = read(fileFrom, buffer, 1024);
	writeFile = write(fileTo, buffer, readFile);
	if (readFile == -1)
		checkErrors(-1, 1, argv);
	if (writeFile == -1)
		checkErrors(1, -1, argv);



	close(fileFrom);
	if (close(fileFrom) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileFrom);
		exit(100);
	}


	close(fileTo);
	if (close(fileTo) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileTo);
		exit(100);
	}

	return (0);
}
