
/*
 *  a function that returns the absolute value of an integer
 */

int	_abs(int);

int	_abs(int n)
{
	if (n < 0)
		return (n * (-1));
	return (n);
}
