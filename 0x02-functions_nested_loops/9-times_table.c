#include <unistd.h>

/*
 * a function that prints 9 times table
 */

void	times_table(void);
void	_putchar(char c);
void	print_dec(char n);
void	print_delemeter(char f1, char f2);

void	print_dec(char n)
{
	if (n < 10)
		_putchar(n + '0');
	else
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
}

void	print_delemeter(char f1, char f2)
{
	char	r1;
	char	r2;

	r1 = f1 * f2;
	r2 = f1 * (f2 + 1);
	if (r1 <= 9 && r2 <= 9)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
	}
	else if (r1 <= 9 && r2 > 9)
	{	
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
	}
	else
	{
		_putchar(',');
		_putchar(' ');
	}
}

void	times_table(void)
{
	char	f1;
	char	f2;

	f1 = 0;
	while (f1 <= 9)
	{
		f2 = 0;
		while (f2 <= 9)
		{
			print_dec(f1 * f2);
			if (f2 != 9)
				print_delemeter(f1, f2);
			f2++;
		}
		_putchar('\n');
		f1++;
	}
}
