# 0x0B. C - malloc, free

In this project we will review the concepts and use of malloc and free

## Basic concepts

“malloc” or “memory allocation” method in C is used to dynamically allocate a single 
large block of memory with the specified size. It returns a pointer of type void which 
can be cast into a pointer of any form. It initializes each block with default garbage value.

```bash
syntax: ptr = (cast-type*) malloc(byte-size)
```
“free” method in C is used to dynamically de-allocate the memory. The memory allocated 
using functions malloc() and calloc() is not de-allocated on their own. Hence the free() 
method is used, whenever the dynamic memory allocation takes place. It helps to reduce 
wastage of memory by freeing it.

```bash
syntax: free(ptr);
```
## Programs or functions

```python
char *create_array(unsigned int size, char c);
creates an array of chars, and initializes it with a specific char

char *_strdup(char *str);
returns a pointer to a newly allocated space in memory.

char *str_concat(char *s1, char *s2);
concatenates two strings.

int **alloc_grid(int width, int height);
returns a pointer to a 2 dimensional array of integers.

void free_grid(int **grid, int height);
frees a 2 dimensional grid previously created

char *argstostr(int ac, char **av);
concatenates all the arguments of your program.

char **strtow(char *str);
splits a string into words
```

#### Holberton School Repository