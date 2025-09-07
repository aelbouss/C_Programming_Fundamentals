#include <stdio.h>

/*
 * a program that prints all the possible combination of four numbers 
 */

int	main(void)
{
	char	nbr1;
	char	nbr2;

	nbr1 = 0;
	while (nbr1 <= 98)
	{
		nbr2 = nbr1 + 1;
		while (nbr2 <= 99)
		{
			putchar((nbr1 / 10) + '0');
			putchar((nbr1 % 10) + '0');
			putchar(' ');
			putchar((nbr2 / 10) + '0');
			putchar((nbr2 % 10) + '0');
			if (nbr1 + nbr2 != 197)
			{
				putchar(',');
				putchar(' ');
			}
			nbr2++;

		}
		nbr1++;
	}
}
