#include <unistd.h>

/*
 * a function that print and returns the last digit of an integer 
 */

void	_putchar(char c);
int	print_last_digit(int);

int	print_last_digit(int n)
{
	_putchar((n % 10) + '0');
	return (n % 10);
}
