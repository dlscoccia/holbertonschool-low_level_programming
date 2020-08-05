#include "holberton.h"
/**
 * create_file - create a new file
 * @filename: name of the new file
 * @text_content: content of the file
 * Return: n
 **/
int create_file(const char *filename, char *text_content)
{

int fd_open = 0, fd_write = 0, iterator = 0;

if (filename == NULL)
return (-1);

fd_open = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 00600);
if (fd_open == -1)
return (-1);

if (text_content == NULL)
text_content = "";
else
{
while (text_content[iterator] != '\0')
{ iterator++; }
}

fd_write = write(fd_open, text_content, iterator);
if (fd_write == -1)
return (-1);

close(fd_open);

return (1);
}
