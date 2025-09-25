#include <unistd.h>

int _islower(int c);
void	_putchar(char c);

/* 
 * function that checks if a char lower case or upper case
 * uppercase will returns 1 otherways 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return(1);
	return (0);
}
