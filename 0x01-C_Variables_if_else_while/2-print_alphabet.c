#include <stdio.h>

/*
 * a program that prints the lowercase alphabets 	
 */

int	main(void)
{
	char	alpha;

	alpha = 'a';
	while (alpha < 'z')
		putchar(alpha++);
	putchar(alpha);
	return (0);
}
