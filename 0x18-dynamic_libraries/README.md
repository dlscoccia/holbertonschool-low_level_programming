# What is a Library?

A library is a file that contains several object files and can be used as a single entity in the linking phase of the program.

The main reason for using libraries is to make compiling easier. For example, if we have a function that calls many other functions. To compile we would have to include all those functions in the command line, or instead, we can use a library and just use one simple command that will link the library with our file.

There are 2 types of libraries — Static Libraries and Dynamic Libraries.

<img src="https://www.google.com/url?sa=i&url=https%3A%2F%2Fpediaa.com%2Fwhat-is-the-difference-between-static-and-dynamic-linking%2F&psig=AOvVaw3ghh9D6zeeAFkJ-lCLMB7Y&ust=1599759572689000&source=images&cd=vfe&ved=0CAIQjRxqFwoTCJis6fzO3OsCFQAAAAAdAAAAABAD">

A static library is usually identified by a .a (for "archive") suffix (e.g. libc.a). The library contains the modules you want to include in your program and is formatted as a collection of ELF object modules that the linker can then extract (as required by your program) and bind with your program at link time.
This "binding" operation copies the object module from the library and incorporates it into your "finished" executable.

The major advantage of this approach is that when the executable is created, it's entirely self-sufficient — it doesn't require any other object modules to be present on the target system. This advantage is usually outweighed by two principal disadvantages, however:

> Every executable created in this manner has its own private copy of the library's object modules, resulting in large executable sizes (and possibly slower loading times, depending on the medium).
> You must relink the executable to upgrade the library modules that it's using.
___
A dynamic library is a programming concept in which shared libraries with special functionalities are launched only during program execution, which minimizes overall program size and facilitates improved application performance for reduced memory consumption. Is usually identified by a .so (for "shared object") suffix (e.g. libc.so).

In most software programs, distributing specific functionalities into distinct modules allows loading as needed. A dynamic library is never part of an executable file or application. During runtime, a link is established between a dynamic library and executable file or application.

The the dynamic library is loaded into the address space during execution runtime or launch. When loaded at execution runtime, a dynamic library is known as a "dynamically loaded library" or "dynamically linked library." When loaded at launch, a dynamic library is known as a "dynamic dependent library."
 One of the most important benefits of using static libraries is execution speed at run-time. Because the it’s object code (binary) is already included in the executable file, multiple calls to functions can be handled much more quickly than a dynamic library’s code, which needs to be called from files outside of the executable.

The downside of using a static library is that it’s code is locked into the final executable file and cannot be modified without a re-compile. In contrast, a dynamic library can be modified without a need to re-compile. Because dynamic libraries live outside of the executable file, the program need only make one copy of the library’s files at compile-time.

The benefit of using a dynamic library is that only one copy of the shared library is kept in memory, making it much faster to compile programs and significantly reducing the size of the executable program
The downside of using a dynamic library is that a program is much more susceptible to breaking. If a dynamic library for example becomes corrupt, the executable file may no longer work. A static library, however, is untouchable because it lives inside the executable file.
___
## ¿How to create a dynamic library?
``` bash
gcc *.c -c -fpic
```
The .c source files need to be prepared for use in a dynamic library. Since multiple programs can all use one instance of a dynamic library, the library can’t store data at fixed addresses. This is because the location of the library in memory will vary between programs. This is done by using the compiler flag -fpic. Since we need to apply this step after the compile process has generated the object code, the compiler must be told to halt and return one object file (.o) for each source file. This is done by using the -c flag.
``` bash
gcc *0 -shared -o liball.so
```

The object files are now ready to be compiled into a dynamic library. This is done by compiling all of the .o files using by using the -shared flag. Later when compiling program files, the compiler identifies a library by looking for files beginning with ‘lib’ and ending with a library extension (.so for dynamic, .a for static). Therefore it’s important to name a library accordingly.

``` bash
export LD_LIBRARY_PATH=$PWD:$LD_LIBRARY_PATH
```

Because a program needs to know where to look for library files, we must add that location to the environmental variable LD_LIBRARY_PATH.

In Linux, the environment variable LD_LIBRARY_PATH is a colon-separated set of directories where libraries should be searched for first, before the standard set of directories; this is useful when debugging a new library or using a nonstandard library for special purposes. The environment variable LD_PRELOAD lists shared libraries with functions that override the standard set, just as /etc/ld.so.preload does.

The point of creating a dynamic library is to use it with other programs. You can compile your code as follows:
``` bash
gcc -L test.c -lholberton -o test
```
In the above command, it is worth noting that your source code, test_code.c in this case, needs to be listed before the -l flag. The expression, -lcombined with holberton tells the compiler to look for a dynamic library called libholberton.so, while the -L flag tells the compiler to look in the current directory for the library file. This is why it is important to use the standard format for naming that I described earlier. For instance, if test.c was the following:
``` bash
#include "holberton.h"
int main(void)
{
     _putchar("a");
     return (0);
}
```

When executing gcc -L test.c -lholberton -o test would generate an executable file called test. To accomplish this, the compiler looks through the library that is specified with the -l flag for the _putchar function object code.

> Executing test would give us the following output: a.

In order to list all the functions that a dynamic library holds, we can use the command nm, that displays the symbol table associated with an object, archive library of objects, or executable file
