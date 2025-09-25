#include <unistd.h>

/*
 *  a function that print the lower case alphabets
 */

void	print_alphabet(void);
void	_putchar(int c);

void print_alphabet(void)
{
	char	alpha;

	alpha = 'a';
	while(alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
}
