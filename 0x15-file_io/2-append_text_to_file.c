#include "holberton.h"
/**
 * append_text_to_file - appends text to the end of a file
 * @text_content: text to append
 * @filename: name of the file
 * Return: 1 or -1
 **/
int append_text_to_file(const char *filename, char *text_content)
{
	int file, i, retval;

	file = open(filename, O_RDWR | O_APPEND);
	if (filename == NULL)
		return (-1);
	if (file == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	i = 0;
	while (text_content[i] != '\0')
		i++;
	retval = write(file, text_content, i);
	if (retval == -1)
		return (-1);
	return (1);
}
