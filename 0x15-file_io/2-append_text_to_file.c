#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 *
 * Return: 1 (success), -1(failure or filename is NULL)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w;
	int len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
	{
		return (-1);
	{
	close(o);
	return (1);
}

