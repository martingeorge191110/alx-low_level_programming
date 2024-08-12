#include "main.h"

/**
 * append_text_to_file - function that ppends text at the end of a file.
 * @filename: pointer points to name of the file
 * @text_content: content to be written
 *
 * Return: (1) Success
 * otherwise - (-1)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, writeFile, length;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);


	if (!text_content)
		text_content = "";

	length = 0;
	while (text_content[length] != '\0')
		length++;


	writeFile = write(file, text_content, length);

	if (writeFile == -1)
		return (-1);

	close(file);

	return (1);
}
