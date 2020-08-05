#include "holberton.h"
#define BUFFSIZE 1024
int main(int ac, char *argv[])
{

int fd1_open, fd2_open, fd1_read, fd_write;
char buffer[BUFFSIZE];

if(ac != 3)
{ dprintf(2, "Usage: cp file_from file_to\n");
  exit (97); }

fd1_open = open(argv[1], O_RDWR);
fd2_open = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 00600);

fd1_read = read(fd1_open, buffer, BUFFSIZE);


fd_write = write(fd2_open, buffer, fd1_read);

close(fd1_open);
close(fd2_open);

return (fd_write);
}