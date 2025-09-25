#include <unistd.h>
#include <stdio.h>

void	_putchar(char c);
void	print_times_table(int n);
void	print_delemeter(unsigned char f1, unsigned char f2);
void	print_dec(int nbr);


void	print_dec(int nbr)
{
	if (nbr > 9)
		print_dec(nbr / 10);

	_putchar((nbr % 10)  + '0');
}

void	print_delemeter(unsigned char f1, unsigned char f2)
{
	unsigned char	curr;
	unsigned char	next;

	curr = f1 * f2;
	next = f1 * (f2 + 1);

	if (curr <= 9 && next <= 9)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
	}
	if ((curr <= 9 && next > 9) || ((curr > 9 && curr <= 99) ||
				(next > 9 && next <= 99)))
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
	}
	else if (curr > 99 && next > 99)
	{
		_putchar(',');
		_putchar(' ');	
	}
}

void	print_times_table(int n)
{
	unsigned char	f1;
	unsigned char	f2;
	unsigned char	max;


	if (n < 0 || > 15)
		return ;
	f1 = 0;
	max = n;
	while(f1 <= max)
	{
		f2 = 0;
		while (f2 <= max)
		{	
			print_dec((int)(f1 * f2));
			 if (f2 != max)
				print_delemeter(f1, f2);
			f2++;
		}
		_putchar('\n');
		f1++;
	}
}
