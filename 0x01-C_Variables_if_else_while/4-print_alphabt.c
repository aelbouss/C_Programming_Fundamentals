#include <stdio.h>

/*
 * a program that prints the lowercase alphabet except q and e
 */

int	main(void)
{
	char	alpha;

	alpha = 'a';
	while (alpha <= 'z')
	{
		if (alpha != 'q' && alpha != 'e')
			putchar(alpha);
		alpha++;
	}
	return (0);
}
