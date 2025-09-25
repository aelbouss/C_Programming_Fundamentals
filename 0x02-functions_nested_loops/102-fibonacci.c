#include <unistd.h>
#include <stdio.h>

/*
 * a program that prints the first 13 fibonacci sequence
 */
int	main(void)
{
	long int	n1;
	long int 	n2;
	long int 	r;
	short	i;

	n1 = 1;
	n2 = 0;
	i = 0;
	r = 0;
	while (i < 50)
	{
		r = n1 + n2;
		n1 = n2;
		n2 = r;
		printf("%ld", r);
		if (i != 49)
			printf(", ");
		i++;
	}
	printf("\n");
	return (0);
}
