#include "printf.h"

size_t	_hex(unsigned long int n)
{
	char	*hex;
	static	int	cnt;

	cnt = 0;
	hex = "0123456789abcdef";
	if (n >= 16)
	{
		_hex(n / 16);
	}
	cnt += ft_putchar(hex[n % 16]);
	return (cnt);
}

size_t	ft_print_address(void *address)
{
	unsigned long int	add;
	size_t cnt;

	if  (!address)
		return(ft_putstr("(nil)"));
	cnt = 0;
	add = (unsigned long int)address;
	cnt += ft_putstr("0x");
	cnt += _hex(add);
	return (cnt);
}
