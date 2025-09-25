#include <unistd.h>
#include <stdio.h>

/*
 * a program that computes the sum of all -
 * the multiples of 3 and 5 and print it to the stdout 
 */

void	_putchar(char c);
void	print_dec(int nbr);

int	main(void)
{
	int	sum;
	int	i;

	i = 0;
	sum = 0;
	while (i <= 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
		i++;	
	}
	printf("the sum of all multiples of 5 and 3 is : %d ", sum);	
	return (0);
}
