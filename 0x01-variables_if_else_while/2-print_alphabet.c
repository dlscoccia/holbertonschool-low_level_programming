#include <unistd.h>
/*
*putchar
*/int _putchar(char c)
{
return (write(1, &c, 1));
}
/*
* main f
*/int main(void)
{
char c;
c = 'a';
while (c <= 'z')
{
_putchar(c);
c = c + 1;
}
_putchar('\n');
return (0);
}
