#include <stdio.h>

/*
 * a program that prints the value of all fibonaci numbers under 4.000.000
 */

int	main(void)
{
	long int	n1;
	long int	n2;
	long int	r;
	long int	sum;

	n1 = 1;
	n2 = 0;
	r = 0;
	sum = 0;
	while(1)
	{
		if (r >= 4000000)
			break ;
		r = n1 + n2;
		if (r % 2 == 0)
			sum += r;
		n1 = n2;
		n2 = r;
	}
	printf("the  sum is : %ld\n", sum);
	return (0);
}
