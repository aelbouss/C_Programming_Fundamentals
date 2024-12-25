#include "printf.h"

size_t	ft_print_unsigned(unsigned int n)
{
	static size_t cnt;

	cnt = 0;
	if (n < 10)
	{
		cnt += ft_putchar(n + '0');
		return (cnt);
	}
	else
	{
		ft_print_unsigned(n / 10);
		cnt += ft_putchar(n % 10 + '0'); 
	}
	return (cnt);
}



