#include <unistd.h>
#include <stdio.h>

/*
* main f
*/int main(void)
{
char c;
char d;
c = 'a';
d = 'A';
while (c <= 'z')
{
putchar(c);
c = c + 1;
}
while (d <= 'Z')
{
putchar(d);
d = d + 1;
}
putchar('\n');
return (0);
}
