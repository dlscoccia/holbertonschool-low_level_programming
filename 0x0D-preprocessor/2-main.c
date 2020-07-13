#include <stdio.h>
/**
 * main - printf the name of the file it was compiled from
 * @void: no arguments
 * Return: 0 for succeded execution
 **/
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
