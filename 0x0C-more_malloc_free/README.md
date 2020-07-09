## 0x0C-more_malloc_free Project

In this project we will review the concepts and use of malloc, free, calloc, realloc.

### Basic Concepts

“malloc” or “memory allocation” method in C is used to dynamically allocate a single 
large block of memory with the specified size. It returns a pointer of type void which 
can be cast into a pointer of any form. It initializes each block with default garbage value.
```bash
syntax: ptr = (cast-type*) malloc(byte-size)
```

“free” method in C is used to dynamically de-allocate the memory. The memory allocated using 
functions malloc() and calloc() is not de-allocated on their own. Hence the free() method is 
used, whenever the dynamic memory allocation takes place. It helps to reduce wastage of memory 
by freeing it.
```bash
syntax: free(ptr);
```
"calloc" allocates the requested memory and returns a pointer to it. The difference in malloc 
and calloc is that malloc does not set the memory to zero where as calloc sets allocated memory 
to zero.
```bash
syntax: void *calloc(size_t nitems, size_t size);
```
"realloc" attempts to resize the memory block pointed to by ptr that was previously allocated 
with a call to malloc or calloc.
```bash
syntax: void *realloc(void *ptr, size_t size);
```

### Programs or functions
```python
void *malloc_checked(unsigned int b);
Function that allocates memory using malloc

char *string_nconcat(char *s1, char *s2, unsigned int n);
Function that concatenates two strings.

void *_calloc(unsigned int nmemb, unsigned int size);
Function that allocates memory for an array, using malloc.
```

#### Holberton School Repository