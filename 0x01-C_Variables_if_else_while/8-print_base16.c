#include <stdio.h>

/*
 * a program that prints the hexadecima base characters
 */

int	main(void)
{
	char	hex;

	hex = '0';
	while (hex <= '9')
	{
		putchar(hex);
		hex++;
	}
	hex = 'a';
	while (hex <= 'f')
	{
		putchar(hex);
		hex++;
	}
	putchar('\n');
}
