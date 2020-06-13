#include <unistd.h>
#include <stdio.h>
/*
 * main
 */int main(void)
{
int c;
c = '0';
while (c < '9')
{
putchar(c);
c = c + 1;
putchar(',');
putchar(' ');
}
putchar('9');
return (0);
}
