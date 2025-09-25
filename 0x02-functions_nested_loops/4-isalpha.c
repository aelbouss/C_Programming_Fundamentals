#include <unistd.h>
#include <stdio.h>

void	_putchar(char c);
int	_isalpha(int c);

/*
 * a function that checks if a character is an alphabet
 * returns 1 if alphabet otherways 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
