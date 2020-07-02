/*
 * Function to find sqaure root using n exponent
 */ int _pow_recursion(int x, int y)
{
	if (y * y == x)
		return (y);
	else if (y * y > x)
		return (-1);
	else
		return (_pow_recursion(x, y + 1));
}
/*
 * Function to evaluate result of sqaure root
 */ int _sqrt_recursion(int n)
{
	int i;

	if (n == 1)
		i = 1;
	else if (n < 1)
		i = -1;
		else
			i = (_pow_recursion(n, 2));
	return (i);
}
