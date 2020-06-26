#include <stdio.h>
2
3int main(void)
4{
	5  int n;
	6  int a[5];
	7  int *p;
	8
		9  a[2] = 1024;
	10  p = &n;
	11  *p = 98; a[2] = n;
	12  /*
	      13   * write your line of code here...
	      14   * Remember:
	      15   * - you are not allowed to use a
	      16   * - you are not allowed to modify p
	      17   * - only one statement
	      18   * - you are not allowed to code anything else than this line of code
	      19   */
		20  ;
	21  /* ...so that this prints 98\n */
		22  printf("a[2] = %d\n", a[2]);
	23  return (0);
	24}
