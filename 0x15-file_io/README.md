# 0x15-file_io Project

Foobar is a Python library for dealing with word pluralization.

## Concepts

#include <fcntl.h>

#### open()
int open(const char *path, int oflag, ... );

The open() function shall establish the connection between a file and a file descriptor. It shall create an open file description that refers to a file and a file descriptor that refers to that open file description. The file descriptor is used by other I/O functions to refer to that file. The path argument points to a pathname naming the file.
#### close
#include <unistd.h>

int close(int fd);

close() closes a file descriptor, so that it no longer refers to any file and may be reused.

#### read
#include <unistd.h>

ssize_t read(int fd, void *buf, size_t count);

read() attempts to read up to count bytes from file descriptor fd
       into the buffer starting at buf.
#### write
#include <unistd.h>

ssize_t write(int fildes, const void *buf, size_t nbyte);

The write() function shall attempt to write nbyte bytes from the buffer pointed to by buf to the file associated with the open file descriptor, fildes.

#### dprintf
#include <stdio.h>

int dprintf(int fd, const char *format, ...);

int vdprintf(int fd, const char *format, va_list ap);
## Functions

```python
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
Usage: cp file_from file_to
Usage: elf_header elf_filename
```