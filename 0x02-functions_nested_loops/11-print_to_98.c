#include <unistd.h>

void	print_to_98(int n);
void	_putchar(char c);

void	print_to_98(int n)
{
	while (n <= 98)
	{
		if (n < 10)
			_putchar(n + '0');
		else
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}

		n++;
	}
}

int	main(void)
{
	print_to_98(-10);
	return (0);
}
