#include <stdio.h>

/*
 * a program that prints all the possible combinations of a single digit
 */

int	main(void)
{
	short	nbr;

	nbr = 0;
	while(nbr <= 9)
	{
		putchar(nbr + '0');
		if (nbr < '9')
		{
			putchar(',');
			putchar(' ');
		}
		nbr++;
	}
	putchar('\n');
	return(0);
}
