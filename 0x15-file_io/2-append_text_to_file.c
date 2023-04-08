#include "main.h"

/**
 * _strlen - finds the length of a string
 * @strg: pointer to the string
 *
 * Return: the length of the string
 */
size_t _strlen(char *strg)
{
	size_t n;

	for (n = 0; strg[n]; n++)
		;
	return (n);
}

/**
 * append_text_to_file - appends a text at the end of a file.
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 if successful and -1 if fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op;
	ssize_t len;

	if (filename == NULL)
		return (-1);
	op = open(filename, O_WRONLY | O_APPEND);
	if (op == -1)
		return (-1);
	if (text_content != NULL)
		len = write(op, text_content, _strlen(text_content));
	close(op);
	if (len == -1)
		return (-1);
	return (1);
}
