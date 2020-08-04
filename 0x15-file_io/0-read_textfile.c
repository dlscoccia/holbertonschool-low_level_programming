#include "holberton.h"
/**
 * read_textfile - opens, reads and prints a file
 * @filename: file to open and read
 * @letters: number of letters to print
 * Return: number of letters printed
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
int n_bytes;
char *buffer = malloc(sizeof(char) * letters);

if (filename == 0 || buffer == NULL)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

n_bytes = read(fd, buffer, letters);
if (n_bytes == -1)
return (0);

close(fd);
write(STDOUT_FILENO, buffer, n_bytes);
return (n_bytes);
}
