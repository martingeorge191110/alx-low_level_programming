#include "main.h"

/**
 * read_textfile - reads a text file and prints
 *			it to the POSIX standard output.
 * @filename: pointer point to name of the file
 * @letters: number of letters
 *
 * Return: (number of letters printed)
 * otherwise - (0)
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *buffer;
	int readFile;


	if (!filename)
		return (0);


	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	buffer = (char *)malloc(sizeof(char) * letters);

	if (!buffer)
		return (0);

	readFile = read(file, buffer, letters);

	if (write(STDOUT_FILENO, buffer, readFile) == -1)
		return (0);

	close(file);
	free(buffer);

	return (write(STDOUT_FILENO, buffer, readFile));
}
