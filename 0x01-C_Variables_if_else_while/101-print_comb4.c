#include <stdio.h>

/*
 * a program that prints all the possible combination of three numbers
 */

int	main(void)
{
	char	nbr1;
	char	nbr2;
	char	nbr3;

	nbr1 = 0;
	while (nbr1 < 8)
	{
		nbr2 = nbr1 + 1;
		while (nbr2 <= 8)
		{
			nbr3 = nbr2 + 1;
			while (nbr3 < 10)
			{
				putchar(nbr1 + '0');
				putchar(nbr2 + '0');
				putchar(nbr3 + '0');
				if ((nbr1 * nbr2 * nbr3) != 504)
				{
					putchar(',');
					putchar(' ');
				}
				nbr3++;
			}
			nbr2++;
		}
		nbr1++;
	}
	putchar('\n');
	return(0);
}
