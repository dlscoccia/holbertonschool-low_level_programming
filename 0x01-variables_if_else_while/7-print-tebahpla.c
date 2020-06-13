#include <unistd.h>
#include <stdio.h>
/*
* main f
*/int main(void)
{
char c;
c = 'z';
while (c >= 'a')
{
putchar(c);
c = c - 1;
}
putchar('\n');
return (0);
}

