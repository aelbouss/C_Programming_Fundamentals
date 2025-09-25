#include <unistd.h>
#include <stdio.h>

/*
 * a function that checks if a number is negative or positive
 */

void	_putchar(char c);
int	print_sign(int n);

int	print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return(1);
	}
	else if(n < 0)
	{
		_putchar('-');
		return(-1);
	}
	_putchar('0');
	return (0);
}
