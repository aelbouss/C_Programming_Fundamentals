#include <stdio.h>

/*
 * program that prints the decimal digits only by using putchar 
 */

int	main(void)
{
	char	nbr;

	nbr = 0;
	while (nbr < 10)
	{
		putchar(nbr + 48);
		nbr++;
	}
	putchar('\n');
	return (0);
}
