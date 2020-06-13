#include <unistd.h>
/*
* main
*/int main(void)
{
char c;
c = '0';
while (c <= '9')
{
putchar(c);
c = c + 1;
}
putchar('\n');
return (0);
}
