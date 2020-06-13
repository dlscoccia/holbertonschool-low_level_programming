#include <unistd.h>
#include <stdio.h>
/*
* main
*/int main(void)
{
char c, d;
c = '0';
d = 'a';
while (c <= '9')
{
putchar(c);
c = c + 1;
}
while (d <= 'f')
{
putchar(d);
d = d + 1;
}
putchar('\n');
return (0);
}
