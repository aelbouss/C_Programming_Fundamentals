#include <stdio.h>
#include <limits.h>

int	main(void)
{
	unsigned long int	n1, n2, r;
	unsigned long int 	fib1_half1, fib1_half2, fib2_half1, fib2_half2 , half1, half2;
	short			i ;

	n1 = 0;
	n2 = 1;
	r = 0;
	i = 0;
	while (i < 91)
	{
		r = n1 + n2 ;
		printf("%lu", r);
		if (i != 97)
			printf(", ");
		n1 = n2;
		n2 = r;
		i++;
	}

	fib1_half1 = n1 / 10000000000;
        fib1_half2 = n1 % 10000000000;
	fib2_half1 = n2 / 10000000000;
	fib2_half2 = n2 % 10000000000;	
	while (i < 97)
	{
		half1 = fib1_half1 + fib2_half1;
		half2 = fib1_half2 + fib2_half2;
		if (fib1_half1 + fib2_half2 > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;  
		}
		printf("%lu%lu", half1, half2);
		if (i < 96)
			printf(", ");
		fib1_half1 = fib2_half1;
		fib1_half2 = fib2_half2;
		fib2_half1 = half1;
		fib2_half2 = half2;
		i++;
	}
	printf("\n");
	return (0);
}
