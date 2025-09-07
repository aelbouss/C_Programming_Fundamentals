#include <stdio.h>

int	main(void)
{
	short nbr;

	nbr = 0;
	while (nbr < 10)
	{
		printf("%i", nbr);
		nbr++;
	}
	putchar('\n');
	return (0);
}
