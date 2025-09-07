#include <stdio.h>

/*
 * a program that prints the lowercase alphabets in reverse order
 */

int	main(void)
{
	char	alpha;

	alpha = 'z';
	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');
	return(0);
}
