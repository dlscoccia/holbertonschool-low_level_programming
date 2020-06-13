#include <unistd.h>
#include <stdio.h>

/*
* main f
*/int main(void)
{
char c;
c = 'a';
while (c <= 'z')
{
if (c != 'e' && c != 'q')
putchar(c);
c = c + 1;
}
putchar('\n');
return (0);
}
