#include <stdio.h>

/*
 * a program that prints all the possible combination of two digits 
 */

int	main(void)
{
	char	nbr1;
	char	nbr2;

	nbr1 = 0;
	while (nbr1 <= 8)
	{
		nbr2 = 0;
		while (nbr2 <= 9)
		{
			putchar(nbr1 + '0');
			putchar(nbr2 + '0');
			if (nbr1 + nbr2 != 17)
			{
				putchar(',');
				putchar(' ');
			}
			nbr2++;
		}
		nbr1++;
	}
	return(0);
}
