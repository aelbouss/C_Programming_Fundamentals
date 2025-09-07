#include <stdio.h>

/*
 * a program that prints the alphabets lowercase and uppercase
 */

int	main(void)
{
	char	alpha;

	alpha = 'a';
	while (alpha < 'z')
	{
		putchar(alpha);
		alpha++;
	}	
	alpha = 'A';
	while (alpha < 'Z')
	{		
		putchar(alpha);
		alpha++;
	}
	putchar('\n');		
	return(0);
}
