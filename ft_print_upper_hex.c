#include "printf.h"

size_t	ft_print_upper_hex(unsigned int n)
{
	char	*hex;
	size_t	cnt;
	
	cnt = 0;
	hex = "0123456789ABCDEF";
	if (n >= 16)
		cnt += ft_print_upper_hex(n / 16);
	cnt += ft_putchar(hex[n % 16]);
	return (cnt);
}


