#include "holberton.h"
#define BUFFSIZE 1024
/**
 * main - cp a file
 * @ac: n of arguments
 * @argv: arguments
 * Return: 0, 97, 98, 99, 100
 **/
int main(int ac, char *argv[])
{

int fd1_open, fd2_open, fd1_read, fd_write, fd_close;
char buffer[BUFFSIZE];

if (ac != 3)
{ dprintf(2, "Usage: cp file_from file_to\n");
exit(97); }

fd1_open = open(argv[1], O_RDWR);
fd2_open = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR |
S_IRGRP | S_IWGRP | S_IROTH);

fd1_read = read(fd1_open, buffer, BUFFSIZE);
if (fd1_open == -1)
{ dprintf(2, "Error: Can't read from file %s", argv[1]);
exit(98); }

fd_write = write(fd2_open, buffer, fd1_read);
if (fd_write == -1)
{
dprintf(2, "Error: Can't write to %s", argv[2]);
exit(99);
}
fd_close = close(fd1_open);
if (fd_close == -1)
{
dprintf(2, "Error: Can't close fd %d", fd1_open);
exit(100);
}
fd_close = close(fd2_open);
if (fd_close == -1)
{
dprintf(2, "Error: Can't close fd %d", fd2_open);
exit(100);
}
return (fd_write);
}
